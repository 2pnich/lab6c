#ifndef LAB_2_2_PIZZA_H
#define LAB_2_2_PIZZA_H

#include "Dish.h"

using namespace std;

class pizza: public Dish {
public:
    float pizza_price;
    float pizza_diameter;
    pizza();
    ~pizza();
    void input();
    void output();
};

#endif //LAB_2_2_PIZZA_H
