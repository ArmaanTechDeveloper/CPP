# include <iostream>

using namespace std;

int main(){
    int age;
    cout<<"Enter your age "<<endl;
    cin>>age;
    if(age>18 && age<200 || age ==25){
        cout<<"You can vote";
    }
    else if(age > 200){
        cout<<"Enter your valid age";
    }
    else{
        cout<<"You cannot vote";
    }
    return 0;
}