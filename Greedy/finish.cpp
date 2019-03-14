#include<bits/stdc++.h>
using namespace std;
struct Activity
{
	int start,finish;
};
bool activityCompare(Activity s1, Activity s2)
{	return s1.finish<s2.finish;
}
void printMaxActivities(Activity arr[],int n)
{
	sort(arr,arr+n,activityCompare);
	int i=0;
	cout<<arr[i].start<<","<<arr[i].finish<<endl;
	for(int j=1;j<n;j++)
	{
		if(arr[i].finish<=arr[j].start)
		{
			cout<<arr[j].start<<","<<arr[j].finish<<endl;
			i=j;
		}
	}
}
int main()
{
	int arr[] = {{5,9},{2,3}};
	int n = sizeof(arr)/sizeof(arr[0]);
	printMaxActivities(arr,n);
	return 0;
}s
