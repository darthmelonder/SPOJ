#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int a,b;
    while (1)
    {
        cin>>a>>b;
        if (a==-1)
            break;
        if (a==1 || b==1)
            cout<<a<<"+"<<b<<"="<<a+b<<endl;
        else
            cout<<a<<"+"<<b<<"!="<<a+b<<endl;
    }
    return 0;
}
