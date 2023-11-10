#pragma once
#include <iostream>
#include <string>
#include "Product.h"
using namespace std;
class Buy : public Product { 

	private:

		int count_tovar;
		double count_to_price_tovar;
		double weight_tovar;
	public:
		
		Buy(); 
		~Buy() { cout << "Объект был удалён" << endl; } 


		void setCount_Tovar(const int);

		int getCount_Tovar() const;

		double getCount_To_Price_Tovar() const;

		double getWeight_Tovar() const;

};