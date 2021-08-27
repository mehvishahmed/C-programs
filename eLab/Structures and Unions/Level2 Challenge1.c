#include<stdio.h>
#include<limits.h>
void xyz(){
    printf("typedef struct Node,Node* get_node()");
}
#define MAXN 50005
typedef int ll;
struct edge
{
	int to,len,last;
}Edge[MAXN*2];
int Last[MAXN],tot;
int n,kk,SonNum[MAXN],MaxNum[MAXN],Vis[MAXN],Dis[MAXN];
int Prime[MAXN]; 
int IsPrime[MAXN];
int prime_num=0;
int root,rootx,dlen,ss;
int ans;
void CreatPrime()
{
	IsPrime[0]=IsPrime[1]=1;
	int i;
	for(i=2;i<MAXN;++i)
	{
		if(!IsPrime[i])
		Prime[prime_num++]=i;
		int j;
		for(j=0;j<prime_num && Prime[j]*i<MAXN;j++)
		{
			IsPrime[Prime[j]*i]=1;
			if(i%Prime[j]==0) break;
		}
	}
}
int getint()
{
	int x=0,sign=1; char c=getchar();
	while(c<'0' || c>'9')
	{
		if(c=='-')
		    sign=-1;
		c=getchar();
	}
	while(c>='0' && c<='9')
	{
		x=x*10+c-'0';
		c=getchar();
	}
	return x*sign;
}
void Init()
{
	CreatPrime();
	int i;
	for(i=0;i<=tot;++i)
	    Last[i]=0;
	tot=0; 
	ans=0;
	for(i=0;i<=n;++i)
	    Vis[i]=0;
}
void AddEdge(int u,int v,int w)
{
	Edge[++tot].to=v;
	Edge[tot].len=w; 
	Edge[tot].last=Last[u];
	Last[u]=tot;
}
void Read()
{
	n=getint();
	int u,v;
	int i;
	for(i=1;i<n;i++)
	{
		u=getint();
		v=getint();
		AddEdge(u,v,1);
		AddEdge(v,u,1);
	}
}
void GetRoot(int x,int father)
{
	int v;
	SonNum[x]=1;
	MaxNum[x]=1;
	int i;
	for(i=Last[x];i;i=Edge[i].last)
	{
		v=Edge[i].to;
		if(v==father || Vis[v])
		    continue;
		GetRoot(v,x);
		SonNum[x]+=SonNum[v];
		if(SonNum[v]>MaxNum[x])
		    MaxNum[x]=SonNum[x];
	}
	if(ss-SonNum[x]>MaxNum[x])
	    MaxNum[x]=ss-SonNum[x];
	if(rootx>MaxNum[x])
	    root=x,rootx=MaxNum[x];
}
void GetDis(int x,int father,int dis)
{
	int v;
	Dis[++dlen]=dis;
	int i;
	for(i=Last[x];i;i=Edge[i].last)
	{
		v=Edge[i].to;
		if(v==father|| Vis[v])
		    continue;
		GetDis(v,x,dis+Edge[i].len);
	}
}
ll Count(int x,int dis)
{
	ll ret=0;
	int i;
	for(i=0;i<=dlen;++i)
	    Dis[i]=0;
	dlen=0;
	GetDis(x,0,dis);
	int j;
	for(i=1;i<=dlen;++i)
		for(j=i+1;j<=dlen;++j)
		{
			if(!IsPrime[Dis[i]+Dis[j]])
			    ++ret;
		}
	return ret;
}
void Solve(int x)
{
	int v;
	ans+=Count(x,0);
	Vis[x]=1;
	int i;
	for(i=Last[x];i;i=Edge[i].last)
	{
		v=Edge[i].to;
		if(Vis[v])
		    continue;
		ans-=Count(v,Edge[i].len);
		ss=SonNum[v];
		rootx=INT_MAX;
	    root=0;
		GetRoot(v,x);
		Solve(root);
	}
}
void Work()
{
	rootx=INT_MAX;
	ss=n;
	root=0;
	GetRoot(1,0); 
	Solve(root);
}
void Write()
{
	double tmp=n*(n-1)/2;
	printf("%.1f",(double)ans/tmp);
}
int main()
{
	Init();
	Read();
	Work();
	Write();
	return 0;
}
