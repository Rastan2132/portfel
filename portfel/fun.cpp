#include "Header.h"

void coin_innit(coins* coins) {
	coins->counter = rand() % 10 + 2;
	coins->nomination = rand() % 10 + 2;
	coins->year_of_creation = rand() % 1900 + 80;
}

void banknotes_innit(banknotes* banknotes) {
	banknotes->counter = rand() % 10 + 2;
	banknotes->nomination = rand() % 10 + 2;
	banknotes->year_of_creation = rand() % 1900 + 80;
	banknotes->made_in = rand_country();
	banknotes->currency = rand_currency();
}

void tokens_innit(tokens* tokens) {
	tokens->brand = rand_brand_tokens();
	tokens->counter = rand() % 10 + 2;
}

string rand_currency() {
	string curency_arr[size] = {"UAH", "USD", "EUR", "GBP", "JPY", "CNY", "RUB", "ILS", "INR", "PLN"};
	int rand_currency = rand() % 10 + 0;
	return curency_arr[rand_currency];
}

string rand_country() {
	string country_arr[size] = { "Ukraine", "USA", "Europe", "UK", "Japan", "China", "Russia", "Israel", "India", "Poland" };
	int rand_country = rand() % 10 + 0;
	return country_arr[rand_country];
}

string rand_brand_tokens() {
	string brand_tokens[size] = { "Zara", "Prada", "Adidas", "Nike", "Gucci", "Balenciaga", "McDonalds", "BurgerKing", "KFC", "Starbucks" };
	int rand_brand = rand() % 10 + 0;
	return brand_tokens[rand_brand];
}



static void show(){

}