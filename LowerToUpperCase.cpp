#include<iostream>
using namespace std;
int main(){

    char ch;
    cout<<"Enter an lower case alplhabet:";
    cin>>ch;
    char Upch = ch-'a'+'A';
    cout<<"The upper case is "<<Upch<<endl;

    return 0;
}