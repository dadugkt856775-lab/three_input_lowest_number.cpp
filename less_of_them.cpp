#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter x : ";
    cin>>x;
    cout<<"Enter y : ";
    cin>>y;
    cout<<"Enter z : ";
    cin>>z;
    if(x<y and x<z){
        cout<<x<<" is lowest number";
    }
    else if(y<x and y<z){
        cout<<y<<" is lowest number";
    }
    else{
        cout<<z<<" is lowest number";
    }
}