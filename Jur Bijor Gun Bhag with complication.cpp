#include<iostream>
using namespace std;
int main()
{
    int n,op=0,num;
    cin>>n;
    while(n--)
    {
        cin>>num;
        if(num%2==0)
        {
            op++;
            num=num/2;
            while(num!=1)
            {
                num=num/2;
                op++;
            }
            cout<<"Number of operation is "<<op<<endl;
            op=0;
        }
        else
        {
            op++;
            num = (num*3)+1;
            while(num!=1)
            {
                num = (num*3)+1;
                op++;
            }
            cout<<"Number of operation is "<<op<<endl;
            op=0;
        }
    }

    return 0;
}
