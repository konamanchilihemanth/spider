#include<bits/stdc++.h>

using namespace std;
int fun(string s,int ans)
{
	stringstream ss;
	long long int i,sum=0,l,j;
	l=s.length();
	
	if(l==1)
	return ans;
	
	for(i=l-1;i>=0;i--)
	{  
	    j=stoi(&s[i]);
	    sum+=j;
	    s.resize(i);
	}
	
	s=to_string(sum);

	ans++;
	
	return fun(s,ans);
		
}


int main()
{
	string s,c;
	int ans=0;
	cin>>s;
    ans=fun(s,ans);
	cout<<ans;
	
	
	
	
}
