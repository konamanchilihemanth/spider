#include<bits/stdc++.h>
using namespace std;
int fun(string s,int n,int ans)
{
	s.resize(n);
	if(n==1)
	return ans;
	
	string c;
	c=s;
	c.resize(n/2);
	c=c+c;
	if(s==c)
	{
	
	return fun(s,n/2,ans+1);
    }
	else
	return ans;
	
}
int main()
{
	int n,ans=0;
	cin>>n;
	string s;
	cin>>s;
	ans=fun(s,n,ans);
	cout<<ans;	
}
