#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    unsigned int n;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
    }

    return 0;
}
