#include<iostream>
using namespace std;
int main()
{
    int n,rem,sum=0;
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    cout<<sum<<endl;


    return 0;
}
