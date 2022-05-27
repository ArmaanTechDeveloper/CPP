#include <iostream>

using namespace std;
/*

1 
1 1
1 2 1 
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1

*/
int factorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{

    int n;
    cout << "Enter the row number ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int ans = factorial(i) / (factorial(j) * factorial(i - j));
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}