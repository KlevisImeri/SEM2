#ifndef EQUIPMENT_H
#define EQUIPMENT_H

class Equipment{
    int number;
    int price;
public:
    Equipment(int number, int price):number(number),price(price){}
    int getNumber(){return number;}
    int getPrice(){return price;}
    virtual void print()=0;
};

#endif