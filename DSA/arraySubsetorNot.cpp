#include <iostream>

using namespace std;
string isSubset(int a1[], int a2[], int n, int m) {
    // sorting the a1 array
    
    for(int i = 0 ; i<n ; i++){
        for(int j = i+1 ; j < m ; j ++){
            if(a1[i] > a1[j]){
                int temp = a1[i];
                a1[i] = a1[j];
                a1[j] = temp;
            }
        }
    }
    bool isSubset = true;
    for(int i = 0 ; i < m ; i++){
        // binary search for a1
        int low = 0;
        int high = n;
        bool notFound = false;
        while(low <= high){
            int mid = (low + high)/2;
            if(a1[mid] == a2[i]){
                notFound = false;
                continue ;
            }
            else if(a1[mid] > a2[i]){
                high = mid -1;
            }
            else if(a1[mid] < a2[i]){
                low = mid +1;
            }
        }
        if(!notFound){
            isSubset = false;
        }
    }
    if(isSubset){
        return "Yes";
    }
    else{
        return "No";
    }
}
int main(){
    cout<<"Running";
    int a1[5] = {1,5,2,3,4};
    int a2[3] = {1,3,2};

    cout<<isSubset(a1 , a2 , 5 , 3);
    return 0;
}