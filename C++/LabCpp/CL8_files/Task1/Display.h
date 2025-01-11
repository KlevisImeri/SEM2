#ifndef DISPLAY_H
#define DISPLAY_H

#include "Equipment.h"


class Display:public Equipment{
    int year;
public:
    Display(int number, int price, int year);
    void print();
};

#endif