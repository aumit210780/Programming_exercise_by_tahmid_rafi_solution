#include<iostream>
#include<iomanip>
#define pi 3.1416
using namespace std;
int main()
{
    float r;
    cin>>r;
    float s_a=4*pi*r*r;
    float s_v=(4*pi*r*r*r)/3;
    cout<<fixed<<setprecision(2)<<"Area of sphere is : "<<s_a<<endl<<"Volume of sphere is : "<<s_v<<endl;

  return 0;
}
