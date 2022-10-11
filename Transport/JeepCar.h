#pragma once
#include "Transport.h"
using namespace Tr;
namespace Jeep
{
    class JeepCar :
        public Transport
    {
        char* color;
    public:
        JeepCar();
        JeepCar(const char* name, double weight, double fuel, int passenger_capacity, const char* ocean);

        JeepCar(const JeepCar& obj);
        JeepCar& operator=(const JeepCar& obj);

        void Input();
        void Print()const;
        double Fuel_consumption();

        ~JeepCar();
    };
}
