#ifndef VISITOR_H
#define VISITOR_H
#include<iostream>
using namespace std ;
class visitor {
    private:
    string visitorName;
    int ticketsBought;
    public:
    visitor();
    visitor(string visitorName, int ticketsBought);
    ~visitor();
    void getvisitorName ();
    void getticketsBought();
    string setvisitorName(string v);
    int setticketsBought(int t);
};





#endif
