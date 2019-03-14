#include<bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end();
typedef pair<int, pair<int, int> > job;
bool cmp(job a, job b)
{
	return a.second.first*b.second.second>a.second.second*b.second.first;
}
void printOptimalJob(int L[],int T[],int n)
{
	vector<job> list;
	for(int i=0;i<n;i++)
	{
		int t=T[i];
		int l = L[i];
		list.push_back(make_pair(i+1,make_pair(l,t)));
		
	}
	stable_sort(all(list),cmp_pair);
	for(int i=0;i<n;i++)
		cout<<list[i].first<<" ";
}



int main()
{
	int l[] = {1,2,3,5,6};
	int t[] = {2,4,1,3,2};
	int n = sizeof(l)/sizeof(l[0]);
	printOptimalJob(l,t,n);
	return 0;
}
