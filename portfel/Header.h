#pragma once
#include <iostream>
#include <string>
#include "banknotes.h"
#include "coins.h"
#include "tokens.h"
#include "wallet.h"

#define maxline 30
#define size 10

using namespace std;

void coin_innit(coins* coins);
void banknotes_innit(banknotes* banknotes);
void tokens_innit(tokens* tokens);
static void show();
string rand_currency();
string rand_country();
string rand_brand_tokens();
