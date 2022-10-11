#include "Bicycle.h"
using namespace Bicy;
Bicycle::Bicycle() : Transport()
{
	name = nullptr;
	bike_firm = nullptr;
}

Bicycle::Bicycle(const char* name, double weight, double fuel, int passenger_capacity, const char* bike_firm)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->weight = weight;
	this->fuel = fuel;
	this->passenger_capacity = passenger_capacity;
	this->bike_firm = new char[strlen(bike_firm) + 1];
	strcpy_s(this->bike_firm, strlen(bike_firm) + 1, bike_firm);
}

Bicycle::Bicycle(const Bicycle& obj) :Bicycle(obj.name, obj.weight, obj.fuel, obj.passenger_capacity, obj.bike_firm)
{}

Bicycle& Bicycle::operator=(const Bicycle& obj)
{
	if (this == &obj)
	{
		return *this;
	}
	if (bike_firm != nullptr)
	{
		delete[] bike_firm;
	}
	this->name = new char[strlen(obj.name) + 1];
	strcpy_s(this->name, strlen(obj.name) + 1, obj.name);
	this->weight = obj.weight;
	this->fuel = obj.fuel;
	this->passenger_capacity = obj.passenger_capacity;
	this->bike_firm = new char[strlen(obj.bike_firm) + 1];
	strcpy_s(this->bike_firm, strlen(obj.bike_firm) + 1, obj.bike_firm);
	return *this;
}

void Bicycle::Input()
{
	char sim_name[20];
	char sim_bike[20];
	cout << "Enter vehicle name -> ";
	cin >> sim_name;
	name = sim_name;
	cout << "Enter weight -> ";
	cin >> weight;
	cout << "Enter passenger capacity -> ";
	cin >> passenger_capacity;
	cout << "Enter bike company -> ";
	cin >> sim_bike;
	bike_firm = sim_bike;
}

void Bicycle::Print() const
{
	cout << "Kind of transport : " << name << endl;
	cout << "Transport weight : " << weight << endl;
	cout << "Passenger capacity : " << passenger_capacity << endl;
	cout << "Bike firm : " << bike_firm << endl;
}

double Bicycle::Fuel_consumption()
{
	double all_fuel = 0;
	cout << "The bike doesn't need fuel" << endl;
	return all_fuel;
}

Bicycle::~Bicycle()
{
	delete[]bike_firm;
}
