#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    float w,mw;
    cin>>n>>w;
    mw=(n*w)/1000;
    cout<<fixed<<setprecision(2)<<mw<<" kg"<<endl;

    return 0;

}
