#include "Airplane.h"

Airplane::Airplane():Transport()
{
}

Airplane::Airplane(string name, double weight, double fuel, int passenger_capacity, string airport) 
{
	this->name = name;
	this->weight = weight;
	this->fuel = fuel;
	this->passenger_capacity = passenger_capacity;
    this->airport = airport;
}

void Airplane::Input()
{
	cout << "Enter vehicle name -> ";
	cin >> name;
	cout << "Enter weight -> ";
	cin >> weight;
	cout << "Enter fuel consumption per 1 ml -> ";
	cin >> fuel;
	cout << "Enter passenger capacity -> ";
	cin >> passenger_capacity;
	cout << "Enter from which airport the plane departs -> ";
	cin >> airport;
}

void Airplane::Print() const
{
	cout << "Kind of transport : " << name << endl;
	cout << "Transport weight : " << weight << endl;
	cout << "Fuel consumption per 1 ml : " << fuel << endl;
	cout << "Passenger capacity : " << passenger_capacity << endl;
	cout << "The airport departure : " << airport << endl;
}

double Airplane::Fuel_consumption()
{
	double all_fuel;
	all_fuel = fuel / 100;
	return all_fuel;
}
