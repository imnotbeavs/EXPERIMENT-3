#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	int arr[10], b, d, e, inputs ;
	double sum = 0;

	cout<<"Enter number of inputs";
	cin>>inputs;

	if(inputs<=10)
	{
		
	for(b = 0; b < inputs; b++)	{
		cout<<"Enter input element "<<b+1<<" ";
		cin>>arr[b];	
	}

	for(b = 0;b < inputs;b++)	{
		 
		sum+=arr[b];
	}

	for(b = 0; b < inputs; b++)	{
		for(d = 0; d < inputs-b-1; d++)
		{
			if(arr[d] > arr[d+1])	{
				e = arr[d];
				arr[d] = arr[d+1];
				arr[d+1] = e;
			}
		}
	}
		cout<<setprecision(4)<<showpoint;
	cout<<"highest nubmer = "<<arr[inputs-1]<<endl;
	cout<<"lowest nubmer = "<<arr[0]<<endl;
	cout<<"sum = "<<sum<<endl;
		
	cout<<"average = "<<sum/10<<endl;
	}

	else
		cout<<"this program only takes 10 elements...";

	getch();
	return 0;
}
