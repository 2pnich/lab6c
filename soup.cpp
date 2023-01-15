#include <iostream>
#include "soup.h"

using namespace std;

soup::soup() {
    this->setType("type");
    this->setPrice(0);
}

soup::~soup() = default;

void soup::input() {
    cout<<"Введите вид суп: ";
    string type;
    cin>>type;
    setType(type);
    cout<<"Введите цену супа: ";
    float price;
    cin>>price;
    setPrice(price);
}

void soup::output() {
    cout<<"Вид супа: "<< getType() << " Цена супа: " << getPrice() << endl;
}

