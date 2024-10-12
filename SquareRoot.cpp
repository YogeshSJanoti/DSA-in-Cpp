#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(num<0){
    cout<<"No Square Root for negative numbers"<<endl;
    return 0;
    }else{
        for (int i = 0; i <= num; i++)
        {
            if (i*i==num)
            {
                cout<<"Square Root of "<<num<<" is "<<i<<endl;
                return 0;
            }else if(i*i>=num){
                cout<<"Square Root of "<<num<<" is "<<i-1<<endl;
                return 0;
            }
        }
    }

    return 0;
}