#pragma once
#include <string>
class PRODUCT_DETAIL
{
private:
    std::string item_name;
    int quantity;
    float price;

public:
    void InputProductDetail();
    std::string GetItem();
    int GetQuantity();
    float GetPrice();
    float TotalBilling();
};