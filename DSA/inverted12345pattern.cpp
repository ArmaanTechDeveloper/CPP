#include <iostream>

using namespace std;
/*

12345
1234
123
12
1

*/
int main(){
    int n;

    cout << "Enter n"<<endl;
    cin>>n;

    for(int i = n ; i >= 1 ; i--){
        for(int j = 1 ; j <= i ; j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}