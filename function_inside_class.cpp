#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void total()
    {
        cout << "total marks of " << name << " " << math+english << endl;
    }
};
int main()
{
    Student sakib("sakib ahmed", 23,99,92);
    sakib.total();
    Student rakib("rakib ahmed", 25, 65, 75);
    rakib.total();
    return 0;
}