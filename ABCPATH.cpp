#include <bits/stdc++.h>
using namespace std;
char a[60][60];
int maxi=0,h,w;
int visited [60][60]={0};
int dfs(int i,int j,int asc)
{
    int g= (int) a[i][j];
    //maxi=max (maxi,g-64);
    if (asc==90)
    {
        visited[i][j]=26;
        return 26;
    }
     char ch=(char)asc+1;
     //cout<<ch<<endl;
     //if (j+1<w && visited[i][j+1]==0 && a[i][j+1]==ch)
        //cout<<"**"<<endl;
     int wo,x,y,z,c,d,e,f;
     wo=x=y=z=c=d=e=f=g-64;
     if (i+1<h && a[i+1][j]==ch && visited[i+1][j])
        wo=visited[i+1][j];
     if (j+1<w && a[i][j+1]==ch && visited[i][j+1])
        x=visited[i][j+1];
         if (i-1>=0 && a[i-1][j]==ch && visited[i-1][j])
        y=visited[i-1][j];
         if (i+1<h && j+1<w && a[i+1][j+1]==ch && visited[i+1][j+1])
        e=visited[i+1][j+1];
         if (j-1>=0 && a[i][j-1]==ch && visited[i][j-1])
        z=visited[i][j-1];
         if (i-1>=0 && j-1>=0 && a[i-1][j-1]==ch && visited[i-1][j-1])
        c=visited[i-1][j-1];
         if (i+1<h && j-1>=0 && a[i+1][j-1]==ch && visited[i+1][j-1])
        d=visited[i+1][j-1];
         if (i-1>=0 && j+1<w && visited[i-1][j+1])
        f=visited[i-1][j+1];
    if (i+1<h && a[i+1][j]==ch && !visited[i+1][j])
        wo=dfs (i+1,j,asc+1);
    //cout<<"&&"<<j<<" "<<w<<endl;
    if (j+1<w && a[i][j+1]==ch && visited[i][j+1]==0)
        //cout<<"##"<<endl;
    if (j+1<w && a[i][j+1]==ch && !visited[i][j+1])
        {   //cout<<"^^"<<endl;
            x=dfs (i,j+1,asc+1);
         //cout<<i<<" "<<j<<endl;
        //cout<<x<<endl;
        }
    if (i-1>=0 && a[i-1][j]==ch && !visited[i-1][j])
        y=dfs (i-1,j,asc+1);
    if (j-1>=0 && a[i][j-1]==ch && !visited[i][j-1])
        z=dfs (i,j-1,asc+1);
    if (i-1>=0 && j-1>=0 && a[i-1][j-1]==ch && !visited[i-1][j-1])
        c=dfs (i-1,j-1,asc+1);
    if (i+1<h && j-1>=0 && a[i+1][j-1]==ch && !visited[i+1][j-1])
        d=dfs (i+1,j-1,asc+1);
    if (i+1<h && j+1<w && a[i+1][j+1]==ch && !visited[i+1][j+1])
        e=dfs (i+1,j+1,asc+1);
    if (i-1>=0 && j+1<w && a[i-1][j+1]==ch && !visited[i-1][j+1])
        f=dfs (i-1,j+1,asc+1);
       c=max(c,d);
       e=max(e,f);
       wo=max(wo,x);
       y=max(y,z);
       c=max(c,e);
       wo=max(wo,y);
       c=max(c,wo);
       visited[i][j]=c;
       return c;
}
int main()
{
    int i,j,k,t;
    int e=1;
     while (1)
    {
    cin>>h>>w;
    for (i=0;i<h;i++)
        for (j=0;j<w;j++)
          a[i][j]=1;
    if (!h && !w)
        break;
        for (i=0;i<h;i++)
        for (j=0;j<w;j++)
            visited[i][j]=0;
    for (i=0;i<h;i++)
        for (j=0;j<w;j++)
          while (a[i][j]<65 || a[i][j]>90)
            cin>>a[i][j];
    maxi=0;
    for (i=0;i<h;i++)
       for (j=0;j<w;j++)
        if (a[i][j]=='A' && !visited[i][j])
            dfs(i,j,65);
    for (i=0;i<h;i++)
    {for (j=0;j<w;j++)
        //cout<<visited[i][j]<<" ";
      //  cout<<endl;
      maxi=max(visited[i][j],maxi);
    }
    cout<<"Case "<<e<<": "<<maxi<<endl;
     e++;
    }
    return 0;
}

