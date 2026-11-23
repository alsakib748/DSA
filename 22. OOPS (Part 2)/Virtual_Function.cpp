#include <iostream>
#include <string>
using namespace std;

class Parent
{
public:
    virtual void hello()
    {
        cout << "Parent virtual function" << endl;
    }
};

class Child : public Parent
{
public:
    void hello()
    {
        cout << "Child hello\n";
    }
};

int main()
{
    Child child1;
    Parent *ptr;
    ptr = &child1; // Run time Binding
    ptr->hello();  // Virtual Function
    return 0;
}