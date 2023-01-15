#ifndef LAB_2_2_DRINK_H
#define LAB_2_2_DRINK_H

#include "../Dish.h"

using namespace std;

class drink: public Dish{
protected:
    string cofType;
    string cofSugar;
public:
    string drink_type;
    drink();
    drink(string type, string sugar);
    ~drink();
    void input();
    void output();
};
#endif //LAB_2_2_DRINK_H
