#include <unordered_map>

namespace utils {
  const int*  const C_CAR_PTR     = (int*)  0x00700D54;
  const int*  const CARS_ADDR_PTR = (int*)  0x00734588;
  const int*  const C_TRACK_PTR   = (int*)  0x0078A2F0;

  std::unordered_map<std::string, const char*> CAR_TABLE = {
    {"GOLF", "Volkswagen Golf GTI"},
    {"FOCUS", "Ford Focus ZX3"},
    {"MIATA", "Mazda Miata"},
    {"NEON", "Dodge Neon"},
    {"CIVIC", "Honda Civic Coupe Si"},
    {"PEUGOT", "Peugeot 206 GTi"},
    {"Celica", "Toyota Celica GT-S"},
    {"ECLIPSE", "Mitsubishi Eclipse GSX"},
    {"RX7", "Mazda RX-7"},
    {"SUPRA", "Toyota Supra"},
    {"S2000", "Honda S2000"},
    {"RSX", "Acura RSX Type S"},
    {"IMPREZA", "Subaru Impreza RS"},
    {"LANCER", "Mitsubishi Lancer ES"},
    {"INTEGRA", "Acura Integra Type R"},
    {"TIBURON", "Hyundai Tiburon GT"},
    {"350Z", "Nissan 350Z"},
    {"SENTRA", "Nissan Sentra SE-R Spec V"},
    {"240SX", "Nissan 240SX"},
    {"SKYLINE", "Nissan Skyline R34 GT-R"},
  };

  std::unordered_map<short, const char*> TRACK_TABLE = {
    {1001, "Market Street"},
    {1002, "Stadium"},
    {1003, "Olympic Square"},
    {1004, "Terminal"},
    {1005, "Atlantica"},
    {1006, "Inner City"},
    {1007, "Port Royal"},
    {1008, "National Rail"},
    {1099, "Test Track"},
    {1102, "Liberty Gardens"},
    {1103, "Broadway"},
    {1104, "Lock Up"},
    {1105, "9th & Frey"},
    {1106, "Bedard Bridge"},
    {1107, "Spillway"},
    {1108, "1st Ave. Truck Stop"},
    {1109, "7th & Sparling"},
    {1201, "14th & Vine Construction"},
    {1202, "Highway 1"},
    {1206, "Main Street"},
    {1207, "Commercial"},
    {1210, "14th & Vine"},
    {1214, "Main Street Construction"},
    {1301, "Drift Track 1"},
    {1302, "Drift Track 2"},
    {1303, "Drift Track 3"},
    {1304, "Drift Track 4"},
    {1305, "Drift Track 5"},
    {1306, "Drift Track 6"},
    {1307, "Drift Track 7"},
    {1308, "Drift Track 8"},
  };
}
