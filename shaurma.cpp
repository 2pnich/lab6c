#include <iostream>
#include "shaurma.h"

using namespace std;

shaurma::shaurma() {
    this->setType("type");
    this->setPrice(0);
    this->setWeight(0);
}

shaurma::~shaurma(){

};

void shaurma::input() {
    cout<<"Введите вид шаурмы: ";
    string type;
    cin>>type;
    setType(type);
    cout<<"Введите вес шаурмы: ";
    float weight;
    cin>>weight;
    setWeight(weight);
    cout<<"Введите цену шаурмы: ";
    float price;
    cin>>price;
    setPrice(price);
}

void shaurma::output() {
    cout<<"\nВид шаурмы: "<< getType() << " Вес шаурмы: " << getWeight() << " Цена шаурмы: " << getPrice() << endl;
}