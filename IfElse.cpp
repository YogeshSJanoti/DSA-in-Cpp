#include<iostream>
using namespace std;
int main(){
    // int package;
    // cin>>package;
    // if(package>=10){
    //     cout<<"Accepted"<<endl;
    // }else{
    //     cout<<"Rejected"<<endl;
    // }
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    if(marks>33){
        cout<<"PASS"<<endl;
    }else{
        cout<<"FAIL"<<endl;
    }
    return 0;
}