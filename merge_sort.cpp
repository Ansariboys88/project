#include<iostream>
using namespace std;
void merge(int arr[], int left,int m,int right);
void merge_sort(int arr[],int l,int r)
{   
	if(l<r)
	{
		int mid=(l+r)/2;
	    merge_sort(arr,l,mid);
     	merge_sort(arr,mid+1,r);
    	merge(arr,l,mid,r);
    }
	
}
void merge(int arr[],int left,int m,int right)
{
	int i=left,j=m+1,temp[5],k=left;
	while(i<=m && j<=right)
	{
		if(arr[i]<=arr[j])
		{
			temp[k]=arr[i];
			k++;
			i++;
		}
		else
		{
			temp[k]=arr[j];
			k++;
			j++;
		}
	
	}
	while(i<=m)
	{
		temp[k]=arr[i];
		i++;k++;
		
	}
	while(j<=right)
	{
		temp[k]=arr[j];
		j++;k++;
	}

		for(int i=left;i<=right;i++)
			{ arr[i]=temp[i];}

}
int main()
{
	int i, arr[5];
	cout<<"enter five element of array"<<endl;
	for(int i=0;i<5;i++)
{
	cin>>arr[i];
	
	
}
for(int i=0;i<5;i++)
{
	cout<<arr[i]<<"  ";
	
	
}
cout<<endl;
merge_sort(arr,0,4);
for(int i=0;i<5;i++)
{
	cout<<arr[i]<<"  ";
	
	
}
return 0;
}
