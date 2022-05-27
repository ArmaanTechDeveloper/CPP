#include <iostream>

using namespace std;

void printPrimeNumbers(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        bool prime = true;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
        {
            cout << i << ",";
        }
    }
}
int main()
{
    int n1, n2;
    cout << "Enter 2 numbers" << endl;
    cin >> n1 >> n2;
    printPrimeNumbers(n1, n2);
    return 0;
}