# include <iostream>

using namespace std;

int main(){
    int a , b , c;
    a = 60;
    b = 10;
    c = 25;
    short _sa = 9;
    cout<<a<<_sa<<endl;

    int marksInMaths = 83;
    cout <<"The marks of the student in maths is "<<marksInMaths<<endl;

    long long longVariable;
    cout<<longVariable;

    //declaring a constant
    int const score = 20;
    // score = 25; // <--- gives an error 
    cout<<score<<endl;
    return 0;
}