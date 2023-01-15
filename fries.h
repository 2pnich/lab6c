#ifndef LAB_2_2_FRIES_H
#define LAB_2_2_FRIES_H

#include "Dish.h"

using namespace std;

class fries: public Dish {
public:
    float fries_quantity;
    fries();
    ~fries();
    void input();
    void output();
};

#endif //LAB_2_2_FRIES_H
