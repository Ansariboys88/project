#include<iostream>
using namespace std;
int selection_sort(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;

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
