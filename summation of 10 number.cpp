#include<iostream>
using namespace std;
int main()
{
    int a[10],i,sum=0;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        sum+=a[i];
    }
    cout<<sum<<endl;

    return 0;
}
