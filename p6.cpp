#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the no:";
    cin>>a>>b;
    cout<<"Before the swapping :"<<"a="<<a<<"b="<<b;

    a=b+a;
    b=a-b;
    a=a-b;
    cout<<"After the swapping :"<<"a="<<a<<"b="<<b;
    return 0;
}