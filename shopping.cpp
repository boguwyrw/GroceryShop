#include "all_classes.h"

Shopping::Shopping()
{
}

Shopping::~Shopping()
{
}

int Shopping::amountOfShopping()
{
	AllProducts allProducts;
	int numbersOfLinies = allProducts.getAllProducts().size();
	vector<string> productsList = allProducts.getAllProducts();

	string productCode;
	string productName;
	string value;
	int price = 0;
	int amount = 0;
	int quantity = 1;
	char exitShopping = 'T';

	do
	{
		cout << "Podaj kod zakupionego produktu" << endl;
		cin >> productCode;

		for (int i = 0; i < numbersOfLinies; i++) {
			if (productCode == productsList[i]) {
				value = productsList[i + 2];
				price = atoi(value.c_str());
				productName = productsList[i + 1];
				cout << "Podaj ilosc produktu" << endl;
				cin >> quantity;
				cout << "Zakupiony produkt: " << productName << ", ilosc: " << quantity << endl;
			}

		}

		amount = (amount + price)*quantity;
		cout << "Aktualna kwota do zaplaty: " << amount / 100 << "," << amount % 100 << " zl" << endl;
		cout << "Czy chcesz kontynuowac (T/N) ?" << endl;
		cin >> exitShopping;

	} while ((exitShopping != 'N') && (exitShopping != 'n'));

	return amount;
}
