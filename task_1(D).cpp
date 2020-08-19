#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,r,x,y,i,ans=0;
	cin>>n>>r>>x>>y;
	bool c[n],s[n];
	for(i=0;i<n;i++)
	cin>>c[i];
	for(i=0;i<n;i++)
	cin>>s[i];
	for(i=0;i<n;i++)
	if(c[i])
	{
	     if(s[i])
		 ans+=x;
		 
	     else if(!s[i])
	     ans-=y;
		
    }
    
    if(ans>0)
    cout<<"promoted";
    else if(ans<0)
    cout<<"demoted";
    else if(ans==0)
    cout<<"no change";



}
