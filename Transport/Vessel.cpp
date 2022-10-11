#include "Vessel.h"
using namespace Ves;
Vessel::Vessel():Transport()
{
	name = nullptr;
	ocean = nullptr;
}

Vessel::Vessel(const Vessel& obj) : Vessel(obj.name, obj.weight, obj.fuel, obj.passenger_capacity,obj.ocean)
{}

Vessel& Vessel::operator=(const Vessel& obj)
{
	if (this == &obj)
	{
		return *this;
	}
	if (this->ocean != nullptr)
	{
		delete[] this->ocean;
	}
	this->name = new char[strlen(obj.name) + 1];
	strcpy_s(this->name, strlen(obj.name) + 1, obj.name);
	this->weight = obj.weight;
	this->fuel = obj.fuel;
	this->passenger_capacity = obj.passenger_capacity;
	this->ocean = new char[strlen(obj.ocean) + 1];
	strcpy_s(this->ocean, strlen(obj.ocean) + 1, obj.ocean);
	return *this;
}

Vessel::Vessel(const char* name, double weight, double fuel, int passenger_capacity, const char* ocean)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->weight = weight;
	this->fuel = fuel;
	this->passenger_capacity = passenger_capacity;
	this->ocean = new char[strlen(ocean) + 1];
	strcpy_s(this->ocean, strlen(ocean) + 1, ocean);
}

void Vessel::Input()
{
	char sim_name[20];
	char sim_ocean[20];
	cout << "Enter vehicle name -> ";
	cin >> sim_name;
	name = sim_name;
	cout << "Enter weight -> ";
	cin >> weight;
	cout << "Enter fuel consumption per 1 ml -> ";
	cin >> fuel;
	cout << "Enter passenger capacity -> ";
	cin >> passenger_capacity;
	cout << "Which ocean is the ship sailing -> ";
	cin >> sim_ocean;
	ocean = sim_ocean;
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

Vessel::~Vessel()
{
	delete[]ocean;
}
