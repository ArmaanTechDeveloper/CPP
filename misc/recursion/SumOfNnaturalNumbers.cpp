#include <iostream>

using namespace std;
int sumOfNaturalNumbers(int n){
    if(n == 0){
        return 0;
    }
    else{
        return n + sumOfNaturalNumbers(n-1);
    }
}
int main(){
    cout<<sumOfNaturalNumbers(3);
    return 0;
}