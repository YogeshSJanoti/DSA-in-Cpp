#include<iostream>
using namespace std;
int main(){

    int a[10]={12,7,9,23,56,23,50,81,69,96};
    // Find minimum element in the array.
    int ans=INT_MAX;
    for(int i=0;i<10;i++){
        if(a[i]<ans)
        ans=a[i];
    }
    cout<<"Minimum Element:"<<ans<<endl;
    
    // Find maximum element in the array.
    ans=INT_MIN;
    for(int i=0;i<10;i++){
        if(a[i]>ans)
        ans=a[i];
    }
    cout<<"Maximum Element:"<<ans<<endl;

    return 0;
}