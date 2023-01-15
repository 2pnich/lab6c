#include <iostream>
#include "fries.h"

using namespace std;

fries::fries() {
    this->setType("type");
    this->fries_quantity = 0;
    this->setPrice(0);
}

fries::~fries() = default;

void fries::input() {
    cout<<"Введите вид фри: ";
    string type;
    cin>>type;
    setType(type);
    cout<<"Введите цену фри: ";
    cin>>price;
    setPrice(price);
    cout<<"Введите количество фри: ";
    cin>>fries_quantity;

}

void fries::output() {
    cout<<"Вид фри: "<< getType() << " Количество: " << fries_quantity << " Цена фри: " << getPrice() << endl;
}

