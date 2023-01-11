#include "Header.h"

int main()
{
    tokens tokens;
    coins coins;
    banknotes banknotes;

    tokens_innit(&tokens);
    coin_innit(&coins);
    banknotes_innit(&banknotes);



    cout << coins.counter << endl << " " << tokens.brand << endl;
   

}
