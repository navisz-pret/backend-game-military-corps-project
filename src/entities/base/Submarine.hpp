#ifndef SUBMARINE_HPP
#define SUBMARINE_HPP

#include "Ship.hpp"

class Submarine : public Ship {
protected:
    int depth; // Kedalaman saat ini
    bool isSubmerged;

public:
    Submarine(std::string n, std::string nat, int y) 
        : Ship(n, nat, "Submarine", y), depth(0), isSubmerged(false) {}

    // Fungsi unik kapal selam
    virtual void toggleSubmerge() {
        isSubmerged = !isSubmerged;
        std::cout << "[Submarine] " << name << (isSubmerged ? " menyelam." : " muncul ke permukaan.") << std::endl;
    }

    void displayInfo() override {
        std::cout << "[Submarine] " << name << " (" << nation << ") - Status: " 
                  << (isSubmerged ? "Menyelam" : "Di permukaan") << std::endl;
    }
};

#endif