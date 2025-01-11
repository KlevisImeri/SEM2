#include  "Printer.h"
#include <iostream>
using namespace std;

Printer::Printer(int number, int price, int speed):Equipment(number, price), speed(speed){}

void Printer::print(){
    cout<<"Printer:"<<endl;
    cout<<" Number"<<getNumber()<<endl;
    cout<<" Price"<<getPrice()<<endl;
    cout<<" Speed"<<speed<<endl;
}