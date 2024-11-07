#include<iostream>
using namespace std;
int main(){

    int arr[7]={4,6,3,11,18,23,45};
    int x;
    cout<<"Enter x:";
    cin>>x;
    int index=-1;
    for(int i=0;i<7;i++){
        if (arr[i]==x){
        index=i;
        cout<<"The Element is present at index "<<index<<endl;
        return 0;
        }
    }
    cout<<"Not present in the array."<<endl;

    return 0;
}