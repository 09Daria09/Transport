#include "JeepCar.h"

JeepCar::JeepCar():Transport()
{
}

JeepCar::JeepCar(string name, double weight, double fuel, int passenger_capacity, string color) 
{
	this->name = name;
	this->weight = weight;
	this->fuel = fuel;
	this->passenger_capacity = passenger_capacity;
    this->color = color;
}

void JeepCar::Input()
{
	cout << "Enter vehicle name -> ";
	cin >> name;
	cout << "Enter weight -> ";
	cin >> weight;
	cout << "Enter fuel consumption per 1 ml -> ";
	cin >> fuel;
	cout << "Enter passenger capacity -> ";
	cin >> passenger_capacity;
	cout << "Enter car color -> ";
	cin >> color;
}

void JeepCar::Print() const
{
	cout << "Kind of transport : " << name << endl;
	cout << "Transport weight : " << weight << endl;
	cout << "Fuel consumption per 1 km : " << fuel << endl;
	cout << "Passenger capacity : " << passenger_capacity << endl;
	cout << "Car color : " << color << endl;
}

double JeepCar::Fuel_consumption()
{
	double all_fuel;
	all_fuel = fuel / 100;
	return all_fuel;
}
