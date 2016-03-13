#include <iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    long int i,w,a,b;
    while (1)
    {
        cin>>i>>w;
        if (i==-1)
            break;
        if (w%37==0 && (w/37)*1000==i)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
