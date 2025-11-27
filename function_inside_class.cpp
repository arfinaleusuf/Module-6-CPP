#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
};
int main()
{
    Student sakib("sakib ahmed",23);
    return 0;
}