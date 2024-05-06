#include <iostream>
#include <string>

bool Ergebnis;

using namespace std;

template <typename T>
auto compare(T value1,T value2,T eps) -> T
{
    if (value1 <= value2)
    {
        double temp1 = value2 - value1;
        if (temp1 <= eps) return Ergebnis = 1;
        else return Ergebnis = 0;
    }
    if (value1 = value2)
    {
        return Ergebnis = 1;
    }

    if (value1 >= value2)
    {
        double temp1 = value1 - value2;
        if (temp1 <= eps) return Ergebnis = 1;
        else return Ergebnis = 0;
    }
 return 20;
}

auto main() -> int
{
    cout<< ((compare<int>(3,7,1) ==1)?"True" :"False")<<endl;
    cout<< ((compare<float>(3.5,3.7,1.5) ==1)?"True" :"False")<<endl;
    cout<< ((compare<int>(2,2,4) ==1)?"True" :"False")<<endl;
    cout<< ((compare<int>(3,7,5) ==1)?"True" :"False")<<endl;
}