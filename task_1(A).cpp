#include<bits/stdc++.h>
using namespace std;


int main()
{
int n,a=-1,b=-1,o,i,j;
cin>>n;
string s,c;
cin>>s;
o=s[n-1];
a=n-1;
for(i=n-2;i>=0;i--)
{
	if(s[i]!=o)
	{
	b=i;
	break;
    }
		
}
if(b==-1)
cout<<"-1";

if(b>=0)
{
	if(s[a]>s[b])
	swap(a,b);
	
	c=s;
	  c[b]='0';
      for(i=b+1;i<n;i++)
      c[i]='1';
      cout<<c;
	cout<<"   ";

c=s;
c[a]='1';
  for(i=a+1;i<n;i++)
  c[i]='0';
	cout<<c;	
	
}
}
