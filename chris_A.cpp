#include<iostream>
using namespace std;
int main()
{
    int b,g;
    cin>>b>>g;
    g=g/2;
    if(b>=g)
    {
        cout<<"Amelia tem todas bolinhas!"<<endl;
    }
    else if(g>b)
    {
        g=g-b;
        cout<<"Faltam "<<g<<" bolinha(s)"<<endl;
    }
}
