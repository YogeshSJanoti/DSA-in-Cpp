#include<iostream>
using namespace std;
// Pass by value.
void Increment(int n){
        n++;
}
// Pass by reference
void Increment1(int &n){
        n++;
}
int main(){

    int a=7;
    Increment1(a);
    cout<<a<<endl;

    return 0;
}