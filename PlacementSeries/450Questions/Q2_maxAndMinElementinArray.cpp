#include <iostream>

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int N = sizeof(arr)/sizeof(arr[0]);

    int max = arr[0] , min = arr[0];
    for(int i = 0 ; i < N ; i ++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }

    cout<<"maximum number is : "<<max<<endl<<"minimum number is : "<<min<<endl;
    return 0;
}