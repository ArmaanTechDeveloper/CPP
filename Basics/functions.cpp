#include <iostream>

using namespace std;

int add(int a , int b){
    int c = a+b;
    return c;
}
int main(){
    int summation = add(10,2);
    cout<<summation;
    return 0;
}