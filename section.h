//
// Created by zach on 9/28/17.
//

#ifndef HOSTSEATINGEFFICENCY_SECTION_H
#define HOSTSEATINGEFFICENCY_SECTION_H
#include <vector>
using namespace std;

class section {
private:
    vector<int> sixTops;
    vector<int> fourTops;
    vector<int> twoTops;
public:
    section();
    section(int,int,int);
    // ~section();
    void getTotalTableAmounts();
    void seatTable(vector<int>,int);
    void setTableNumber(int);
    void unseatTable(vector<int>,int);
    int getTableSize(vector<int>,int);
    void checkEff();

};


#endif //HOSTSEATINGEFFICENCY_SECTION_H
