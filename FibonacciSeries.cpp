#include<iostream>
using namespace std;

int main() {
    int n, prev, curr, last;
    cout<<"Enter the number:";
    cin>>n;

    last = 0;
    prev = 1;

    if(n >= 1){
        cout<<last<<" ";
    }
    if(n >= 2){
        cout<<prev<<" "; 
    }
    for(int i = 2; i < n; ++i){
        curr = last + prev;
        cout<<curr<<" ";
        last = prev;
        prev = curr;
    }
    cout<<endl;

    return 0;
}