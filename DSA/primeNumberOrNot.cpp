#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number to check prime or not ?";
    cin>>n;

    bool flag = false;
    for(int i = 2 ; i<n/2;i++){
        if(n%i == 0){
            flag = true;
            cout<<"The number is not a prime number ";
            break;
        }
    }
    if(!flag){
        cout<<"The number is a prime number";
    }
    return 0;
}