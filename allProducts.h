#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

class AllProducts
{
private:
	Greengrocers greengrocers;
public:
	AllProducts();
	AllProducts(Greengrocers greengrocers);
	~AllProducts();
	
	void showAllProducts();
	vector<string> getAllProducts();
};