#include "Dish.h"


float Dish::getVolume() {
    return volume;
}

float Dish::getPrice() {
    return price;
}

string Dish::getType() {
    return type;
}

float Dish::getWeight() {
    return weight;
}

void Dish::setWeight(float weight) {
    this->weight = weight;
}

void Dish::setVolume(float volume) {
    this->volume = volume;
}

void Dish::setType(string type) {
    this->type = type;
}

void Dish::setPrice(float price) {
    this->price = price;
}

void Dish::output() {
    cout << "виртуальная ф-ия" << endl;
}

