#include<iostream>
using namespace std;
int main()
{
    int n,up=0,lo=0,l=0,num=0,sc=0,biram=0;cin>>n;
    int i; char c;
    for(i=0;i<n;i++)
    {
        cin>>c;
        if(c>='A'&&c<='Z')
        {
            up++;
            l++;
        }
        else if(c>='a'&&c<='z')
        {
            lo++;
            l++;
        }
        else if(c>='0' && c<='9')
        {
            num++;
        }
        else if((c>='!' && c<='/') && (c>=':' && c<='@') && (c>='[' && c<='`') && (c>='{' && c<='~'))
            {
                biram++;
            }
            else{
                sc++;
            }

    }
    cout<<"Here number of uppercase letter is "<<up<<endl;
    cout<<"Here number of lowercase letter is "<<lo<<endl;
    cout<<"Here number of letter is "<<l<<endl;
    cout<<"Here number of number is "<<num<<endl;
    cout<<"Here number of biram letter is "<<biram<<endl;
    cout<<"Here number of special character letter is "<<sc<<endl;


    return 0;
}
