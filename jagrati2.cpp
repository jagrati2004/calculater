#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<a+b;
	}
	else if(n==2)
	{
		cout<<a-b;
	}
	else if(n==3)
	{
		cout<<a*b;
	}
	else
	{
		cout<<a/b;
	}

}
