#include <iostream>
using namespace std;

class User
{
private:
    int id;
    string password;

public:
    string username;
    User(int id, string username)
    {
        this->id = id;
        this->username = username;
    }

    void setPassword(string password)
    {
        this->password = password;
    }
    string getPassword()
    {
        return password;
    }
};

int main()
{
    User u1(28, "Sakib");
    u1.setPassword("1111");
    cout << u1.getPassword() << endl;
    return 0;
}