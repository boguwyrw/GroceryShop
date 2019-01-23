#include "all_classes.h"

SaveProduct::SaveProduct()
{
}

SaveProduct::SaveProduct(Greengrocers greengrocers)
{
	this->greengrocers = greengrocers;
}

SaveProduct::~SaveProduct()
{
}

Greengrocers SaveProduct::getGreengrocers()
{
	return greengrocers;
}

void SaveProduct::setGreengrocers(Greengrocers greengrocers)
{
	this->greengrocers = greengrocers;
}

void SaveProduct::saveProduct()
{
	int tmpProductCode;
	string tmpProductName;
	int tmpProductPrice;

	cout << "Podaj kod produktu: " << endl;
	cin >> tmpProductCode;
	greengrocers.setProductCode(tmpProductCode);

	cout << "Podaj nazwe: " << endl;
	cin >> tmpProductName;
	greengrocers.setProductName(tmpProductName);
	
	cout << "Podaj cene (w groszach): " << endl;
	cin >> tmpProductPrice;
	greengrocers.setProductPrice(tmpProductPrice);

	ofstream productsFile("products.txt", ios::app);

	productsFile << greengrocers.getProductCode() << endl;
	productsFile << greengrocers.getProductName() << endl;
	productsFile << greengrocers.getProductPrice() << endl;

	productsFile.close();

	cout << "Dodano produkt: " << endl;
	cout << "Kod: " << greengrocers.getProductCode() << endl;
	cout << "Nazwa: " << greengrocers.getProductName() << endl;
	cout << "Cena: " << greengrocers.getProductPrice() << " groszy" << endl;
	cout << "Dziekuje" << endl;
}
