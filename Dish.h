#ifndef LAB_2_2_DISH_H
#define LAB_2_2_DISH_H
#include <iostream>
using namespace std;

//АБСТРАКТНЫЙ КЛАСС КЛАСС
class Dish {
private:
    string type;
    float weight;
    float volume;

protected:
    float price;
public:
    virtual float getWeight();
    virtual float getPrice();
    virtual float getVolume();
    virtual string getType();

    virtual void setWeight(float weight);
    virtual void setPrice(float price);
    virtual void setVolume(float volume);
    virtual void setType(string type);

    virtual void output();

};


#endif //LAB_2_2_DISH_H
