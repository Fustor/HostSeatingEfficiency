//
// Created by zach on 9/28/17.
//

#include "section.h"
#include <iostream>
section::section(int a, int b, int c) { //called by restaurant.setSections
    for(int i = 0;i<a;i++) {            //each section has a,b,or c # of tables set to
        sixTops.push_back(0);           //value 0 (unseated)
    }
    for(int i = 0;i<b;i++) {
        fourTops.push_back(0);
    }
    for(int i = 0;i<c;i++) {
        twoTops.push_back(0);
    }
}
void section::getTotalTableAmounts() {
    cout << sixTops.size() << " " << fourTops.size() << " " << twoTops.size() << endl;
}