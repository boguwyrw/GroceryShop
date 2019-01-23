#include "all_classes.h"

AllProducts::AllProducts()
{
}

AllProducts::AllProducts(Greengrocers greengrocers)
{
	this->greengrocers = greengrocers;
}

AllProducts::~AllProducts()
{
}

void AllProducts::showAllProducts()
{
	ifstream allProducts;
	allProducts.open("products.txt", ios::in);

	string tmpProduct;
	vector<string> tmpProductsList;

	int numberOfLinies = 0;

	if (allProducts.is_open())
	{

		while (getline(allProducts, tmpProduct))
		{
			tmpProductsList.push_back(tmpProduct);
		}
		allProducts.close();
	}
	else {
		cout << "Nie udalo sie otworzc pliku!" << endl;

	}
	numberOfLinies = tmpProductsList.size();
	for (int i = 0; i < numberOfLinies; i++)
	{
		cout << "Kod produktu: " << tmpProductsList[i] << endl;
		cout << "Nazwa produktu: " << tmpProductsList[i + 1] << endl;
		cout << "Cena produktu: " << atoi(tmpProductsList[i + 2].c_str()) / 100 << "," << atoi(tmpProductsList[i + 2].c_str()) % 100 << " zl" << endl;
		i = i + 2;
	}
}

vector<string> AllProducts::getAllProducts()
{
	ifstream allProducts;
	allProducts.open("products.txt");

	string tmpProduct;
	vector<string> tmpProductsList;

	if (allProducts.is_open())
	{
		while (getline(allProducts, tmpProduct))
		{
			tmpProductsList.push_back(tmpProduct);
		}
		allProducts.close();
	}
	else {
		cout << "Nie udalo sie otworzc pliku!" << endl;
	}

	return tmpProductsList;
}
