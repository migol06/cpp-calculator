#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    string engine;
    int year;

    void display()
    {
        cout << "Hello this is a " << brand << "car, a " << engine << "engine manufactured in year " << year;
    }
};

int main()
{
    Car myfirstCar;

    myfirstCar.brand = "Toyota";
    myfirstCar.engine = "Diesel";
    myfirstCar.year = 2004;

    myfirstCar.display();
}
