#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

class Greengrocers
{
private:
	int productCode;
	string productName;
	int productPrice;

public:
	Greengrocers();
	Greengrocers(int, string, int);
	~Greengrocers();

	int getProductCode();
	string getProductName();
	int getProductPrice();

	void setProductCode(int productCode);
	void setProductName(string productName);
	void setProductPrice(int productPrice);
};