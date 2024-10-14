#include<iostream>
using namespace std;

// Pass by reference
void Swap(int &x,int &y){
    int z;
    z=x;
    x=y;
    y=z;
}

// Function Overloading
void Swap(float &x,float &y){
    float z;
    z=x;
    x=y;
    y=z;
}
int main(){

    int a;
    int b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    Swap(a,b);
    // swap(a,b); // --> in-built function
    cout<<a<<" "<<b<<endl;

    float f1=2.4,f2=4.7;
    Swap(f1,f2);
    // swap(f1,f2); // --> in-built function
    cout<<f1<<" "<<f2<<endl;

    return 0;
}