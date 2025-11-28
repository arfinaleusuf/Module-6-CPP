#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
    string country;
    int jersey;
    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};
int main()
{
    Cricketer* dhoni = new Cricketer("india",100);
    Cricketer* koholi = new Cricketer("india",18);
    *koholi = *dhoni;
    delete dhoni;
    cout << koholi->jersey << endl;
    return 0;
}