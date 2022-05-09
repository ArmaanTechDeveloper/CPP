#include <iostream>
#include <string>

using namespace std;

int main(){
    string name = "armaan";
    cout<<"The name is "<<name<<endl;
    cout<<"The length of the name is "<<name.length()<<endl;
    cout<<name.substr(2,4)<<endl;
    return 0;

}