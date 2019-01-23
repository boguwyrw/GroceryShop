#include "all_classes.h"

OperationMenu::OperationMenu()
{
}

OperationMenu::~OperationMenu()
{
}

void OperationMenu::operationMenu()
{
	int choice;

	AllProducts allPorducts;
	Shopping shopping;
	SaveProduct saveProduct;
	CleaningScreen cleaningScreen;

	vector<string> productsList;
	int amountToPay = 0;
	int numbersOfLinies = 0;
	
	do
	{
		cout << "MENU: " << endl;
		cout << "1. Wyswietl liste produktow" << endl;
		cout << "2. Kup produkt" << endl;
		cout << "3. Dodaj produkt" << endl;
		cout << "8. Czyszczenie ekranu" << endl;
		cout << "9. Wyjscie " << endl;

		cin >> choice;

		switch (choice)
		{
		case 1:
			allPorducts.showAllProducts();
			break;
		case 2:
			amountToPay = shopping.amountOfShopping();
			cout << "Calkowita kwota do zaplaty: " << amountToPay / 100 << "," << amountToPay % 100 << " zl" << endl;
			break;
		case 3:
			numbersOfLinies = allPorducts.getAllProducts().size();
			productsList = allPorducts.getAllProducts();			
			cout << "Ostatni numer produktu: " << productsList[numbersOfLinies - 3] << endl;
			saveProduct.saveProduct();
			break;
		case 8:
			cleaningScreen.cleanScreen();
			break;
		case 9:
			cout << "Do widzenia" << endl;
			break;
		default:
			cout << "Bledny wybor" << endl;
		}
	} while (choice != 9);
}
