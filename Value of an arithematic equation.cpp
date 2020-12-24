#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float x,r;
    cin>>x;
    r=((x*x*x*x*x)-(3*x*x*x*x)-(7*x*x*x)+(13*x*x)+3742);
    cout<<fixed<<setprecision(2)<<r<<endl;

    return 0;
}
