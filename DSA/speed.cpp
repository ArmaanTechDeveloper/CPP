#include <iostream>
#include <chrono>

using namespace std;

int main(){

    cout<<"Starting to print numbers from 0 - 10k"<<endl;
    auto begin = std::chrono::high_resolution_clock::now();

    int index;

    for(index =0 ; index <= 10000 ; index ++){
        cout<<index<<endl;
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

    cout<<"\n Elapsed Time "<<elapsed.count()<<"ms"<<endl;
    return 0;
}