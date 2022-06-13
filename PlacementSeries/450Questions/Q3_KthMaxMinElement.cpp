#include <iostream>

using namespace std;

int main(){
    cout<<"Enter K"<<endl;

    int k;
    cin>>k;

    int arr[] = {1, 120 , 10 , 2 , 5, 6, 7, 8, 9};
    int N = sizeof(arr)/sizeof(arr[0]);

    // same solution in gfg they have just used a heap sort or merge sort to get the complexity to (Nlog(N))
    //This program has the complexity of O(N^2)
    for(int i = 0 ; i < N ; i ++){
        for(int j = i +1 ; j < N ; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
    }

    cout<<"kth minimum element is : "<<arr[k-1]<<endl<<"kth maximum element is : "<<arr[N-k-1];


    return 0;
}