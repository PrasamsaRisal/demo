#include "../include/ACTION_MENU.h"
#include "../include/PRODUCT_DETAIL.h"
#include "../include/CUSTOMER_DETAILS.h"

#include <iostream>
using namespace std;
void ACTION_MENU::Menu(CUSTOMER_DETAILS &cd)
{

	bool end = false;
	int choice;
	float grand_total = 0;
	int total_item = 0;
	float discount = 0;

	PRODUCT_DETAIL p[100];

	while (!end)
	{
		cout << "\nOptions:" << endl;
		cout << "1. Buy item" << endl;
		cout << "2. Receipt" << endl;
		cout << "3. Exit" << endl;
		cout << "Enter choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			int n;
			cout << "How many items you want to add: ";
			cin >> n;
			for (int i = 0; i < n; i++)
			{
				cout << "Item " << (total_item + 1) << ":" << endl;
				p[total_item].InputProductDetail();
				grand_total += p[total_item].TotalBilling();
				total_item++; // INCREMENT the counter
			}
			if (grand_total > 2500)
			{
				discount = grand_total * 0.05f;
			}
			break;
		}
		case 2:
		{
			cout << "\n\tHome Grocery\t\t" << endl;
			cout << "-------------- Receipt --------------" << endl;
			cd.PrintCustomerDetails();

			cout << "\tPurchased Items" << endl;
			for (int i = 0; i < total_item; i++)
			{
				cout << "\tItem: " << p[i].GetItem()
					 << " | Qty: " << p[i].GetQuantity()
					 << " | Price: " << p[i].GetPrice()
					 << " | Total: " << p[i].TotalBilling() << endl;
			}
			cout << "-----------------------------------------------------" << endl;
			cout << "\tTotal items: " << total_item << endl;
			cout << "\tSub Total: " << grand_total << endl;
			cout << "\tDiscount: " << discount << endl;
			cout << "\tGrand Total: " << grand_total - discount << endl;
			cout << "-----------------------------------------------------" << endl;
			cout << "\t\tThank you, Visit again!!\t\t\t" << endl;
			break;
		}
		case 3:
			cout << "Exiting successfully..." << endl;
			end = true;
			break;
		default:
			cout << "Invalid choice!!" << endl;
		}
	}
}
