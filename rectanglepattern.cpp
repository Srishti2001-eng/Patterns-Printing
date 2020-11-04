#include<iostream>
using namespace std;

int main()
{
    int row,cloumn;
    cout<<"enter rows and column\n";
    cin>>row>>cloumn;
    for(int i=0;i<=row;i++)
    {
        for(int j=1;j<=cloumn;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}