/*write a program for bubble sorting.*/
#include<iostream>
#include<algorithm>
#define n 10
using namespace std;

int main()
{

        srand(time(NULL));
        int i,j;
        int arr[n];
        int temp;
        cout<<" Array to be sorted is:"<<endl;
        for(i=0;i<n;i++)
        {
                arr[i]=rand()%50;
                cout<<arr[i]<<" ";
        }
//sorting 
        cout<<" Sorted array is :" <<endl;
        for(i=0;i<n-1;i++)
        {
                for(j=0;j<n-1;j++)
                {

                        if(arr[j]>arr[j+1])
                        {
                        temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                        }
        //      cout<<arr[j]<<" ";
                }
        //      cout<<arr[i]<<" ";

        }

        for(int i=0;i<n;i++)
                cout<<arr[i]<<" ";
        cout<<endl;
        return 0;
}
