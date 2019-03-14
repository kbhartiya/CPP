#include<bits/stdc++.h>
using namespace std;

void printBinary(int digits, string prefix="")
{
	if(digits==0) cout<<prefix<<endl;
	else{
		printBinary(digits-1,"0"+prefix);
		printBinary(digits-1,"1"+prefix);
	}
}
int main()
{
	printBinary(4,"");
	return 0;
	
}
