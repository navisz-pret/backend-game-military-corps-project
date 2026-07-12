// src/entities/Warship.hpp
#ifndef WARSHIP_HPP
#define WARSHIP_HPP
#include "Ship.hpp"

class Warship : public Ship {
public:
    Warship(std::string n, std::string nat, int y) : Ship(n, nat, "Warship", y) {}
    // Bisa tambah fitur common warship seperti "Fire All Guns" di sini
};
#endif