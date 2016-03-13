#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int k,t;
    cin>>t;
    while (t--)
    {
        cin>>k;
        cout<<192+(k-1)*250<<endl;
    }
    return 0;
}
