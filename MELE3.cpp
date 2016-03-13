#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
#define INF 0x7fffffff
#define pb(x) push_back(x)
#define graph pair<int,int>
struct cmp
{
    bool operator() (const graph &a,const graph &b)
    {
        return a.first>b.first;
    }
};
priority_queue <graph,vector<graph>,cmp> Q;
bool visited[10001];
long long int dist[10001];
vector <graph> G[10001];
int main()
{
    int i,n,t,v,u,src,dest,sz,k,w;
    long int e;
        scanf ("%d %d",&n,&e);
        for (i=0;i<e;i++)
        {
            scanf ("%d%d",&u,&v);
            w=(v-u);
            G[u-1].pb(graph(v-1,w));
            G[v-1].pb(graph(u-1,w));
        }
        src=1;
        dest=n;
        for (i=0;i<n;i++)
            dist[i]=INF;
        dist[src-1]=0;
        Q.push(graph(src-1,0));
        while (!Q.empty())
        {
            u=Q.top().first;
            Q.pop();
            if (visited[u])
                continue;
            sz=G[u].size();
            for (i=0;i<sz;i++)
            {
                v=G[u][i].first;
                w=G[u][i].second;
                k=dist[u];
                double d=(double)k/w;
                k=ceil(d);
                if ((k%2 && v>u) || (k%2==0 && v<u))
                    k++;
                k=k*w;
                if (k+w<dist[v])
                    dist[v]=k+w;
                Q.push(graph(v,dist[v]));
            }
            visited[u]=1;
        }
        printf ("%d\n",dist[dest-1]*5);
}
