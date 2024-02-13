#include <iostream>
#include "olcConsoleGameEngine.h"

class olcEngine3D : olcConsoleGameEngine {
public: 
    olcEngine3D() {

    }

public: 
    bool OnUserCreate() override {
        return true;
    }

    bool OnUserUpdate(float fElapsedTime) override {
        return true;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}