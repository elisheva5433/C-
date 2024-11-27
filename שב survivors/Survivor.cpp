#include <iostream>
#include <cstring>
#include <string>
using namespace std;
#include "Survivor.h"


void Survivor::setSurvi(const char* SurviName, int Age) {
	strcpy(surviName,SurviName);
	age = Age;
}
void Survivor::printDetails() {
	cout << surviName << "," << age<<endl;
}
char* Survivor::getSurvivorName() {
	return surviName;
}
