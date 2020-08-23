#include<bits/stdc++.h>
using namespace std;
struct left{
	long long int l;
	int v;
};
struct right{
	long long int r;
	int v;
};
bool compareleft(struct left a,struct left b)
{
	return a.l<b.l;
}
bool compareright(struct right a,struct right b)
{
	return a.r<b.r;
}
int main()
{
	long long int n,q,sum=0,ans,i,j;
	cin>>n>>q;
	ans=n;
	struct left a[q];
	struct right b[q];
	for(i=0;i<q;i++)
	{
		cin>>a[i].l>>b[i].r>>a[i].v;
		b[i].v=a[i].v;
	
	}
	sort(a,a+q,compareleft);
	sort(b,b+q,compareright);
	i=0;
	j=0;
	while(i<q && j<q)
	{
		if(a[i].l<=b[j].r)
		{
			sum+=a[i].v;
			i++;
		}
		else
		{
			sum+=b[j].r;
			if(ans<sum)
			ans=sum;
			sum-=b[j].r;
			sum-=b[j].v;
			j++;
		}
		
	}
	while(j<q)
	{
		sum+=b[j].r;
			if(ans<sum)
			ans=sum;
			sum-=b[j].r;
			sum-=b[j].v;
			j++;
	}
	cout<<ans;
	
	
	
	
}
