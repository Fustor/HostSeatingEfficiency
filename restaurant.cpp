//
// Created by zach on 9/28/17.
//

#include "restaurant.h"

restaurant::restaurant() {//fills sections vector with sections container empty tables
    sections = new vector<section*>;
    cout << "How many sections are in this restauraunt?" << endl;
    int totalSections;
    cin >> totalSections;
    this->amountOfSections = totalSections;//
    for(int i = 0;i<totalSections;i++) {
        cout << "How many two tops in section " << i+1 << "?" << endl;
        int twoTops;
        cin >> twoTops;
        cout << "How many four tops in section " << i+1 << "?" << endl;
        int fourTops;
        cin >> fourTops;
        cout << "How many six tops in section " << i+1 << "?" << endl;
        int sixTops;
        cin >> sixTops;
        section *temp = new section(twoTops,fourTops,sixTops);//creates section with empty tables
        sections->push_back(temp);
    }
}
int restaurant::getTotalSections() {
    return amountOfSections;
}
section* restaurant::getSection(int a) {
    return sections->at(a-1);//user doesnt know arrays start at 0
}
void restaurant::seatTable(int sectionNum, int peopleAmount, int tableSize) {
    if(tableSize == 6) {
        this->sections->at(sectionNum-1)->seatTable(*(this->sections->at(sectionNum-1)->getSixTops()),peopleAmount);
    }
    else if(tableSize == 4) {
        this->sections->at(sectionNum-1)->seatTable(*(this->sections->at(sectionNum-1)->getFourTops()),peopleAmount);
    }
    else {
        this->sections->at(sectionNum-1)->seatTable(*(this->sections->at(sectionNum-1)->getTwoTops()),peopleAmount);
    }

}
void restaurant::unseatTable(int sectionNum, int peopleAmount, int tableSize) {
    if(tableSize == 6) {
        this->sections->at(sectionNum-1)->unseatTable(*(this->sections->at(sectionNum-1)->getSixTops()),peopleAmount);
    }
    else if(tableSize == 4) {
        this->sections->at(sectionNum-1)->unseatTable(*(this->sections->at(sectionNum-1)->getFourTops()),peopleAmount);
    }
    else {
        this->sections->at(sectionNum-1)->unseatTable(*(this->sections->at(sectionNum-1)->getTwoTops()),peopleAmount);
    }

}