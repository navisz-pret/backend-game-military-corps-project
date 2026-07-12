#ifndef SHIP_HPP
#define SHIP_HPP

#include <string>
#include <iostream>

class Ship {
protected:
    std::string name;
    std::string nation; // Tambahan: Negara asal
    std::string type;   // Tambahan: Jenis kapal (Battleship, Cruiser, dll)
    int buildYear;

public:
    // Constructor dasar
    Ship(std::string n, std::string nat, std::string t, int y) 
        : name(n), nation(nat), type(t), buildYear(y) {}

    // Virtual destructor agar aman saat kita menghapus objek lewat pointer
    virtual ~Ship() {} 

    // Pure virtual function
    virtual void displayInfo() = 0;

    // Getter (berguna nanti untuk sistem Manager)
    std::string getName() const { return name; }
    std::string getNation() const { return nation; }
};

#endif