#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int tempctr, temp[3][7], provctr, dayctr;
	char prov[3][20] = {{"Province A: "},{"Province B: "}, {"Province C: "}};
	cout<<"Enter temperature for every days of the week of Province A, B, and C : \n"<<endl;
	
		for(provctr = 0; provctr<=2; provctr++)
		{
			cout<<prov[provctr]<<endl; 

			for(dayctr = 0; dayctr<7; dayctr++)
			{
				cout<<"Day "<<dayctr+1<<": ";
				cin>>temp[provctr][dayctr];	
			}
		}

		cout<<endl<<endl;
		for(provctr = 0; provctr<=2; provctr++)
		{
			cout<<prov[provctr]<<endl; 

			for(dayctr = 0; dayctr<7; dayctr++)
			{	
					
				cout<<"Day "<<dayctr+1<<": ";
				cout<<temp[provctr][dayctr]<<" "<<endl;
			}
		}


		getch();
		return 0;
}