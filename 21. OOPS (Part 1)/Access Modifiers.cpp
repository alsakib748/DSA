#include <iostream>
using namespace std;

class Student
{
    // Properties
private:
    string age;

public:
    string name;
    float cgpa;

    // Methods / Functions
    void getPercentage()
    {
        cout << (cgpa * 10) << "% \n";
    }
};

class User
{
    int id;
    string username;
    string password;
    string bio;

    void deactivate()
    {
        cout << "Deleting account\n";
    }

    void editBio(string newBio)
    {
        bio = newBio;
    }
};

int main()
{
    Student s1;
    s1.name = "Sakib";
    cout << s1.name << endl;
    cout << sizeof(s1) << endl;
    return 0;
}