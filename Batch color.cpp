#include<iostream>
using namespace std;
int main()
{
    string s1="Polash",s2="Noren",sn;
    int sh1=1,sh2=3,sna;

    cin>>sn>>sna;

    if(sn==s1 && sna == sh1)
    {
        cout<<"Yellow color batch"<<endl;
    }
    else if(sn==s1 && sna == sh2)
    {
        cout<<"Green color batch"<<endl;
    }
    else if(sn==s2 && sna == sh1)
    {
        cout<<"Blue color batch"<<endl;
    }
    else if(sn==s2 && sna == sh2)
    {
        cout<<"Green color batch"<<endl;
    }



}
