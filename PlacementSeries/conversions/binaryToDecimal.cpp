#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout << "Enter a binary representation"<<endl;
    int n;
    cin>>n;

    int i = 0;
    int answer = 0;
    while (n != 0)
    {
        int bit = n % 10;
        answer = (pow(2,i) * bit) + answer;
        i += 1;
        n /= 10;
    }
    cout<<answer;
    
    return 0;
}