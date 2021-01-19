#include<iostream>
using namespace std;
int main()
{
    int n,num;
    cin>>n;
    int p=0;
    while(n--)
    {
        cin>>num;
        if(num%3==0)
        {
            p++;
        }
    }
    cout<<"Total number those are divisible by three is: "<<p<<endl;

    return 0;
}
