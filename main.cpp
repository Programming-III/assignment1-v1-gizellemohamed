#include<iostream>
#include "animal.h"
#include "enclosure.h"
#include"visitor.h"
#include "animal.h"
#include "bird.h"
#include "mammal.h"
#include "reptile.h"
using namespace std ;
animal::animal(){
     age=0;
     name="";
      bool isHungry=false;
}
animal::animal(string name,int age){
    this->name=name;
     this->age=age;
    
}
    string animal::getname(){
        return name;
    }
void animal::setname(string n){
    name=n;
}
int animal::getage(){
    return age;
}
  void animal::setage(int a){
        age=a;
    }
   animal:: ~ animal(){

    }
    void animal::display(){
cout<<name<<endl;
cout<<age<<endl;
    }
    void animal::feed(){
        
    
        }

   enclosure::enclosure():animal(){
    animals=new animal[];
    currentcount=0;
    capacity=0;
   }
int enclosure::getcurentcount(){
    return currentcount;
}
string enclosure::getname(){
    return name;
}
int  enclosure::getcapacity(){
    return capacity;
}
void enclosure::setcurrentcount(int c){
    cuurentcount=c;
}

int main(){
    return 0;}
