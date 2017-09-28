//
// Created by zach on 9/28/17.
//

#include "restaurant.h"
#include <iostream>
using namespace std;
restaurant::restaurant(int x) {
    totalSections = x;
    setSectionInfo();
}
void restaurant::setSection(int a, int b, int c) {
        section temp(a,b,c);
        /*cout << "sizes: ";
        temp.getTotalTableAmounts();   making sure it works
        cout << endl;
         */
        sections.push_back(temp);
}
int restaurant::getTotalSections() {
    return totalSections;
}
void restaurant::setSectionInfo() {
    for(int i = 1;i<=getTotalSections();i++) {
        int sixTotal;
        int fourTotal;
        int twoTotal;
        cout << "How many six tops in section " << i << "?" << endl;
        cin >> sixTotal;
        cout << "How many four tops in section " << i << "?" << endl;
        cin >> fourTotal;
        cout <<"How many two tops in section " << i << "?" << endl;
        cin >> twoTotal;
        setSection(sixTotal,fourTotal,twoTotal);
    }
}
int restaurant::getCommand() {
    cout << "Commands: Enter corresponding number " << endl;
    cout << "1: Seat Table" << endl;
    cout << "2: Unseat Table" << endl;
    cout << "3: Calculate Efficency" << endl;
    cout << "4: Terminate Program" << endl;
    int command;
    cin >> command;
    return command;
}