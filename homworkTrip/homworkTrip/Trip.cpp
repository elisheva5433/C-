#include "Trip.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>


using namespace std;

int Trip::getId() {
	return id;
}
//area Trip::getArea() {
//	return area;
//}
char** Trip::getSites() {
	return sites;
}
int Trip::getNumOfBus() {
	return numOfBus;
}
int Trip::getOrders() {
	return orders;
}
int Trip::getWating() {
	return wating;
}
int Trip::getCost() {
	return cost;
}
int Trip::getSumOfeXpenses() {
	return sumOfeXpenses;
}
Date Trip::getDate() {
	return date;
}

void Trip::setId(int id) {
	if (id > 100)
		this->id = id;
	else
		cout << "error!";
}
//void Trip::setArea(enum area) {
//	this->area=area;
//}
void Trip::setSites(char** sites) {
	this->sites = sites;
}
void Trip::setNumOfBus(int numOfBus) {
	this->numOfBus = numOfBus;
}
void Trip::setOrders(int order) {
	this->orders = orders;
}
void Trip::setWating(int wating) {
	this->wating = wating;
}

void Trip::setCost(int cost) {
	this->cost = cost;
}
void Trip::setSumOfeXpenses(int sumOfeXpenses) {
	this->sumOfeXpenses = sumOfeXpenses;
}
void Trip::setDate(Date date) {
	this->date = date;
}

Trip::Trip(int id, enum area, char** sites, int numOfBus, int orders, int wating, int cost, int sumOfeXpenses, Date date) {
	this->id=id;
	/*this->area=area;*/
	this->sites=sites;
	this->numOfBus;
	this->orders;
	this->wating;
	this->cost;
	this->sumOfeXpenses;
	this->date;
}

Trip::Trip(const Trip& other) {
	id=other.id;
	area = other.area;
	sites=new char*[21];//not clear for me!!!
	numOfBus=other.numOfBus;
	orders=other.orders;
	wating=other.wating;
	cost=other.cost;
	sumOfeXpenses=other.sumOfeXpenses;
	date=other.date;
}

Trip::Trip(Trip&& other) {
	id = other.id;
	area = other.area;
	sites =other.sites;
	other.sites = nullptr;
	numOfBus = other.numOfBus;
	orders = other.orders;
	wating = other.wating;
	cost = other.cost;
	sumOfeXpenses = other.sumOfeXpenses;
	date = other.date;
}

Trip::~Trip() {
	delete *sites;
	delete sites;
}

int numOfPass() {
	return 50* getNumOfBus();
}

bool ifVisit(char site[10]) {
	for (int i = 0; i < 20; i++) {
		if (getSites()[i] == site)
			return true;
	}
	return false;
}