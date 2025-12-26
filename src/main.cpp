#include "../include/WELCOME.h"
#include "../include/CUSTOMER_DETAILS.h"
#include "../include/PRODUCT_DETAIL.h"
#include "../include/ACTION_MENU.h"
#include <iostream>
#include <string>
int main()
{
    WELCOME();
    CUSTOMER_DETAILS cd;
    cd.SetCustomerDetails();
    PRODUCT_DETAIL pd;

    ACTION_MENU am;
    am.Menu(cd);
    return 0;
}
