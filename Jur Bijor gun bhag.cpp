#include<iostream>
using namespace std;
int main()
{
    int n,num;
    cin>>n;
    while(n--)
    {
        cin>>num;
        if(num%2==0)
        {
            cout<<num/2<<endl;
        }
        else
        {
            cout<<(num*3)+1<<endl;
        }
    }

    return 0;
}
