//
// Created by zach on 9/28/17.
//

#ifndef HOSTSEATINGEFFICENCY_RESTAURANT_H
#define HOSTSEATINGEFFICENCY_RESTAURANT_H
#include <vector>
#include "section.h"
using namespace std;
class restaurant {
private:
    vector<section> sections;
    int totalSeats;
    int goodSeats;
    int nextSection;
public:
    restaurant();
    vector<section> getAllSections();
    section getSection();
    int getTotalSeats();
    int getGoodSeats();
    int getNextSection();
    void setSections();
    void setNextSection();
    int getEfficiency();



};


#endif //HOSTSEATINGEFFICENCY_RESTAURANT_H
