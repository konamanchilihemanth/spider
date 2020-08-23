#include<bits/stdc++.h>
using namespace std;
int main()
{
	int j,l,t,i,ans,sum;
	string s;
	cin>>t;
	for(i=0;i<t;i++)
	{
		ans=0,sum=1;
		cin>>s;
		l=s.length();

		if(s[0]=='>')
		sum-=2;
		for(j=1;j<l;j++)
		{
			if(sum<0)
			break;
			
			if(s[j]=='<')
			{
			sum++;
			continue;
		    }
			sum--;
			if(sum==0)
			ans=j+1;
			
		}
		
		
		cout<<ans<<endl;
		
		
		
	}	
}
