#include <iostream>
#include <conio.h>
//Binary Search In Array
using namespace std;
int BinarySearch(long arr[],long n,long key)								//Function For Binary Search
{
	int s;																	//Initialize a variable for start
	int e=n;																//Intialize end with n size
	while(s<=e)
	{
		long mid=(s+e)/2;													//find middle position
		
		if(arr[mid]==key)													//[1,2,3,4,5]
		{																		//mid
			return mid;
		}
		else if(arr[mid]>key)
		{
			return (mid-1);
		}
		else
		{
			return (mid+1);
		}
	}
	return -1;
}
int main()
{
	long n;
	cout<<"Enter The Size Of The Array:";
	cin>>n;
	
	long arr[n],i;
	cout<<"Enter The Elements in Array In Asscending Order for Binary Search:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	long key;
	cout<<"Enter The Key:";
	cin>>key;
	
	cout<<"The Index where key is present is:"<<BinarySearch(arr,n,key);							//call the function
	
	getch();
	return 0;
}
