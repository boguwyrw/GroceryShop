#include "all_classes.h"

Greengrocers::Greengrocers()
{
}

Greengrocers::Greengrocers(int productCode, string productName, int productPrice)
{
	this->productCode = productCode;
	this->productName = productName;
	this->productPrice = productPrice;
}

Greengrocers::~Greengrocers()
{
}

int Greengrocers::getProductCode()
{
	return productCode;
}

string Greengrocers::getProductName()
{
	return productName;
}

int Greengrocers::getProductPrice()
{
	return productPrice;
}

void Greengrocers::setProductCode(int productCode)
{
	this->productCode = productCode;
}

void Greengrocers::setProductName(string productName)
{
	this->productName = productName;
}

void Greengrocers::setProductPrice(int productPrice)
{
	this->productPrice = productPrice;
}