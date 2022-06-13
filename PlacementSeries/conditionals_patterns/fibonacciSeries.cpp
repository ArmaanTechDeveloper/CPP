#include <iostream>

using namespace std;

int main(){
    int first = 0;
    int second = 1;

    cout << "Enter n"<<endl;
    int n;
    int sum;
    cin >>n;
    for(int i = 1 ; i < n ; i++){
        if(n == 1){
            cout<<first<<endl;
            break;
        }
        if(n == 2){
            cout<< first << second;
            break;
        }
        if(i == 1){
            cout<< first <<endl; 
        }
        cout<<second << endl;

        sum = first + second;
        first = second;
        second = sum;
    }
    return 0;
}