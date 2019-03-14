#include<bits/stdc++.h>
using namespace std;

int bin_coeff(int n, int k)
{
	int c[n+1][k+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=min(i,k);j++)
		{
			if(j==0 || j==i)
				c[i][j] = 1;
			else
				c[i][j] = c[i-1][j-1] + c[i-1][j];
		}
	}
	return c[n][k];
}

int sp_bin_coeff(int n,int k)
{
	int c[k+1];
	memset(c,0,sizeof(c));
	c[0] = 1;
	for(int i=0;i<=n;i++)
	{
		for(int j=min(i,k);j>0;j--)
		{
			c[j] = c[j] + c[j-1];
		}
	}
	return c[k];
}


int main()
{
	int n=5;
	int k = 2;
	cout<<bin_coeff(n,k)<<endl;
	cout<<sp_bin_coeff(n,k)<<endl;
	return 0;
}
