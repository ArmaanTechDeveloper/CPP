#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    int checkInitial = n;
    int finalNumber = 0;
    while (n > 0)
    {
        int rem = n % 10;
        finalNumber = finalNumber + pow(rem, 3);
        n = n / 10;
    }
    if (finalNumber == checkInitial)
    {
        cout << "ArmStrong number ";
    }
    else
    {
        cout << "Not a ArmStrong number";
    }
    return 0;
}