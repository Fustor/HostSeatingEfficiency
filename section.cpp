//
// Created by zach on 9/28/17.
//

#include "section.h"

section::section(int a, int b, int c) {
    twoTops = new vector<int>;
    fourTops = new vector<int>;
    sixTops = new vector<int>;
    for(int i = 0;i<a;i++) {
        this->twoTops->push_back(0);
    }

    for(int i = 0;i<b;i++) {
        this->fourTops->push_back(0);
    }
    for(int i = 0;i<c;i++) {
        this->sixTops->push_back(0);
    }
}
void section::printTables() {
    cout << endl << "Two Tops: ";
    for(int i = 0;i<this->twoTops->size();i++) {
        cout << this->twoTops->at(i) << " ";
    }
    cout << endl << "Four Tops: ";
    for(int i = 0;i<this->fourTops->size();i++) {
        cout << this->fourTops->at(i) << " ";
    }
    cout << endl << "Six Tops: ";
    for(int i = 0;i<this->sixTops->size();i++) {
        cout << this->sixTops->at(i) << " ";
    }
    cout << endl;
}
void section::seatTable(vector<int> &a,int people) {
    if(&a == (this->twoTops) && people > 2) {
        cout << "Table not big enough for party. Try again." << endl;

    }
    else if(&a == (this->fourTops) && people > 4) {
        cout << "Table not big enough for party. Try again." << endl;

    }
    else if(&a == (this->sixTops) && people > 6) {
        cout << "Table not big enough for party. Try again." << endl;

    }
    else {
        for(int i = 0;i<a.size();i++) {
            if (a.at(i) == 0) {
                a.at(i) = people;
                break;
            }
        }


    }
}
vector<int>* section::getTwoTops() {
    return this->twoTops;
}
vector<int>* section::getFourTops() {
    return this->fourTops;
}
vector<int>* section::getSixTops() {
    return this->sixTops;
}