#include<bits/stdc++.h>
using namespace std;
int minp(int arr[],int n)
{
	int count=0;
	int flag = 0;
	int minneg = INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
			flag = 1;
		if(arr[i]<0)
			count++;
		if(arr[i]<minneg)
			minneg = arr[i];		
	}
	if(count%2==0)
	{
		
	}
}
int main()
{
	int arr[] = {1,1,-1,-34,-3,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Minimum possible product: "<<minp<<endl;
}
