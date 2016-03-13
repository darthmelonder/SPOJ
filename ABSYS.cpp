#include <iostream>
using namespace std;
int main()
{
    long long int t,n,i;
    cin>>t;
    string s[5];
    int arr[7];
    while (t--)
    {
        for (i=0;i<5;i++)
            cin>>s[i];
            arr[0]=arr[1]=arr[2]=0;
        n=s[0].length();
        for (i=0;i<n;i++)
            if (s[0][i]>=48 && s[0][i]<=57)
            arr[0]=arr[0]*10+(s[0][i]-'0');
            else{
                    arr[0]=0;
                break;
            }
            n=s[2].length();
              for (i=0;i<n;i++)
            if (s[2][i]>=48 && s[2][i]<=57)
            arr[1]=arr[1]*10+(s[2][i]-'0');
           else
             {
                 arr[1]=0;
                 break;
             }
               n=s[4].length();
              for (i=0;i<n;i++)
            if (s[4][i]>=48 && s[4][i]<=57)
            arr[2]=arr[2]*10+(s[4][i]-'0');
            else{
                    arr[2]=0;
                break;
            }
            if (arr[1]==0)
                arr[1]=arr[2]-arr[0];
            else if (arr[2]==0)
                arr[2]=arr[0]+arr[1];
            else
                arr[0]=arr[2]-arr[1];
            cout<<arr[0]<<" + "<<arr[1]<<" = "<<arr[2]<<endl;
        }
        return 0;
    }

