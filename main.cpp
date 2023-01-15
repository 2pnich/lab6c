#include <iostream>
#include "shaurma.h"
#include "pizza.h"
#include "Drink/drink.h"
#include "soup.h"
#include "fries.h"
#include "basket.h"
#include <windows.h>
using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);
    float summ1;
    string optionInput;
    int option, i = 0, counter_one;
    auto *bas = new basket[20];

    shaurma _shaurma = shaurma();
    pizza _pizza = pizza();
    drink _drink = drink();
    soup _soup = soup();
    fries _fries = fries();
    bas[i] = basket(_shaurma, _pizza, _drink, _soup, _fries);

    while (option != 5) {
        puts("\nВвести заказ - 1");
        puts("Вывести все заказы - 2");
        puts("Ввести двумерный массив - 3");
        puts("Вывести двумерный массив - 4");
        puts("Выход - 5");
        /////TRY БЛОК/////
        cin >> optionInput;
        try {
            option = stoi(optionInput);
            if (option > 5 || option < 1)
                throw ("invalid range");
        } catch (invalid_argument e) {
            cout << ("Нужно вводить цифру!!!");
        } catch (char const *s) {
            cout << ("Диапазон 1-5!!!\n");
        }
        //////////////////

        switch (option) {
            case 1: {
                // ОДНОМЕРНЫЙ МАССИВ ОБЪЕКТОВ //

                bas[i].input();
                bas[i].output();
//                summ1 = basket::sum(*bas);
//                basket::payment(summ1);
                i++;
                counter_one++;
                break;
            }
            case 2: {
                for (int j = 0; j < counter_one; j++) {
                    bas[j].output();
                    bas[j].sum(*bas);
                    puts("");
                }
                break;
            }
            case (3):
                exit(0);
        }
    }
}
