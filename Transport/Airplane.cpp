#include "Airplane.h"

Airplane::Airplane():Transport()
{
	name = nullptr;
	airport = nullptr;
}

Airplane::Airplane(const char* name, double weight, double fuel, int passenger_capacity, const char* airport)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->weight = weight;
	this->fuel = fuel;
	this->passenger_capacity = passenger_capacity;
	this->airport = new char[strlen(airport) + 1];
	strcpy_s(this->airport, strlen(airport) + 1, airport);
}

Airplane::Airplane(const Airplane& obj) :Airplane(obj.name, obj.weight, obj.fuel, obj.passenger_capacity, obj.airport)
{}

Airplane& Airplane::operator=(const Airplane& obj)
{
	if (this == &obj)
	{
		return *this;
	}
	if (airport != nullptr)
	{
		delete[] airport;
	}
	this->name = new char[strlen(obj.name) + 1];
	strcpy_s(this->name, strlen(obj.name) + 1, obj.name);
	this->weight = obj.weight;
	this->fuel = obj.fuel;
	this->passenger_capacity = obj.passenger_capacity;
	this->airport = new char[strlen(obj.airport) + 1];
	strcpy_s(this->airport, strlen(obj.airport) + 1, obj.airport);
	return *this;
}

void Airplane::Input()
{
	char sim_name[20];
	char sim_airport[20];
	cout << "Enter vehicle name -> ";
	cin >> sim_name;
	name = sim_name;
	cout << "Enter weight -> ";
	cin >> weight;
	cout << "Enter fuel consumption per 1 ml -> ";
	cin >> fuel;
	cout << "Enter passenger capacity -> ";
	cin >> passenger_capacity;
	cout << "Enter from which airport the plane departs -> ";
	cin >> sim_airport;
	airport = sim_airport;
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

Airplane::~Airplane()
{
	delete[]airport;
}
