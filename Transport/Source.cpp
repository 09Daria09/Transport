#include<iostream>
#include"Airplane.h"
#include"Bicycle.h"
#include"JeepCar.h"
#include"Truk.h"
#include"Vessel.h"
#include"Transport.h"
#include <string>

using namespace std;
using namespace Tr;
using namespace Truk_;
using namespace Ves;
using namespace Jeep;
using namespace Bicy;
using namespace Airpl;


int main()
{
   Transport* ptr = nullptr;
    int vibor;
    cout << "1.Truk\n2.Vessel\n3.Jeep\n4.Bicycle\n5.Airplane\n -> ";
    cin >> vibor;
    switch (vibor)
    {
    case 1:
        ptr = new Truk();
        break;
    case 2:
        ptr = new Vessel();
        break;
    case 3:
        ptr = new JeepCar();
        break;
    case 4:
        ptr = new Bicycle();
        break;
    case 5:
        ptr = new Airplane();
        break;
    default:
        cout << "You entered an invalid number" << endl;
    }
    ptr->Input();
    ptr->Fuel_consumption();
    ptr->Print();
}