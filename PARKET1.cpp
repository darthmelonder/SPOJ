#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    long long int a,r,b;
    cin>>b>>r;
    a=((b+4)*(b+4)/4)-4*(b+r);
    a=sqrt(a);
    cout<<(a+(b+4)/2)/2<<" "<<((b+4)/2-a)/2<<endl;
    return 0;
}
