#include <iostream>

using namespace std;
void printFiveToOne(int n){
    if(n == 1){
        cout<<1<<endl;
    }
    else{
        cout<<n<<endl;
        printFiveToOne(n -= 1);
    }
}
int main(){
    int n;
    printFiveToOne(5);
    return 0;
}