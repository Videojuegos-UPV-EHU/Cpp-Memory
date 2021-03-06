// Exercise.ReadFile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

struct Product
{
	int Id;				//Product Ids start from 0 to the number of products -1
	double Price;		//The price at which the product is sold
};

struct Sale
{
	int SaleId;
	int ProductId;	//product id
	int NumItems;	//number of items of the same product sold in this sale
};


void CalculateSalesPerProduct(const char* filename)
{
	//The format of input binary file is:
	//
	//<Content>					<Type>
	//--------------------------------------
	// NumProducts				(int)
	// Product #0				(Product)
	// Product #1				(Product)
	// ...
	// Product #NumProducts-1	(Product)
	// NumSales					(int)
	// Sale #0					(Sale)
	// Sale #1					(Sale)
	// ...
	// Sale #NumSales-1			(Sale)

	//The output of this function should be:
	//
	//Product #4: 31 items sold (226.92 euros)
	//Product #5: 24 items sold (5.52 euros)
	//Product #2: 8 items sold (140 euros)
	//Product #0: 3 items sold (9.6 euros)
	//Product #3: 33 items sold (40.92 euros)
	//Product #1: 34 items sold (680 euros)
}

int main()
{


	CalculateSalesPerProduct("product-sales");


    return 0;
}

