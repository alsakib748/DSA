#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    string color;
    void eat()
    {
        cout << "Eats" << endl;
    }
    void breathe()
    {
        cout << "Breathe" << endl;
    }
};

class Fish : public Animal
{
public:
    int fins;

    void swim()
    {
        cout << "Swims" << endl;
    }
};

int main()
{
    Fish f1;
    f1.fins = 3;
    cout << f1.fins << endl;
    f1.swim();
    f1.eat();
    f1.breathe();
    return 0;
}