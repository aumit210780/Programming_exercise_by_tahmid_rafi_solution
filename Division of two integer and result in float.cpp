#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    float r=0;
    r=(float)a/b;
    cout<<fixed<<setprecision(6)<<r<<endl;

    return 0;
}
