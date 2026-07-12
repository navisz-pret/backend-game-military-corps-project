#ifndef BATTLECRUISER_HPP
#define BATTLECRUISER_HPP

#include "Ship.hpp"

class Battlecruiser : public Ship {
protected:
    int speedKnots;

public:
    Battlecruiser(std::string n, std::string nat, int y, int speed) 
        : Ship(n, nat, "Battlecruiser", y), speedKnots(speed) {}

    void displayInfo() override {
        std::cout << "[Battlecruiser] " << name << " (" << nation 
                  << ") - Kecepatan: " << speedKnots << " knot." << std::endl;
    }
};

#endif