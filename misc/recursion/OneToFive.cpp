#include <iostream>

using namespace std;
void printOneToFive(int n , int r){
    if(r == n){
        cout<<n<<endl;
    }
    else{
        cout<<r<<endl;
        printOneToFive(n , r += 1);
    }
}
int main(){
    printOneToFive(5,3);
    return 0;
}