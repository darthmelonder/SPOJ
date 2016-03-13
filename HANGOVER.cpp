#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    double a[1000],b;
    int i;
    a[0]=0.5;
    for (i=1;i<1000;i++)
    {
        b=(double)1/(i+2);
        a[i]=a[i-1]+b;
    }
    while (1)
    {
        cin>>b;
        if (b==0)
            break;
        for (i=0;i<1000;i++)
            if (a[i]>=b)
            break;
        cout<<i+1<<" card(s)"<<endl;
    }
    return 0;
}
