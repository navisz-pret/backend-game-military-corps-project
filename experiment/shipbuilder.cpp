#include <iostream>
#include <string>
#include <vector>
#include "../src/entities/base/Ship.hpp" // Ini hanya untuk referensi struktur

// Eksperimen: Cara membuat kapal tanpa harus membuat kelas baru
struct ShipBlueprint {
    std::string name;
    float speed;
    float armor;
};

void spawnShip(ShipBlueprint data) {
    std::cout << "--- Kapal siap tempur!!---" << std::endl;
    std::cout << "Nama: " << data.name << std::endl;
    std::cout << "Speed: " << data.speed << " knots" << std::endl;
    std::cout << "Armor deck: " << data.armor << " mm" << std::endl;
    std::cout << "Kapal berhasil ditambahkan ke armada!" << std::endl;
}

int main() {
    std::vector<ShipBlueprint> armada;
    
    // Kamu bisa otak-atik nilai ini sesuka hati tanpa merusak apapun!
    
        armada = {
            {"SMS Emden", 23.5f, 80.0f},
            {"SMS dresden", 24.0f, 80.0f},
            {"SMS Königsberg", 24.1f, 80.0f},
            {"SMS Karlshure", 27.5f, 40.0f}
        };

        for (const auto& kapal : armada) {
        spawnShip(kapal);
        }
    

        std::cout << "Total kapal di armada saat ini: " << armada.size() << " kapal." << std::endl;
    
    return 0;
}