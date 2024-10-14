#include<iostream>
using namespace std;
bool primeNumber(int n){
    if (n<2)
    return 0;
    for(int i=2;i<n;i++){
        if (n%i==0)
        return 0;
    }
    return 1;
}
int main(){

    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<primeNumber(num)<<endl;

    return 0;
}