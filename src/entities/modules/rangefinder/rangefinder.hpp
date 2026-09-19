#ifndef SENSOR_RANGEFINDER_HPP
#define SENSOR_RANGEFINDER_HPP

#include "module.hpp"
#include <iostream>

class Rangefinder : public Module { // Pastikan ada 'public'
public:
    // Override harus punya nama fungsi dan parameter yang sama persis
    void showStatus() override {
        std::cout << "[Rangefinder] Status: Operational" << std::endl;
    }

    std::string getName() override {
        return "Optical Rangefinder";
    }
};

#endif
