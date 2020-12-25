#include<iostream>
using namespace std;
int main()
{
    int x,y,z,m;
    cin>>x>>y>>z>>m;
    if(m>=(x+y+z))
    {
        cout<<"3 books you can buy and those books are 1. Computer Programming Part 1 2. Gonit Korbo Joy 3. প্রোগ্রামিঙের আশ্চর্য জগত "<<endl;
    }
    else if(m>=(x+y))
    {
        cout<<"2 books you can buy and those books are 1. Computer Programming Part 1 2. Gonit Korbo Joy"<<endl;
    }
    else if(m>=(x+z))
    {
        cout<<"2 books you can buy and those books are 1. Computer Programming Part 1 3. প্রোগ্রামিঙের আশ্চর্য জগত"<<endl;
    }
    else if(m>=(y+z))
    {
        cout<<"2 books you can buy and those books are 2. Gonit Korbo Joy 3. প্রোগ্রামিঙের আশ্চর্য জগত"<<endl;
    }
    else if(m>=x || m>=y || m>=z)
    {
        if(m>=x)
        {
            cout<<"1 books you can buy and the book is 1. Computer Programming Part 1"<<endl;
        }
        else if(m>=y)
        {
            cout<<"1 books you can buy and the book is 2. Gonit Korbo Joy"<<endl;
        }
        else if(m>=z)
        {
            cout<<"1 books you can buy and the book is 3. প্রোগ্রামিঙের আশ্চর্য জগত"<<endl;
        }
    }


    return 0;
}
