#include <iostream>
#include "Display.h"
using namespace std;

Display::Display(int number, int price, int year):Equipment(number, price), year(year){}

void Display::print(){
    cout<<"Display:"<<endl;
    cout<<" Number"<<getNumber()<<endl;
    cout<<" Price"<<getPrice()<<endl;
    cout<<" Year"<<year<<endl;
}

