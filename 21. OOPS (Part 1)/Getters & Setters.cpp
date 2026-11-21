#include <iostream>
#include <string>
using namespace std;

class Student
{
    // Properties
    string name;
    float cgpa;

public:
    // Setters
    void setName(string nameVal)
    {
        name = nameVal;
    }

    void setCgpa(float cgpaVal)
    {
        cgpa = cgpaVal;
    }

    // Getters
    string getName()
    {
        return name;
    }

    float getCgpa()
    {
        return cgpa;
    }
};

int main()
{
    Student s1;
    s1.setName("Sakib");
    s1.setCgpa(3.69);
    cout << s1.getName() << endl;
    cout << s1.getCgpa() << endl;
    return 0;
}