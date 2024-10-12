#include<iostream>
using namespace std;
int main(){

    // int row,col;
    // for (row = 1; row <= 5; row++)
    // {
    //     for (col = 1; col <= (5-row); col++)
    //     {
    //         cout<<" ";
    //     }
    //     for (col = 1; col <= row; col++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl; 
    // }

    // int row,col;
    // for (row = 1; row <= 5; row++)
    // {
    //     for (col = 1; col <= (5-row); col++)
    //     {
    //         cout<<" ";
    //     }
    //     for (col = 1; col <= row; col++)
    //     {
    //         cout<<row;
    //     }
    //     cout<<endl; 
    // }

    // int row,col;
    // for (row = 1; row <= 5; row++)
    // {
    //     for (col = 1; col <= (5-row); col++)
    //     {
    //         cout<<" ";
    //     }
    //     for (col = 1; col <= row; col++)
    //     {
    //         cout<<col;
    //     }
    //     cout<<endl; 
    // }

    // int row,col;
    // for (row = 1; row <= 5; row++)
    // {
    //     for (col = 1; col <= (5-row); col++)
    //     {
    //         cout<<" ";
    //     }
    //     for (char name = 'A'; name <= 'A'+row-1; name++)
    //     {
    //         cout<<name;
    //     }
    //     cout<<endl; 
    // }

    // int row,col;
    // for (row = 1; row <= 5; row++)
    // {
    //     for (col = 1; col <= (5-row); col++)
    //     {
    //         cout<<" ";
    //     }
    //     for (col = 1; col <= 2*row-1; col++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl; 
    // }

    // int row,col;
    // for (row = 1; row <= 5; row++)
    // {
    //     for (col = 1; col <= (5-row); col++)
    //     {
    //         cout<<" ";
    //     }
    //     for (col = 1; col <= row; col++)
    //     {
    //         cout<<col;
    //     }
    //     for (col = row-1; col >= 1; col--)
    //     {
    //         cout<<col;
    //     }
    //     cout<<endl; 
    // }

    // int row,col;
    // for (row = 5; row >= 1; row--)
    // {
    //     for (col = 1; col <= (5-row); col++)
    //     {
    //         cout<<"  ";
    //     }
    //     for (col = 1; col <= 2*row-1; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl; 
    // }

    // int row,col;
    // for (row = 4; row >= 1; row--)
    // {
    //     for (col = 1; col <= row; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     for (col = 1; col <= 8-(2*row); col++)
    //     {
    //         cout<<"  ";
    //     }
    //     for (col = 1; col <= row; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl; 
    // }
    // for (row = 1+1; row <= 4; row++)
    // {
    //     for (col = 1; col <= row; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     for (col = 1; col <= 8-(2*row); col++)
    //     {
    //         cout<<"  ";
    //     }
    //     for (col = 1; col <= row; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl; 
    // }

    // int row,col;
    // for (row = 1; row <= 4; row++)
    // {
    //     for (col = 1; col <= row; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     for (col = 1; col <= 8-(2*row); col++)
    //     {
    //         cout<<"  ";
    //     }
    //     for (col = 1; col <= row; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl; 
    // }
    // for (row = 4-1; row >= 1; row--)
    // {
    //     for (col = 1; col <= row; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     for (col = 1; col <= 8-(2*row); col++)
    //     {
    //         cout<<"  ";
    //     }
    //     for (col = 1; col <= row; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl; 
    // }

    int row,col;
    for (row = 1; row <= 4; row++)
    {
        for (col = 1; col <= 4-row; col++)
        {
            cout<<" ";
        }
        for (col = 1; col <= row; col++)
        {
            cout<<"* ";
        }
        cout<<endl; 
    }
    for (row = 4; row >= 1; row--)
    {
        for (col = 1; col <= 4-row; col++)
        {
            cout<<" ";
        }
        for (col = 1; col <= row; col++)
        {
            cout<<"* ";
        }
        cout<<endl; 
    }
    
    return 0;
}