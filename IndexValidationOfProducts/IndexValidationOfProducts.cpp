#include <iostream>
using namespace std;

struct stProduct
{
    string Name;
    double Price;
};

void ReadProduct(stProduct& Product)
{
    cout << "Please enter the name of product?\n";
    cin >> Product.Name;

    cout << "Please enter the price of product?\n";
    cin >> Product.Price;
}

double CalculateTotalPrice(stProduct Product, int Quantity)
{
    return Product.Price * Quantity;
}

double CalculateDiscount(double TotalPrice, double Discout)
{
    return TotalPrice * Discout;
}

void PrintProduct(stProduct Product)
{
    cout << Product.Name << " : " << Product.Price << endl;
}

void ReadProducts(stProduct Products[3])
{
    ReadProduct(Products[0]);
    ReadProduct(Products[1]);
    ReadProduct(Products[2]);
}

void PrintProducts(stProduct Products[3])
{
    cout << "0\t";
    PrintProduct(Products[0]);
    cout << "1\t";
    PrintProduct(Products[1]);
    cout << "2\t";
    PrintProduct(Products[2]);

}

int main()
{
    stProduct Products[3];
    int Index, Quantity;
    double TotalPrice;

    ReadProducts(Products);
    PrintProducts(Products);

    cout << "Please enter a number of a product?\n";
    cin >> Index;

    cout << "Please enter a quantity?\n";
    cin >> Quantity;

    if (Index < 0 || Index > 2)
    {
        cout << "Product Not Found" << endl;
    }
    else
    {
        TotalPrice = CalculateTotalPrice(Products[Index], Quantity);

        if (TotalPrice >= 1000)
        {
            TotalPrice -= CalculateDiscount(TotalPrice, .2);
        }
        else
        {
            TotalPrice -= CalculateDiscount(TotalPrice, .1);
        }

        cout << Products[Index].Name << " : $" << TotalPrice << endl;
    }

    return 0;
}
