//
// Created by zach on 9/28/17.
//

#ifndef HOSTSEATINGEFFICENCY_SECTION_H
#define HOSTSEATINGEFFICENCY_SECTION_H
#include <vector>
#include <iostream>
using namespace std;

class section {
private:
    vector<int>* twoTops;
    vector<int>* fourTops;
    vector<int>* sixTops;
public:
    section();
    section(int,int,int);
    vector<int>* getTwoTops();
    vector<int>* getFourTops();
    vector<int>* getSixTops();
    void setTwoTops();
    void setFourTops();
    void setSixTops();
    void seatTable(vector<int>&,int);
    void unseatTable(vector<int>&);
    void printTables();


};


#endif //HOSTSEATINGEFFICENCY_SECTION_H
