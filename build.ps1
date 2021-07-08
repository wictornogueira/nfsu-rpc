# Define optional flags
param (
  [switch] $l,  # Launch game
  [switch] $d,  # Generate dist file
  [switch] $c   # Perform clean build
)

# Delete old stuff
if ($c) {
  Remove-Item -Force -Recurse -Path "build"
  Remove-Item -Force -Recurse -Path "dist"
}

# Create build directory
New-Item -ItemType Directory -Force -Path "build\scripts" | Out-Null

# Compile
& i686-w64-mingw32-g++.exe -static-libgcc -static-libstdc++ -mthreads -I src\ -I include\ -L lib\ -l discord-rpc -shared -o build\scripts\nfsu-rpc.asi src\discord_rpc.cpp

if (!$LastExitCode) {
  Write-Output "Built successfully."

  # Copy discord-rpc.dll
  Copy-Item -Force "lib\discord-rpc.dll" -Destination "build\"

  # Create dist file
  if ($d) {
    New-Item -ItemType Directory -Force -Path "dist\" | Out-Null
    Compress-Archive -Force -Path "build\*" -DestinationPath "dist\nfsu-rpc.zip"
  }

  # Copy files and launch game
  if ($l -and $env:NFSU) {
    Copy-Item -Recurse -Force "build\*" -Destination "$env:NFSU"
    Start-Process -WorkingDirectory "$env:NFSU" -FilePath "$env:NFSU\Speed.exe"
  }

  exit
}

Write-Output "Failed to build."
