#include<iostream>
#include<conio.h>
using namespace std;
int main(){
  
     int year;
    cout<<"Enter the no:";
    cin>>year;
    (year%4==0)?cout<<"leap year":cout<<"not leap year";
    getch();
}