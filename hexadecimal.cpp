#include<bits/stdc++.h>
using namespace std;

int getHexSum(int n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n%16;
		n/=16;
	}
	return sum;
}

int getGcd(int x,int y)
{
	if(y==0)
	   return x;
	return getGcd(y,x%y);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l,r,count=0;
		cin>>l>>r;
		for(int i=l;i<=r;i++)
		{
			if(getGcd(i,getHexSum(i))>1)
			   count++;
		}
		cout<<count<<"\n";
	}
}
