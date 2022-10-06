#include "Truk.h"
#include <iostream>

Truk::Truk():Transport()
{
	name = nullptr;
	cargo = nullptr;
}

Truk::Truk(const char* name, double weight, double fuel, int passenger_capacity, double truck_capacity, const char* cargo)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->weight = weight;
	this->fuel = fuel;
	this->passenger_capacity = passenger_capacity;
	this->truck_capacity = truck_capacity;
	this->cargo = new char[strlen(cargo) + 1];
	strcpy_s(this->cargo, strlen(cargo) + 1, cargo);
}

Truk::Truk(const Truk& obj) :Truk(obj.name, obj.weight, obj.fuel, obj.passenger_capacity, obj.truck_capacity, obj.cargo)
{}

Truk& Truk::operator=(const Truk& obj)
{
	if (this == &obj)
	{
		return *this;
	}
	if (this->cargo != nullptr)
	{
		delete[] this->cargo;
	}
	this->name = new char[strlen(obj.name) + 1];
	strcpy_s(this->name, strlen(obj.name) + 1, obj.name);
	this->weight = obj.weight;
	this->fuel = obj.fuel;
	this->passenger_capacity = obj.passenger_capacity;
	this->truck_capacity = obj.truck_capacity;
	this->cargo = new char[strlen(obj.cargo) + 1];
	strcpy_s(this->cargo, strlen(obj.cargo) + 1, obj.cargo);
	return *this;
}

void Truk::Input()
{
	char sim_name[20];
	char sim_cargo[20];
	cout << "Enter vehicle name -> ";
	cin >> sim_name;
	name = sim_name;
	cout << "Enter weight -> ";
	cin >> weight;
	cout << "Enter fuel consumption per 1 km -> ";
	cin >> fuel;
	cout << "Enter passenger capacity -> ";
	cin >> passenger_capacity;
	cout << "Enter the capacity of the truck trailer -> ";
	cin >> truck_capacity;
	cout << "What cargo are you carrying -> ";
	cin >> cargo;
}

void Truk::Print()const
{
	cout << "Kind of transport : " << name << endl;
	cout << "Transport weight : " << weight << endl;
	cout << "Fuel consumption per 1 km : " << fuel << endl;
	cout << "Passenger capacity : " << passenger_capacity << endl;
	cout << "Trailer capacity : " << truck_capacity << endl;
	cout << "Type of cargo : " << cargo << endl;
}

double Truk::Fuel_consumption()
{
	double all_fuel;
	all_fuel = fuel / 100;
	return all_fuel;
}

Truk::~Truk()
{
	delete[] cargo;
}
