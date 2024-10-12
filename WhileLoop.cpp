#include<iostream>
using namespace std;
int main(){

    // int n;
    // cout<<"Enter the number n:";
    // cin>>n;
    // int i = 1;
    // cout<<"The factors of "<<n<<"are:";
    // while (i<=n)
    // {
    //     if (n%i==0)
    //     {
    //         cout<<i<<" ";
    //     }
    //     i++;
    // }cout<<endl;

    int n;
    cout<<"Enter the number n:";
    cin>>n;
    int i = 0;
    cout<<"The even numbers from 0 to "<<n<<"are:";
    while (i<=n)
    {
        if (i%2==0)
        {
            cout<<i<<" ";
        }
        i++;
    }cout<<endl;
    
    return 0;
}