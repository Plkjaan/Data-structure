//selection sort:w

#include<iostream>
#define n 10
using namespace std;
int main()
{
	int min,i,j;
	int a[n];
	for(i=0;i<n;i++)
	{
	a[i]=rand()%10;
	cout<<a[i]<<" ";
	}

	cout<<" Sorted array "<<endl;
	for(i=0;i<n;i++)
	{
		min=i;
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]<a[min])
					min=j;
				swap(a[min],a[i]);
			//	cout<<a[i];
			}
	//		cout<<a[i]<<" ";
		}
		cout<<a[i]<<" ";
	}


	return 0;
}





