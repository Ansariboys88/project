#include<iostream>
using namespace std;
void linear_search(int arr[], int n)
{
	int temp=-1;
	for(int i=0;i<5;i++)
	{
		if(arr[i]==n)
		{
			cout<<"elemt found at position  "<<i+1<<endl;
			temp=0;
			
		}
		
	}
	if(temp==-1)
	{
		cout<<"element no found "<<endl;
		
	}
}
int main()
{
	int arr[5];
	cout<<"enter 5 element of array"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
		
	}
	int num;
	cout<<"enter the number you want to search in array"<<endl;
	cin>>num;
	linear_search(arr,num);
return 0;
}
