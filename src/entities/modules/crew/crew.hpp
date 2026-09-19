// src/entities/modules/crew/Crew.hpp
#ifndef CREW_HPP
#define CREW_HPP

#include "module.hpp"
#include <iostream>
#include <string>

class Crew : public Module {
private:
    int totalCount;
    float fatigue; // Tingkat kelelahan (0.0 - 1.0)
    std::string department; // Contoh: "Engine Room", "Artillery", "Bridge"

public:
    Crew(int count, std::string dept) : totalCount(count), fatigue(0.0f), department(dept) {}

    // Semakin lelah kru, semakin lambat kerja mereka
    float getEfficiency() {
        return 1.0f - fatigue;
    }

    void workHarder() {
        fatigue += 0.1f; // Bekerja keras meningkatkan kelelahan
        std::cout << "[Crew-" << department << "] Bekerja paksa! Efisiensi saat ini: " 
                  << (getEfficiency() * 100) << "%" << std::endl;
    }

    void showStatus() override {
        std::cout << "[Crew] Dept: " << department << " | Count: " << totalCount 
                  << " | Fatigue: " << (fatigue * 100) << "%" << std::endl;
    }

    std::string getName() override { return "Crew Unit: " + department; }
};
#endif