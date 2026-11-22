#include <iostream>
#include <string>
using namespace std;

class Car
{
    string name;
    string color;

public:
    Car()
    {
        cout << "Constructor without parameter" << endl;
    }

    Car(string nameVal, string colorVal)
    {
        cout << "Constructor is called. object being created..." << endl;
        this->name = nameVal;
        this->color = colorVal;
    }

    void start()
    {
        cout << "Car has started...\n";
    }
    void stop()
    {
        cout << "Car has stopped...\n";
    }

    // Getter
    string getName()
    {
        return name;
    }
};

int main()
{
    Car c0;                           // non-parameter
    Car c1("Mercedes Benz", "Black"); // parameter
    cout << "Car name : " << c1.getName() << endl;
    return 0;
}