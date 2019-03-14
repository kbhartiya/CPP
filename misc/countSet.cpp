/*
Given a positive integer n, count the total number of set bits in binary representation of all numbers from 1 to n.
*/
#include<bits/stdc++.h>
using namespace std;
int countbitn(int k)
{
	if(k<=0)
		return 0;
	return (k%2==0?0:1) + countbitn(k/2);	
}
int countSetbits(int n)
{
	int bitcountsum = 0;
	for(int i=1;i<=n;i++)
	{	
		bitcountsum+=countbitn(i);
	}
	return bitcountsum;
}


int main()
{
	int n=4;
	cout<<countSetbits(n)<<endl;
	return 0;
}

