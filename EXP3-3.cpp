#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cstring>
#include<cstdlib>

using namespace std;

int main()
{

	int a, b, d, e, n ;
	char arr[100];


	cout<<"Enter characters of up to 100: "<<endl;

	cin.getline(arr, 100);

	for(a = 0; arr[a] != '\0'; a++)
		arr[a] = arr[a];

	for(b = 0; b <= a; b++)	{
		for(d = 0; d<=a-b-1; d++)
		{	
			if(arr[d] > arr[d+1])	{
				e = arr[d];
				arr[d] = arr[d+1];
				arr[d+1] = e;
			}
		}	
	}
	cout<<endl<<"The array in reverse order is "<<endl;

	for(b = 0; b < a; ++b)	{
		cout<<arr[b]<<", ";
	}
	
	cout<<endl<<"Array size = "<<a;

	getch();
	return 0;
}
