#include "Truk.h"
#include <iostream>

Truk::Truk():Transport()
{
}

Truk::Truk(string name, double weight, double fuel, int passenger_capacity, double truk_capacity)
{
	this->name = name;
	this->weight = weight;
	this->fuel = fuel;
	this->passenger_capacity = passenger_capacity;
	this->truck_capacity = truck_capacity;
}

void Truk::Input()
{
	cout << "Enter vehicle name -> ";
	cin >> name;
	cout << "Enter weight -> ";
	cin >> weight;
	cout << "Enter fuel consumption per 1 km -> ";
	cin >> fuel;
	cout << "Enter passenger capacity -> ";
	cin >> passenger_capacity;
	cout << "Enter the capacity of the truck trailer -> ";
	cin >> truck_capacity;
}

void Truk::Print()const
{
	cout << "Kind of transport : " << name << endl;
	cout << "Transport weight : " << weight << endl;
	cout << "Fuel consumption per 1 km : " << fuel << endl;
	cout << "Passenger capacity : " << passenger_capacity << endl;
	cout << "Trailer capacity : " << truck_capacity << endl;
}

double Truk::Fuel_consumption()
{
	double all_fuel;
	all_fuel = fuel / 100;
	return all_fuel;
}
