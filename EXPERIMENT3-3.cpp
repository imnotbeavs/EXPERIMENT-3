#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{

	int b, d, e, n ;
	char arr[99];


	cout<<"Enter number of input: ";cin>>n;
		
	if(n<=99)	{
	
	

	for(b = 0; b <=n-1;b++)	{
		cout<<"Enter input no. "<<b+1<<" ";
		cin>>arr[b];
		cout<<endl;

	}

	for(b = 0; b <= n; b++)	{
		for(d = 0; d < n-b-1; d++)
		{
			if(arr[d] > arr[d+1])	{
				e = arr[d];
				arr[d] = arr[d+1];
				arr[d+1] = e;
			}
		}
	}
	cout<<"The array in reverse order is ";

	for(b = 0; b <= n-1; b++)	{
		cout<<arr[b]<<", ";
	}

	cout<<"Array size = "<<n;
	}


	else
		cout<<"This program can only store 99 char values ";


	getch();
	return 0;
}
