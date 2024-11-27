#include "Tribe.h"

#include <iostream>
#include <cstring>
#include <string>

void Tribe::setTribe(const char* Tribe_name, int Max_of_survivor) {
    strcpy(tribe_name, Tribe_name);
    max_of_survivor = Max_of_survivor;
}
bool Tribe::addSurvivor(const char* survi_name, int survi_age) {
    if (num_of_survivors == max_of_survivor)
        return false;
    survivors[num_of_survivors] = new Survivor;
    survivors[num_of_survivors]->setSurvi(survi_name, survi_age);
    num_of_survivors++;
    return true;
}
void Tribe::freeSurvivor(const char* survivor_name) {
    for (int i = 0; i < num_of_survivors; i++) {
        if (survivors[i]->getSurvivorName() == survivor_name){
            delete survivors[i];
            survivors[i] = survivors[num_of_survivors];
            delete survivors[num_of_survivors];
            num_of_survivors--;
        }
    }
}
void Tribe::printAllOfSurvivors() {
    for (int i = 0; i < num_of_survivors; i++) {
        survivors[i]->printDetails();
    }
}
int Tribe::getMaxOfSurvivors() {
    return max_of_survivor;
}
void Tribe::freeAllSurvivors() {
    for (int i = 0; i < num_of_survivors; i++) {
        delete survivors[i];
    }
    delete[]survivors;
}
