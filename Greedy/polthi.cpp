#include<bits/stdc++.h>
using namespace std;
int thievescatch(char arr[],int n)
{
	int res = 0;
	vector<int > thi;
	vector<int > pol;
	for(int i=0;i<n;i++)
	{
		if(arr[i]=='P')
			pol.push_back(i);
		else
			thi.push_back(i);	
	}
	int l=0,r=0;
	while(l<thi.size() && r<pol.size())
	{
	if(abs(thi[l]-thi[r])<=k)
	{
	res++;
	l++;
	r++;
	}
	else if(thi[l]<pol[r])
		l++;
	else
		r++;
			
}
return res;
}

int main()
{
char arr[] = {'P','T','P','T','T'};
int k = 1;
int n = sizeof(arr)/sizeof(arr[0]);
cout<<"Thieves Catched "<<thievescatch(arr,n,k)<<endl;
return 0;
}
