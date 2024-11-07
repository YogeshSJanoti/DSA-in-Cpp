#include<iostream>
using namespace std;
int main(){

    int arr[7]={4,6,3,11,18,23,45};
    int i=0,j=6;
    while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
    }
    for (int k = 0; k < 7; k++)
    {
        cout<<arr[k]<<" ";
    }cout<<endl;

    return 0;
}