#pragma once
#include "Transport.h"
using namespace Tr;
namespace Truk_
{
    class Truk :
        public Transport
    {
        double truck_capacity;
        char* cargo;
    public:
        Truk();
        Truk(const char* name, double weight, double fuel, int passenger_capacity, double truk_capacity, const char* cargo);

        Truk(const Truk& obj);
        Truk& operator=(const Truk& obj);

        void Input();
        void Print()const;
        double Fuel_consumption();
        ~Truk();
    };
}

