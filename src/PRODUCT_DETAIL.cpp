#include "../include/PRODUCT_DETAIL.h"
#include <iostream>
#include <string>
using namespace std;

void PRODUCT_DETAIL::InputProductDetail()
{
	cout << "Enter item name: ";
	getline(cin, item_name);
	cout << "Enter quantity of the item: ";
	cin >> quantity;
	cout << "Enter the price of the item: ";
	cin >> price;
}
std::string PRODUCT_DETAIL::GetItem() { return item_name; }
int PRODUCT_DETAIL::GetQuantity() { return quantity; }
float PRODUCT_DETAIL::GetPrice() { return price; }
float PRODUCT_DETAIL::TotalBilling() { return quantity * price; } // can I search on google?ofc
