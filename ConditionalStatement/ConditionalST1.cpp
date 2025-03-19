#include<iostream>
using namespace std;
int main(){
  int Age;
  cout<<"Enter the Age : ";
  cin>> Age;
  if(Age>=18){
    cout<<"Person can the Vote";
  }else{
    cout<<"Person can't the Vote";
    return 0;
  }
}