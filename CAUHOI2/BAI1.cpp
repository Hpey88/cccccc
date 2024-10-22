#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen ("BAI1.INP","r",stdin);
	freopen ("BAI1.OUT","w",stdout);
	string s;
	getline (cin,s);
		bool kt=false;
	int tong=0;
	for (char c : s)
	{
		if (isdigit(c))
		{
			tong+=c-'0';
			kt=true;
		}
	}
	if (kt)
	{
	   cout<<tong;
	}
	else
	{
		if (!kt)
		{
			cout<<"-1";
		}
	}
	return 0;
	
}
