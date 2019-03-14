#include <bits/stdc++.h>
using namespace std;
int knapsack(int W[], int V[], int w, int n)
{
    int K[n+1][w+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            if(i==0 || j==0)
                K[i][j] = 0;
            else if(W[i-1]<=j)
                K[i][j] = max(V[i-1] + K[i-1][j-W[i-1]],K[i-1][j]);
            else
                K[i][j] = K[i-1][j];
        }
    }
    return K[n][w];
}

int main() {
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        int w;
        cin>>w;
        int W[n];
        int V[n];
        for(int i=0;i<n;i++)
        {
            cin>>V[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>W[i];
        }
        cout<<knapsack(W,V,w,n)<<endl;;
        t--;
    }
	return 0;
}
