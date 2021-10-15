#include<iostream>
using namespace std;
void binary_search(int arr[],int n,int num)
{
	int left,right ,mid;
	left=0;
	right=n-1;
	
while(left<=right)
{  mid=left+(right-left)/2;

	 if(arr[mid]==num)
	{
		cout<<"number found at postion "<<mid+1<<endl;
		exit(0);
	}
	else if(arr[mid]<num)
	{
		left=mid+1;
		
				
	}
	else
	right=mid-1;
}	
}
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	

  int no;
  cout<<"enter the number you ant to seach using bineary"<<endl;
  cin>>no;
  binary_search(arr,10,no);
  return 0;
  
}
