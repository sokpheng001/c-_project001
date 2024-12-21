#include <iostream>
#include <string>
#include <random>
#include <sstream>
#include <iomanip>

std::string generateUUID() {
    // Random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<uint32_t> dist(0, 0xFFFFFFFF);

    std::stringstream ss;
    ss << std::hex << std::setfill('0');

    // Generate UUID parts
    ss << std::setw(8) << dist(gen) << "-";
    ss << std::setw(4) << (dist(gen) & 0xFFFF) << "-";
    ss << std::setw(4) << ((dist(gen) & 0x0FFF) | 0x4000) << "-";  // Set version to 4
    ss << std::setw(4) << ((dist(gen) & 0x3FFF) | 0x8000) << "-";  // Set variant to 1
    ss << std::setw(12) << dist(gen) << dist(gen);

    return ss.str();
}