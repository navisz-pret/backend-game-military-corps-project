// src/entities/modules/base/Module.hpp
#ifndef MODULE_HPP
#define MODULE_HPP
#include <string>

class Module {
public:
    virtual ~Module() = default;
    virtual void showStatus() = 0; // Wajib diimplementasikan
    virtual std::string getName() = 0;
};
#endif