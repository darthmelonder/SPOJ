#include <iostream>
#include <cstring>
using namespace std;
int i;int Lastdig(int a){switch(a){case 0:if(i==1||i==3||i==7||i==9)return 1;if(i==2||i==4||i==6||i==8)return 6;if(i==5)return 5;case 1:return i;case 2:if(i==1||i==9)return 1;if(i==2||i==8)return 4;if(i==3||i==7)return 9;if(i==4||i==6)return 6;if(i==5)return 5;case 3:if(i==1||i==9||i==4||i==5||i==6)return i;if(i==2)return 8;if(i==8)return 2;if(i==3)return 7;if(i==7)return 3;}}int main(){int t,j,n;char s[1002];long long int b;cin>>t;while (t--){cin>>s>>b;n=strlen (s);i=s[n-1]-'0';if (i==0){cout<<"0"<<endl;continue;}if (b==0){cout<<"1"<<endl;continue;}j=b%4;n=Lastdig(j);cout<<n<<endl;}return 0;}
