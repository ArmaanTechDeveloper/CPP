#include <iostream>

using namespace std;

int main(){

    // while loop

    int index = 0;
    while(index<23){
        cout<<"I am at the index "<<index<<endl;
        index += 1;
    }

    // do while loop

    do{
        cout<<"I am inside the loop";
        index += 1;
    }
    while(index>500);

    // for loop

    for(int i = 0 ; i < 25 ; i++){
        cout<<"I am at the index "<<i<<endl;
    }

    return 0;
}