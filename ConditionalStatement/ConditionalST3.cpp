#include<iostream>
using namespace std;
int main(){
    int Marks;
    cout<<"Enter the number: ";
    cin>> Marks;
    if(Marks>=90){
        cout<<"Grade A";
    } else if(Marks>=80 && Marks<90){
        cout<<"Grade B";
    }else{
        cout<<"Grade C";
    }
    return 0;
}