#include<iostream>
using namespace std;
int main(){
    int arr[7];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<7;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<arr[6]<<endl;
    return 0;
}