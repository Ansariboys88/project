#include<iostream>
using namespace std;
void insertion_sort(int arr[], int n)
{
	int i ,j=0 ,key=0;
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
		for(int i=0;i<n;i++)
	cout<<arr[i]<<"  ";
}
int main()
{
	int n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	insertion_sort(arr,n);

	return 0;

}
