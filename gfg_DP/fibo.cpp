#include<bits/stdc++.h>
//#include<chrono>
using namespace std;
//using namespace std::chrono;
# define MAX 102334155
long long res[MAX+1]={-1};

long long recursive(long long n)
{
	if(n==1) return 1;
	if(n==0) return 0;
		
	return recursive(n-1) + recursive(n-2);
}

long long bott_up(long long n)
{
	int fib[n+1];
	fib[0] = 0;
	fib[1] = 1;
	for(int i=2;i<=n;i++)
		fib[i] = fib[i-1] + fib[i-2];
	return fib[n];	
}

long long top_down(long long n)
{
	if(res[n]==-1)
	{
		if(n<=1)
			res[n] = n;
		else
		{
			res[n] = top_down(n-1) + top_down(n-2);
		}		
	}
	return res[n];
}
int main()
{
	int n = 102334155;
	//double start = chrono::high_resolution_clock::now();
	cout<<"Recursive: "<<recursive(n)<<endl;
	//double stop = chrono::high_resolution_clock::now();
	//double duration = chrono::duration_cast<microseconds>(stop - start);
	//cout<<"Time Taken: "<<duration.count()<<endl;
	
	//double start = chrono::high_resolution_clock::now();  
	cout<<"Bottom up: "<<bott_up(n)<<endl;
	//double stop = chrono::high_resolution_clock::now(); 
	//double duration = chrono::duration_cast<microseconds>(stop - start);
	//cout<<"Time Taken: "<<duration.count()<<endl;
	
	//double start = chrono::high_resolution_clock::now(); 
	cout<<"Top down: "<<top_down(n)<<endl;
	//double stop = chrono::high_resolution_clock::now(); 
	//double duration = chrono::duration_cast<microseconds>(stop - start);
	//cout<<"Time Taken: "<<duration.count()<<endl;
	
	return 0;
}
