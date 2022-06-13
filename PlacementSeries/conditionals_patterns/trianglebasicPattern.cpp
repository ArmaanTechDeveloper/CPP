#include <iostream>

using namespace std;

int main(){
    int row = 1;
    cout<<"Enter n"<<endl;
    int n;
    cin>>n;
    
    while(row <= n) {
        int col = 1;
        while (col <= row){
            cout<<"*";
            col += 1;
        }
        cout<<endl;
        row += 1;
    }
    return 0;
}