// src/entities/Battleship.hpp
#include "Warship.hpp"

class Battleship : public Warship {
public:
    Battleship(std::string n, std::string nat, int y) : Warship(n, nat, y) {
        // Tipe khusus
    }
    void displayInfo() override {
        std::cout << "[Battleship] " << name << " milik " << nation << std::endl;
    }
};