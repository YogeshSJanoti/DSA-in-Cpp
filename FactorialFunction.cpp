#include<iostream>
using namespace std;

int factorial(int n){
    int ans=1;
    for (int i = 2; i <= n; i++)
    {
        ans*=i;
    }
    return ans;
}
int main(){

    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<factorial(num)<<endl;

    return 0;
}