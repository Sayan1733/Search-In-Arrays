#include <iostream>
#include <conio.h>
//Linear Search in array
using namespace std;
int linearsearch(int arr[],int n,int key)						//Function for searching
{
	int i=0;
	while(i<n)
	{
		if(arr[i]==key)
		{
			return i;
		}
		i++;
	}
	
	return -1;
}
int main()
{
	int n;
	cout<<"Enter The Size of array:";
	cin>>n;
	
	int arr[n],i;
	cout<<"Enter The Elements in array:";
	for(i=0;i<n;i++)																		//Insert Elements in loop
	{
		cin>>arr[i];
	}
	int key;
	cout<<"Enter The Key:";																	//Find Key Element
	cin>>key;
	cout<<"The Index Where the key number is:"<<linearsearch(arr,n,key);					//Call The Function
	
	getch();
	return 0;
}
