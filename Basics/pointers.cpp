#include <iostream>

using namespace std;

int main(){

    int a = 34;
    int * ptra = &a;

    cout<<"The address of a is "<<ptra<<endl;
    cout<<"The value of a is "<<*ptra<<endl;
    return 0;
}