// src/entities/modules/weapon/Weapon.hpp
#include "Module.hpp"
#include <iostream>

class Weapon : public Module {
protected:
    float caliber;
    float reloadTime;
public:
    Weapon(float c, float r) : caliber(c), reloadTime(r) {}
    
    void fire() {
        std::cout << "Menembakkan kaliber " << caliber << "mm. Reload: " << reloadTime << "s" << std::endl;
    }
    
    void showStatus() override {
        std::cout << "[Weapon] Status: Ready. Caliber: " << caliber << "mm" << std::endl;
    }
};