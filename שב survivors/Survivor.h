#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class Survivor {
private:
	char surviName[20];
	int age;
public:
	void setSurvi(const char* surviName,int age);
	void printDetails();
	char* getSurvivorName();
};

