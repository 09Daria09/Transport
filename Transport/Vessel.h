#pragma once
#include "Transport.h"
using namespace Tr;
namespace Ves
{
    class Vessel :
        public Transport
    {
        char* ocean;

    public:
        Vessel();
        Vessel(const char* name, double weight, double fuel, int passenger_capacity, const char* ocean);

        Vessel(const Vessel& obj);
        Vessel& operator=(const Vessel& obj);

        void Input();
        void Print()const;

        double Fuel_consumption();
        ~Vessel();
    };
}
