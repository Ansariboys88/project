#include<iostream>
using namespace std;
int partition(int arr[], int s,int e);
//void swap(int &a,int &b)
//{
//	int temp;
//	temp=a;
//	a=b;
//	b=temp;
//}
void quick_sort(int arr[],int s,int e)
{   
	if(s<e)
	{
		int p=partition(arr,s,e);
	    quick_sort(arr,s,(p-1));
     	quick_sort(arr,(p+1),e);
    }
	
}
int partition(int arr[],int s, int e)
{
	int pivot=arr[e];
	int pindex=s;
	for(int i=s;i<e;i++)
	{
		if(arr[i]<pivot)
		{
			//swap(arr[i],arr[pindex]);
			int temp=arr[i];
			arr[i]=arr[pindex];
			arr[pindex]=temp;
			pindex++;
		}
	}
	//swap(arr[e],arr[pindex]);
	int temp=arr[e];
			arr[e]=arr[pindex];
			arr[pindex]=temp;
	return pindex;
}
int main()
{
	 int size;
	 cout<<"enter the aize of arrat"<<endl;
	 cin>>size;
	 int arr[size];
	 cout<<"enter the array of size "<<size<<endl;
	 for(int i=0;i<size;i++)
	 {
	 	cin>>arr[i];
	 	
	 }
	 cout<<"before sorting"<<endl;
 for(int i=0;i<size;i++)
	 {
	 	cout<<arr[i]<<"  ";
	 	
	 }	
	 cout<<endl;
	 cout<<"after sorting"<<endl;
	 quick_sort(arr,0,(size-1));
	  for(int i=0;i<size;i++)
	 {
	 	cout<<arr[i]<<"  ";
	 	
	 } 

}
