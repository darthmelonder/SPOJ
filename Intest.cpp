#include <iostream>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    long long int n,i,l,k,count1=0;
    cin>>n>>k;
    for (i=0;i<n;i++)
    {
      cin>>l;
      if (l%k==0)
            count1++;
    }
    cout<<count1<<endl;
    return 0;
}
