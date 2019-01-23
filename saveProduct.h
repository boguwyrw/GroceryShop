#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

class SaveProduct
{
private:
	Greengrocers greengrocers;
public:
	SaveProduct();
	SaveProduct(Greengrocers greengrocers);
	~SaveProduct();

	Greengrocers getGreengrocers();
	void setGreengrocers(Greengrocers greengrocers);

	void saveProduct();
};