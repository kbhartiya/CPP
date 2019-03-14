#include<bits/stdc++.h>
using namespace std;
vector<int > minCoins(int den[], int n, int v)
{
	vector<int > ans;
	for(int i=n-1;i>=0;i--)
	{
		while(v>=den[i])
		{
			v = v-den[i];
			ans.push_back(den[i]);
		}
	}
	return ans;
}

int main()
{
int value = 1321;
int den_arr[] = {1,2,5,10,20,50,100,500,1000};
int n = sizeof(den_arr)/sizeof(den_arr[0]); 
vector<int > res = minCoins(den_arr,n,value);
cout<<"Denomination Possible: "
for(int i=0;i<res.size();i++)
{
	cout<<res[i]<<" ";
}
return 0;
}
