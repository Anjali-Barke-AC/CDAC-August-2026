#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int productId;
    string name;
    double price;
    int quantity;

public:

    
    void acceptDetails()
    {
        cout << "Enter Product ID: ";
        cin >> productId;

        cout << "Enter Product Name: ";
        cin >> name;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    
    void displayDetails() const
    {
        cout << productId << "\t"
             << name << "\t\t"
             << price << "\t"
             << quantity << "\t"
             << totalValue();

        if(quantity < 10)
        {
            cout << "\tLOW STOCK";
        }

        cout << endl;
    }

   
    double totalValue() const
    {
        return price * quantity;
    }

    
    bool isLowStock(int threshold) const
    {
        return quantity < threshold;
    }

    
    string getName() const
    {
        return name;
    }
};


int main()
{
    
    Product products[5];

    
    for(int i = 0; i < 5; i++)
    {
        cout << "\nEnter details for Product " << i + 1 << endl;
        products[i].acceptDetails();
    }

    
    cout << "\n===== INVENTORY REPORT =====" << endl;

    cout << "ID\tName\t\tPrice\tQty\tTotal Value" << endl;

    for(int i = 0; i < 5; i++)
    {
        products[i].displayDetails();
    }

   
    int highestIndex = 0;

    for(int i = 1; i < 5; i++)
    {
        if(products[i].totalValue() > products[highestIndex].totalValue())
        {
            highestIndex = i;
        }
    }

    cout << "\nHighest Value Product : "
         << products[highestIndex].getName()
         << "  (Rs. "
         << products[highestIndex].totalValue()
         << ")" << endl;


   
    int threshold;

    cout << "\nEnter low stock threshold: ";
    cin >> threshold;

    cout << "Low Stock (threshold: "
         << threshold << ") : ";

    bool found = false;

    for(int i = 0; i < 5; i++)
    {
        if(products[i].isLowStock(threshold))
        {
            if(found)
            {
                cout << ", ";
            }

            cout << products[i].getName();
            found = true;
        }
    }

    if(!found)
    {
        cout << "None";
    }

    cout << endl;

    return 0;
}