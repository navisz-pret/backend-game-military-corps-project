// src/entities/modules/base-engine/Engine.hpp
#ifndef ENGINE_HPP
#define ENGINE_HPP
#include "Module.hpp"
#include <iostream>

class Engine : public Module {
protected:
    float maxPower;
    float currentHeat; // Mesin WW1 rawan overheat

public:
    Engine(float power) : maxPower(power), currentHeat(0.0f) {}
    
    // Pure virtual: setiap mesin punya cara berbeda untuk menghasilkan thrust
    virtual void generateThrust() = 0; 
    
    void showStatus() override {
        std::cout << "[Engine] Power: " << maxPower << "HP | Heat: " << currentHeat << "%" << std::endl;
    }
};
#endif