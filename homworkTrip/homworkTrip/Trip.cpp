#include "Trip.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>


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
	for (int i = 0; i < sizeof(sites); i++) {
		for (int j = 0; j < sizeof(*sites); j++) {
			*(this->site[i]) = **sites;
			*(this->site[i])++;
			**sites++;
		}
		*sites++;
		*(this->site)++;
	}
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
//брай
Trip::Trip(int id, enum area, char** sites, int numOfBus, int orders, int wating, int cost, int sumOfeXpenses, Date date) {
	this->id=id;
	/*this->area=area;*/
	for (int i = 0; i < sizeof(sites); i++) {
		for (int j = 0; j < sizeof(*sites); j++) {
			*(this->site[i]) = **sites;
			*(this->site[i])++;
			**sites++;
		}
		*sites++;
		*(this->site)++;
	}
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
	char** sites=sites;//not clear for me!!!
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
	for (int i = 0; i < sizeof(site); i++) {
		delete site[i];
		*site++;
	}
	delete site;
}

int Trip::numOfPass(){
	return 50* getNumOfBus();
}

bool Trip::ifVisit(char* site) {
	bool flag = true;
	for (int i = 0; i <sizeof(getSites()); i++) {
		for (int j = 0; j < sizeof(site)&&flag; j++) {
			if (!(*(getSites()[i]) == *site))
				flag=false;
			*(getSites()[i])++;
			*site++;
		}
		if (flag)
			return true;
		flag = true;
	}
	return false;
}

int Trip::numVisit() {
	return sizeof(getSites());//
}

int Trip::numAvailable() {
	return numOfPass() - getOrders();
}

void Trip::insertOrders(int numOrders) {
	if (numAvailable() >= numOrders){
		setOrders(getOrders() + numOrders);
		cout << "the invating succssesed!" << endl;
	}
	else {
		while(numAvailable()!=0){
			setOrders(getOrders() + 1);
			numOrders -= 1;
		}
		setWating(getWating()+ numOrders);
		cout << numOrders<<" in waiing." << endl;
	}
}

void Trip::printDetails() {
	cout << "id: " << getId() << ", area: " << getArea() << ", site: " << getSites()
		<< ", num of bus: " << getNumOfBus() << ", orders: " << getWating() << ", cost: "<<
		getCost() << ", sum of expenses: " << getSumOfeXpenses() << ", date: "<<
		 getDate() << endl ;
}

int Trip::earn() {
	return getOrders() - getSumOfeXpenses();
}

void Trip::addBusToWaite(int raf) {
	if (numAvailable == 0 && getWating() > raf) {
		setNumOfBus(getWating() / 50 + 1);
		setOrders(getWating());
		setWating(0);
		cout << "the orders were received!" << endl;
	}
	else
		cout << "there are not enogh waiting." << endl;
}