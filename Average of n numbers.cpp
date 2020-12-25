#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int i;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
   float avg = float(sum)/n;
   cout<<avg<<endl;

   return 0;
}
