#pragma once
#include "Survivor.h"

class Tribe
{
private:
	char tribe_name[20];
	int max_of_survivor;
	Survivor** survivors;
	int num_of_survivors;
public:
	void setTribe(const char* Tribe_name, int Max_of_survivor);
	bool addSurvivor(const char* survi_name, int survi_age);
	void freeSurvivor(const char* survivor_name);
	void printAllOfSurvivors();
	int getMaxOfSurvivors();
	void freeAllSurvivors();
};

