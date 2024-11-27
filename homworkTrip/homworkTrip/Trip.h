#pragma once
#include "Date.h"
class Trip
{
private:
	int id;
	enum area {
		NORTH,
		SOUTH,
		CENTRAL
	};
	char** sites;
	int numOfBus;
	int orders;
	int wating;
	int cost;
	int sumOfeXpenses;
	Date date;

	void setNumOfBus(int numOfBus);
	void setOrders(int order);
	void setWating(int wating);
public:
	int getId();
	area getArea();
	char** getSites();
	int getNumOfBus();
	int getOrders();
	int getWating();
	int getCost();
	int getSumOfeXpenses();
	Date getDate();

	void setId(int id);
	void setArea(enum area);
	void setSites(char** sites);
	
	void setCost(int cost);
	void setSumOfeXpenses(int sumOfeXpenses);
	void setDate(Date date);
	void setNumOfBus(int numOfBus);
	void setOrders(int order);
	void setWating(int wating);

	Trip()=default;
	Trip(int id, enum area, char** sites, int numOfBus, int orders, int wating, int cost, int sumOfeXpenses, Date date);
	Trip(const Trip& other);
	
};

