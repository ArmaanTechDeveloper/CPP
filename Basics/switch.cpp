#include <iostream>

using namespace std;

int main(){
    int age;
    cout<<"Enter Your Age \n";
    cin>>age;

    switch (age)
    {
    case 18:
        cout<<"You are 18 year old";
        break; // break statement stops other cases from executing

    case 12:
        cout<<"You are 12 year old";
        break;
    default:
        cout<<"You are neither 18 years old nor 12 ";
        break;
    }
    return 0;
}