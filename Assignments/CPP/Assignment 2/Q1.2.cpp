#include <iostream>
using namespace std;


double reorderCost(int qty, double unitPrice)
{
    return qty * unitPrice;
}


double reorderCost(double qty, double unitPrice)
{
    return qty * unitPrice;
}


double reorderCost(int qty, double unitPrice, double taxRate)
{
    double cost = qty * unitPrice;
    double tax = cost * taxRate / 100;

    return cost + tax;
}

// Default argument
double applyDiscount(double price, double discountPercent = 10.0)
{
    double discount = price * discountPercent / 100;

    return price - discount;
}

int main()
{
    // Calling int version
    double cost1 = reorderCost(10, 50.0);

    // Calling double version
    double cost2 = reorderCost(2.5, 50.0);

    // Calling version with tax
    double cost3 = reorderCost(10, 50.0, 18.0);

    // Calling discount with default 10%
    double price1 = applyDiscount(1000);

    // Calling discount with our own discount
    double price2 = applyDiscount(1000, 20.0);

    cout << "Integer Reorder Cost   : Rs. " << cost1 << endl;
    cout << "Fractional Reorder Cost: Rs. " << cost2 << endl;
    cout << "Reorder Cost with Tax  : Rs. " << cost3 << endl;

    cout << "Default Discount (10%) : Rs. " << price1 << endl;
    cout << "20% Discount            : Rs. " << price2 << endl;

    return 0;
}