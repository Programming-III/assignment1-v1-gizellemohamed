#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>
using namespace std ;
class animal {
    private:
    string name;
    int age;
    bool isHungry;
    public:
    animal();
    animal(string name,int age);
    string getname();
    void setname(string n);
    int getage();
    void setage(int a);
    ~ animal();
    void display();
    void feed();


};


#endif
