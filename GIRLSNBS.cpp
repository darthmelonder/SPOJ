#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int g,b,a;
    while (1)
    {
        cin>>g>>b;
        if (g==-1)
            break;
        if (g<b)
        {
         a=g;
         g=b;
         b=a;
        }
        if (g%(b+1))
        a=g/(b+1)+1;
        else
        a=g/(b+1);
        cout<<a<<endl;
    }
    return 0;
}
