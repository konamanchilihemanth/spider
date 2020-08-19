#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,x,y,j,i;
	vector<int> v;
	int s[6]={43,16,10,9,8,7};
	for(i=0;i<2;i++)
	{
		cout<<i*3<<" "<<i*3+1<<endl;
		cout.flush();
		cin>>x;
		
		cout<<i*3<<" "<<i*3+2<<endl;
		cout.flush();
		cin>>y;
		
		for(j=0;j<6;j++)
		if(x%s[j]==0 && y%s[j]==0)
		break;
		
		v.push_back(s[j]);
		v.push_back(x/s[j]);
		v.push_back(y/s[j]);
		
		
	}
	
	for(j=0;j<6;j++)
	cout<<v[j]<<"  ";
	cout.flush();
	
	
}
