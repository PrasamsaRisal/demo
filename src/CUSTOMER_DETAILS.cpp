#include"../include/CUSTOMER_DETAILS.h"
#include<iostream>
using namespace std;
void CUSTOMER_DETAILS:: SetCustomerDetails()
	{
		cout<<"Enter your full name: ";
		getline(cin, name);
        cout<<"Enter contact number: ";
        cin>>contact_number;
		cin.ignore();


	}
	void CUSTOMER_DETAILS:: PrintCustomerDetails()
	{
		cout<<"\tCustomer Details"<<endl;
		cout<<"\tName: "<<name<<endl;
		cout<<"\tContact Number: "<<contact_number<<endl;
		cout<<"-----------------------------------------------------"<<endl;

	}