#include "Transport.h"
Transport::Transport()
{

}

Transport::Transport(const char* name, double weight, double fuel, int passenger_capacity)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->weight = weight;
	this->fuel = fuel;
	this->passenger_capacity = passenger_capacity;
}

void Transport::Input()
{
	cout << "Object not found" << endl;
}

void Transport::Print() const
{
	cout << "Object not found" << endl;
}

double Transport::Fuel_consumption()
{
	cout << "Object not found" << endl;
	return 0.0;
}

Transport::~Transport()
{
	delete[]name;
}
