#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter number of rows: "<<endl;
    cin>>row;

    for (int i = row; i > 0; i--)
    {
        for (int j = 0; j < row - i; j++)
        {
            cout << "   ";
        }
        
        for (int k = 0; k < 2 * i - 1; k++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}