//
// Created by zach on 10/18/17.
//

#ifndef HOSTSEATINGEFFICENCY_COMMAND_H
#define HOSTSEATINGEFFICENCY_COMMAND_H

#include <vector>
#include "command.h"
#include <iostream>
using namespace std;
class command {
private:
public:
    command();
    int getOrder();
    void seatTable();
    void unseatTable();
    void findEfficiency();
};


#endif //HOSTSEATINGEFFICENCY_COMMAND_H
