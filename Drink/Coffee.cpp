#include <iostream>
#include "Coffee.h"

using namespace std;


Coffee::Coffee() {
    drink(cofType, cofSugar);
}

void Coffee::cofInput() {
    cout<<"Выберите вид кофе: ";
    cin>>cofType;
    cout<<"Нужен сахар?1/0: ";
    cin>>cofSugar;
}

void Coffee::cofOutput() {
    cout<<"Вид кофе: "<< cofType << " Сахар: " << cofSugar  << endl;
}

