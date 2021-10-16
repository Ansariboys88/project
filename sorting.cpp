#include<iostream>
using namespace std;
int selection_sort(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{ int min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
			if(min!=i)
			{
				temp=arr[i];
				arr[i]=arr[min];
				arr[min]=temp;

			}
		}
	}
cout<<"sorted array is "<<endl;
for(i=0;i<n;i++)
{
	cout<<arr[i]<<"  ";
}
}
int main()
{
	int n;
	cout<<"enter the array size"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the element of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	selection_sort(arr,n);
	return 0;
	
}
