#include "Vessel.h"

Vessel::Vessel():Transport()
{
}

Vessel::Vessel(string name, double weight, double fuel, int passenger_capacity, string ocean) 
{
	this->name = name;
	this->weight = weight;
	this->fuel = fuel;
	this->passenger_capacity = passenger_capacity;
	this->ocean = ocean;
}

void Vessel::Input()
{
	cout << "Enter vehicle name -> ";
	cin >> name;
	cout << "Enter weight -> ";
	cin >> weight;
	cout << "Enter fuel consumption per 1 ml -> ";
	cin >> fuel;
	cout << "Enter passenger capacity -> ";
	cin >> passenger_capacity;
	cout << "Which ocean is the ship sailing -> ";
	cin >> ocean;
}

void Vessel::Print() const
{
	cout << "Kind of transport : " << name << endl;
	cout << "Transport weight : " << weight << endl;
	cout << "Fuel consumption per 1 ml : " << fuel << endl;
	cout << "Passenger capacity : " << passenger_capacity << endl;
	cout << "In which ocean does the ship sail : " << ocean;
}

double Vessel::Fuel_consumption()
{
	double all_fuel;
	all_fuel = fuel / 100;
	return all_fuel;
}
