#include <iostream>

using namespace std;

int main(){
    char ch;
    cout<< "Enter the character : "<<endl;
    cin>>ch;

    int ascii = ch;

    if(ascii >= 65 && ascii <=90){
        cout<<"The character is uppercase ";
    }
    else if(ascii >= 97 && ascii <=122){
        cout<< "The character is lower case ";
    }
    else{
        cout<< "The character is a numeric";
    }
    return 0;
}