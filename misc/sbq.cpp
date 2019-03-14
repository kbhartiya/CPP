/*
Given a string, count number of subsequences of the form a^ib^jc^k, i.e., it consists of i ’a’ characters, followed by j ’b’ characters, followed by k ’c’ characters where i >= 1, j >=1 and k >= 1.
*/
#include<bits/stdc++.h>
using namespace std;
int countsub(string s)
{
	int ac = 0,bc=0,cc=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='a')
			ac += 1+2*ac;
		else if(s[i]=='b')
			bc += ac+2*bc;
		else if(s[i]=='c')
			cc += bc+2*cc;		
	}
	return cc;
}
int main()
{
 	string s = "abbc";
 	cout<<countsub(s)<<endl;
	return 0;
}
