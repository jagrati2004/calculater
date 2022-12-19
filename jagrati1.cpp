#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int n;
	cin>>n;
	/*if(n==1)
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
}*/
	//cout<<a+b<<"\n" <<a-b<<"\n"<<a*b<<"\n" <<a/b;
	switch(n)
	{
		case 1:
			cout<<a+b;
			break;
		case 2:
			cout<<a-b;
			break;
		case 3:
			cout<<a*b;
			break;
		case 4:
			cout<<a/b;
			break;
	}
	
}
