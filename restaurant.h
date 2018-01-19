//
// Created by zach on 9/28/17.
//

#ifndef HOSTSEATINGEFFICENCY_RESTAURANT_H
#define HOSTSEATINGEFFICENCY_RESTAURANT_H
#include <vector>
#include "section.h"
#include <iostream>
using namespace std;
class restaurant {
private:
    vector<section*>* sections;
    int totalSeats;
    int goodSeats;
    int nextSection;
    vector<int>* currentRotation;
    int amountOfSections;
public:
    restaurant();
    vector<section> getAllSections();
    int getTotalSections();
    section* getSection(int);
    int getTotalSeats();
    int getGoodSeats();
    int getNextSection();
    void seatTable(int,int,int);
    void unseatTable(int,int,int);
    void setSections();
    void setNextSection();
    int getEfficiency();



};


#endif //HOSTSEATINGEFFICENCY_RESTAURANT_H
