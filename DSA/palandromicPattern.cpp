#include <iostream>

using namespace std;
/*

        1 
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5

*/
int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        for (int j = 1; j < i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}