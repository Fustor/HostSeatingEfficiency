//
// Created by zach on 10/18/17.
//

#include "command.h"

command::command(restaurant *thisRest) {
    currRest = thisRest;
}

void command::seatTable() {
    cout << "What section are you seating?" << endl;
    int section;
    cin >> section;
    cout << "How many people are you seating?" << endl;
    int peopleNum;
    cin >> peopleNum;
    cout << "What size table are you seating?" << end;
    int tableSize;
    cin >> tableSize;
    currRest->seatTable(section,peopleNum,tableSize);
}