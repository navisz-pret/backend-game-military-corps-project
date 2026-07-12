#ifndef SUPPORT_HPP
#define SUPPORT_HPP

#include "Ship.hpp"

class Support : public Ship {
protected:
    int cargoCapacity;
    int currentCargo;

public:
    Support(std::string n, std::string nat, int y, int capacity) 
        : Ship(n, nat, "Support", y), cargoCapacity(capacity), currentCargo(capacity) {}

    // Fungsi unik kapal support
    virtual void resupply(Ship& target) {
        std::cout << "[Support] " << name << " mengisi perbekalan untuk kapal lain." << std::endl;
    }

    void displayInfo() override {
        std::cout << "[Support] " << name << " (" << nation << ") - Kapasitas Kargo: " 
                  << currentCargo << "/" << cargoCapacity << std::endl;
    }
};

#endif