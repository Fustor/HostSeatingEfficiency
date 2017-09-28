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
    int totalSections;
    int goodSeats;
    int totalSeats;
    int nextSection;
public:
    restaurant();
    restaurant(int);
    // ~restaurant();
    int getCommand();
    void exeCommand(int);
    bool contProgram();
    void setSectionInfo();
    void setSection(int,int,int);
    void setNextSection();
    int getNextSection();
    int getTotalSections();


};


#endif //HOSTSEATINGEFFICENCY_RESTAURANT_H
