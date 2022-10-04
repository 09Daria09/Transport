#include "Bicycle.h"

Bicycle::Bicycle() : Transport()
{
}

Bicycle::Bicycle(string name, double weight, double fuel, int passenger_capacity, string bike_firm) : Transport(name, weight, fuel, passenger_capacity)
{
    this->bike_firm = bike_firm;
}

void Bicycle::Input()
{
	cout << "Enter vehicle name -> ";
	cin >> name;
	cout << "Enter weight -> ";
	cin >> weight;
	cout << "Enter passenger capacity -> ";
	cin >> passenger_capacity;
	cout << "Enter bike company -> ";
	cin >> bike_firm;
}

void Bicycle::Print() const
{
	cout << "Kind of transport : " << name << endl;
	cout << "Transport weight : " << weight << endl;
	cout << "Passenger capacity : " << passenger_capacity << endl;
	cout << "Bike firm : " << bike_firm << endl;
}

