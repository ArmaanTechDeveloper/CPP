#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    int i = 0;
    int answer = 0;
    while (n != 0)
    {
        int bit = n & 1;
        answer = (bit * pow(10, i)) + answer;
        i++;
        n = n >> 1;
    }

    cout << answer;
    return 0;
}