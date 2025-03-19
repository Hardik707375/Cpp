#include<iostream>
using namespace std;
int main(){
  int Number;
  cout<<"Enter the Number : ";
  cin>> Number;
  if(Number%2==0){
    cout<<"Number is Odd";
  }else{
    cout<<"Number is Even";
    return 0;
  }
}