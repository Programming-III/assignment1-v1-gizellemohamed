#ifndef ENCLOSURE_H
#define ENCLOSUREL_H
#include<iostream>
#include "animal.h"
using namespace std ;
class enclosure : public animal {
private:
animal*animals;
int currentcount;
int capacity;
public:
enclosure();
enclosure(int curentcount, string name,int capacity ,int age,bool isHungr);
int getcurentcount();
string getname();
int getcapacity();
void setcurrentcount(int c);
void setcapacity(int ca);
void setname(string n);
void animal(animal*a);
void displayAnimals();
~ enclosure();



};






#endif
