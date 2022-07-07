#include<iostream>
using namespace std;
int main()
    {
       int a,b,c;
       cout<<"\n enter a:";
       cin>>a;
        cout<<"\n enter b:";
       cin>>b;
        cout<<"\n enter c:";
       cin>>c;
       if(a>b&&a>c)
       {
           cout<<"\n largest"<<a;
       }
       else if(b>c)
       {
            cout<<"\n largest"<<b;
       }
        else
       {
            cout<<"\n largest"<<c;
       }
       return 0;

    }
