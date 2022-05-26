//Name: Muhammad Ahmed
//Reg no: 210555
//Class: BEME-F-21-B

#include <iostream>
using namespace std;

void menu()
{
	cout<<"University Cafe"<<endl;
	//cafe menu
	cout<<"________________________________"<<endl;
	cout<<"NO.     Menu               PRICE"<<endl;
	cout<<"1.      Zinger Burger      150"<<endl;
	cout<<"2.      Club Sandwitch     110"<<endl;
	cout<<"3.      Zinger Sandwitch   130"<<endl;
	cout<<"4.      Chicken Shawarma   100"<<endl;
	cout<<"5.      Fries              50"<<endl;
	cout<<"6.      Vegetable Roll     30"<<endl;
	cout<<"7.      Vegetable Samosa   20"<<endl;
	cout<<"8.      Chana Chaat        80"<<endl;
	cout<<"9.      Samosa Chaat       80"<<endl;
	cout<<"10.     Brownie            100"<<endl;
	cout<<"________________________________"<<endl;
}
int main()
{
	float jum;
	int n, qty[10], no[10];
	char choice;
	float price[10], total[10];
	string name[10];
	float change, pay;
	menu();
	cout<<"How many types of items do you want to order? : ";
	cin>>n;
	if(n>0 && n<=6)
	{
		for(int i=0; i<n; i++)
		{
		cout<<"Enter your choice: "<<i+1<<"=";
		cin>>no[i];
		cout<<"Enter Quantity = ";
		cin>>qty[i];
		if(no[i]==1)
		{
			name[i]="Zinger Burger";
			price[i]=150;
			total[i]=price[i]*qty[i];
		}
		else if(no[i]==2)
		{
			name[i]="Club Sandwitch";
			price[i]=110;
			total[i]=price[i]*qty[i];
		}
		else if(no[i]==3)
		{
			name[i]="Zinger Sandwitch";
			price[i]=130;
			total[i]=price[i]*qty[i];
		}
		else if(no[i]==4)
		{
			name[i]="Chicken Shawarma";
			price[i]=100;
			total[i]=price[i]*qty[i];
		}
		else if(no[i]==5)
		{
			name[i]="Fries";
			price[i]=50;
			total[i]=price[i]*qty[i];
		}
		else if(no[i]==6)
		{
			name[i]="Vegetable Roll";
			price[i]=30;
			total[i]=price[i]*qty[i];
		}
		else if(no[i]==7)
		{
			name[i]="Vegetable Samosa";
			price[i]=20;
			total[i]=price[i]*qty[i];
		}
		else if(no[i]==8)
		{
			name[i]="Chana Chaat";
			price[i]=80;
			total[i]=price[i]*qty[i];
		}
		else if(no[i]==9)
		{
			name[i]="Samosa Chaat";
			price[i]=80;
			total[i]=price[i]*qty[i];
		}
		else if(no[i]==10)
		{
			name[i]="Brownie";
			price[i]=100;
			total[i]=price[i]*qty[i];
		}
		jum= jum+total[i];
	}
	system("cls");
	menu();
	cout<<"Your Choice is : "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<""<<qty[i]<<" "<<name[i]<<endl;
		cout<<"Price = "<<price[i]<<endl;
		cout<<"Total Price "<<name[i]<<"="<<total[i]<<endl;
		cout<<endl;
	}
	cout<<"Do you want to buy more items?"<<endl;
	cout<<"Enter y if you want to continue"<<endl;
	cout<<"Enter n to show bill"<<endl;
	cin>>choice;
	
	switch(choice)
	{
		case 'y':
		{
		menu();
		main();
		break;
		}
		case 'n':
		{
		cout<<"\nFinal Price: "<<jum<<endl;
		cout<<"Paid : Rp. ";
		cin>>pay;
		change=pay-jum;
		cout<<"Change: Rp. "<<change<<endl;
		cout<<"Thank you for visiting our cafe";
		break;
		}
	}
 	}
	
	else
	cout<<"Code you input doesn't exist ";
	return 0;	
}
