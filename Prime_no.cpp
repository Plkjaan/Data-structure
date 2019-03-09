#include<iostream>
#include<c++/7.3.0/set>
#define n 100;
using namespace std;
int main()
{ 
	set<int> S1;
	int i,a,b,x;
//	int v[n];
	cout<<" Enter two nos "<<endl;
	cin>>a>>b;
	cout<<" Prime no is "<<endl;

	for(x=a;x<b;x++)
	{
		for(i=2;i<x;i++)
		{	
				if(x%i==0)
				break;
		}
		if(i==x)
		S1.insert(x);
	}
		for(auto it= S1.begin();it!=S1.end();it++)
		cout<<*it<<" ";		
	
	
	
	return 0;
}

