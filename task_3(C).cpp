#include<bits/stdc++.h>
using namespace std;
int main()
{
long int m,i,j,ans=0,n,answer;

cin>>n;
bool prime[n+1]={0};
prime[0]=1;prime[1]=1;

for(i=2;i*i<=n;i++)
{
      for(j=i*i;!prime[i] && j<=n;j+=i)
      {
	  prime[j]=1;   
      }

}
for(i=2;i<=n;i++)
if(prime[i]==0)
ans++;

cout<<ans;
answer=(ans*(ans+1))/2;
cout<<answer;
	
}
