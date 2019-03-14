//insertion sorting
#include<iostream>
#define n 10
using namespace std;

int main()
{
	int a[10]={10,9,8,20,2,6,0,21,7,22};
	int i,x,j;
	int temp;
//	srand(time(NULL));

	cout<<" orignal array "<<endl;

	for(x=0;x<n;x++)
	{

//		a[i]=rand()%10;
		cout<<a[x]<<" ";	
	}
//sorting 
	cout<<" sorted array :"<<endl;


	for(i=1;i<n;i++)
	{
		temp=a[i];
		{	
			for(j=i;j>0 && a[j-1]>temp;j--)
			{
				a[j]=a[j-1];
			}
		a[j]=temp;
		}	
	}
	for(int i=0; i<n; i++)
	{
	cout<<a[i]<<" ";
	}
	
return 0;
}

