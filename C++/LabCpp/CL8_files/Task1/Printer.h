#ifndef PRINTER_H
#define PRINTER_H
#include "Equipment.h"

class Printer: public Equipment{
    int speed;
public:
    Printer(int number, int price, int speed);
    void print();
};

#endif