#include<iostream>
#include<algorithm>
#define n 5
using namespace std;
int main()
{
	int i,j;
	int a[n];
	
	srand(time(NULL));
	cout<<" orignal array :"<<endl;

	for(i=0;i<n;i++)
		if(a[i]=rand()%100)
		{
		cout<<a[i]<<" ";
		}
	cout<<"sorted array is: "<<endl;
	for(i=0;i<n;i++)
		{
		for( j=0;j<n;j++)
		{ 	if(a[j]>a[j+1])
			{	
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	//	cout<<a[i]<<" ";
		}
		
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
