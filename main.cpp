#include <iostream>
#include <string>

using namespace std;

const int MaxProducts = 100;

void AddProduct(string names[], double prices[], int quantities[], int& NumProducts)
{
    if (NumProducts >= MaxProducts)
        {
        cout << "Error: Inventory is full." << endl;
        return;
    }

    cout << "Enter product name: ";
    cin >> names[NumProducts];
    cout << "Enter product price: ";
    cin >> prices[NumProducts];
    cout << "Enter product quantity: ";
    cin >> quantities[NumProducts];
    NumProducts++;
    cout << "Product added successfully." << endl;
}
void DisplayProducts(const string names[], const double prices[], const int quantities[], int NumProducts)
{
    if (NumProducts == 0)
        {
        cout << "Inventory is empty." << endl;
        return;
    }

    cout << "Inventory:" << endl;
    for (int i = 0; i < NumProducts; ++i)
        {
        cout << "Name: " << names[i] << ", Price: " << prices[i] << ", Quantity: " << quantities[i] << endl;
    }
}

int main()
{
    string names[MaxProducts];
    double prices[MaxProducts];
    int quantities[MaxProducts];
    int NumProducts = 0;
    int choice;

    do {
        cout << "Menu:"<<endl;
        cout<< "1. Add a Product"<<endl;
        cout<< "2. Display All Products"<<endl;
        cout<< "3. Exit"<<endl;
        cout<< "Enter your choice:"<<endl;
        cin >> choice;
 switch (choice)
        {
            case 1:
                AddProduct(names, prices, quantities, NumProducts);
                break;
            case 2:
                DisplayProducts(names, prices, quantities, NumProducts);
                break;
            case 3:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);
}
