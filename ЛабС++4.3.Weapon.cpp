#include "Weapon.h"
#include <iostream>

Weapon::Weapon(std::string name, int damage, float weight) 
    : name(name), damage(damage), weight(weight) {}

Weapon::Weapon() : Weapon("Sword", 10, 2.5f) {}

Weapon::~Weapon() {
    std::cout << "Deleting: " << name << " (" << damage << " dmg, " 
              << weight << " kg)" << std::endl;
}

bool Weapon::isTooHeavy(float maxWeight) {
    return weight > maxWeight;
}

float Weapon::totalWeight(Weapon other) {
    return totalWeight(other.weight);
}

float Weapon::totalWeight(float otherWeight) {
    return weight + otherWeight;
}

void Weapon::print() {
    std::cout << name << ": " << damage << " damage, " 
              << weight << " kg" << std::endl;
}
