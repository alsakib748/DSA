#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> empVec;
    cout << "size : " << empVec.size() << endl;
    cout << "capacity : " << empVec.capacity() << endl;

    vector<int> vec = {1, 2, 3, 4};
    cout << "size : " << vec.size() << endl;
    cout << "capacity : " << vec.capacity() << endl;

    vec.push_back(5);
    cout << "size : " << vec.size() << endl;
    cout << "capacity : " << vec.capacity() << endl;

    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    cout << "size : " << vec.size() << endl;
    cout << "capacity : " << vec.capacity() << endl;

    vec.pop_back();
    cout << "size : " << vec.size() << endl;
    cout << "capacity : " << vec.capacity() << endl;

    return 0;
}