#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int N = (sizeof(arr) / sizeof(arr[0]));

    // using for loop 

    
    // for(int i = 0 ; i < N/2 ; i++){
    //     int temp = arr[i];
    //     arr[i] = arr[N-i-1];
    //     arr[N-i-1] = temp;
    // }

    // using while loop


    int startPosition = 0;
    int endPosition = 8;
    while (startPosition < endPosition)
    {
        int temp = arr[startPosition];
        arr[startPosition] = arr[endPosition];
        arr[endPosition] = temp;

        startPosition += 1;
        endPosition -= 1;
    }
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << ",";
    }
    return 0;
}