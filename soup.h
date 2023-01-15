#ifndef LAB_2_2_SOUP_H
#define LAB_2_2_SOUP_H

#include "Dish.h"

using namespace std;
class soup: public Dish{
public:
    float soup_price;
    string soup_type;
    soup();
    ~soup();
    void input();
    void output();
};
#endif //LAB_2_2_SOUP_H
