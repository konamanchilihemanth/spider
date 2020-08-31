#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,m,sum;
	cin>>n>>m;
	int a[m],i,j;
	for(i=0;i<m;i++)
	cin>>a[i];
    sum=accumulate(a,a+m,0);
    if(n==1)
    cout<<sum;
    
    else
    {
      sum=sum/2;
      bool b[m+1][sum+1];
      for(i=0;i<=m;i++)
      b[i][0]=1;
      
      for(i=1;i<=sum;i++)
      b[0][i]=0;
      
      for(i=1;i<=m;i++)
      for(j=1;j<=sum;j++)
      {
	  	      if(j<a[i-1])
              b[i][j]=b[i-1][j];
			  if(j>=a[i-1])
			  b[i][j]=b[i-1][j]||b[i-1][j-a[i-1]];      
	  
	  
	  }
      
      for(i=sum;i>=0;i--)
      if(b[m][i]==1)
      break;
      
      cout<<i;
	}

}
