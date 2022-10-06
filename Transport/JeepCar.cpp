#include "JeepCar.h"

JeepCar::JeepCar():Transport()
{
	name = nullptr;
	color = nullptr;
}

JeepCar::JeepCar(const char* name, double weight, double fuel, int passenger_capacity, const char* color)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->weight = weight;
	this->fuel = fuel;
	this->passenger_capacity = passenger_capacity;
	this->color = new char[strlen(color) + 1];
	strcpy_s(this->color, strlen(color) + 1, color);
}

JeepCar::JeepCar(const JeepCar& obj):JeepCar(obj.name, obj.weight, obj.fuel, obj.passenger_capacity, obj.color)
{}

JeepCar& JeepCar::operator=(const JeepCar& obj)
{
	if (this == &obj)
	{
		return *this;
	}
	if (color != nullptr)
	{
		delete[] color;
	}
	this->name = new char[strlen(obj.name) + 1];
	strcpy_s(this->name, strlen(obj.name) + 1, obj.name);
	this->weight = obj.weight;
	this->fuel = obj.fuel;
	this->passenger_capacity = obj.passenger_capacity;
	this->color = new char[strlen(obj.color) + 1];
	strcpy_s(this->color, strlen(obj.color) + 1, obj.color);
	return *this;
}

void JeepCar::Input()
{
	char sim_name[20];
	char sim_color[20];
	cout << "Enter vehicle name -> ";
	cin >> sim_name;
	name = sim_name;
	cout << "Enter weight -> ";
	cin >> weight;
	cout << "Enter fuel consumption per 1 ml -> ";
	cin >> fuel;
	cout << "Enter passenger capacity -> ";
	cin >> passenger_capacity;
	cout << "Enter car color -> ";
	cin >> sim_color;
	color = sim_color;
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

JeepCar::~JeepCar()
{
	delete[]color;
}
