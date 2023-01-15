#include <iostream>
#include "drink.h"
#include "Coffee.h"

using namespace std;

drink::drink() {
    this->setType("type");
    this->setPrice(0);
    this->setVolume(0);
}

drink::drink(string type, string sugar) {
    this->setType("coffee");
    this->setPrice(60);
    this->setVolume(180);
    this->cofType = type;
    this->cofSugar = sugar;

}

drink::~drink() = default;

void drink::input() {
    cout<<"Введите вид напитка: ";
    string type;
    cin>>type;
    setType(type);
    if (type == "coffee") {
        Coffee cof = Coffee();
        cof.cofInput();
    }
    cout<<"Введите объем напитка: ";
    float volume;
    cin>>volume;
    setVolume(volume);
    cout<<"Введите цену напитка: ";
    float price;
    cin>>price;
    setPrice(price);
}

void drink::output() {
    cout<<"Вид напитка: "<< getType() << " Объем напитка: " << getVolume() << " Цена напитка: " << getPrice() << endl;
    if (drink_type == "coffee") {
        Coffee cof = Coffee();
        cof.cofOutput();
    }
}

