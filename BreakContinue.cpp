#include<iostream>
using namespace std;
int main(){

    // int i = 1;
    // while (i<=10)
    // {
    //     cout<<i<<" ";
    //     if (i==4)
    //     break;
    //     i++;
    // }cout<<endl;

    int i = 1;
    for (int i = 0; i <= 10; i++)
    {
        if (i%3==0)
        continue;
        cout<<i<<" ";
    }cout<<endl;
    
    return 0;
}