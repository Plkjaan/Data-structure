#include<iostream>
#include<algorithm>
//#define n 6

using namespace std;
int quicksort(int arr[],int low,int high);
int partition(int arr[],int low,int high);
int main()
{	
	int i,j;
	int n=5;
	int pivot;
	int arr[]={10,88,66,33,1};
	int low=0,high=n-1;
	
	

//	cout<<"DEnter the size of the array : "<<endl;
//	cin>>n;
	cout<< "Array is "<<endl;
	for(int z =0; z<5; z++){
		cin>>arr[z];
	}
	
	for(int s =0; s<5; s++){
//		if(arr[s]=rand()%50)
		{
		cout<<"before quicksort : "<<arr[s]<<endl;
		}
	}
	cout<<endl;
	quicksort(arr,low , high);
	
	for(int k =0; k<5; k++){
		cout<<"after quicksort : "<<arr[k]<<endl;
	}

}
int quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
		int pi=partition(arr,low,high);
		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);
	}

	

//	cout<<endl;
}


int partition(int arr[],int low,int high)
{
	int pivot=arr[high];
		int i=low-1;int temp=0,temp2=0;
	for(int j=low;j<=high-1;j++)
	{

		if(arr[j]<=pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		//	temp=arr[i];
		//	arr[i]=arr[j];
		//	arr[j]=temp;
		}
	}
			swap(arr[i+1],arr[high]);
			//temp2=arr[i+1];
			//arr[i+1]=arr[high];
			//arr[high]=temp2;

	return(i+1);

}

