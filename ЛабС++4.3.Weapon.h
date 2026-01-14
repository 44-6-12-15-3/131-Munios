#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
public:
    std::string name;
    int damage;
    float weight;
    
    Weapon(std::string name, int damage, float weight);
    Weapon();
    
    ~Weapon();
    
    bool isTooHeavy(float maxWeight);
    float totalWeight(Weapon other);
    float totalWeight(float otherWeight);
    void print();
};

#endif
