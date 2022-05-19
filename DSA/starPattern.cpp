#include <iostream>

using namespace std;
/*

        * 
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * * 
        *
another approach : 
pehle spaces print karo and the odd number of stars you can get by the formula 

2*rowno -1 or 2*rowno +1

*/
int main()
{
    int n;
    cout << "Enter n";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= (n - i); j++)
        {
            cout << "  ";
        }
        for (; j <= n; j++)
        {
            cout << "* ";
        }
        for (; j <= n + i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        int j;
        for (j = 1; j <= (n - i); j++)
        {
            cout << "  ";
        }
        int k = i;
        for (; j <= n; j++)
        {
            cout << "* ";
        }
        for (; j <= n + i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}