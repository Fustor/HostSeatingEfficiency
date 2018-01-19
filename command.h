//
// Created by zach on 10/18/17.
//

#ifndef HOSTSEATINGEFFICENCY_COMMAND_H
#define HOSTSEATINGEFFICENCY_COMMAND_H

#include <vector>
#include "restaurant.h"
#include "command.h"
#include <iostream>
using namespace std;
class command {
private:
    restaurant *currRest;
public:
    command(restaurant*);
    int getOrder();
    void seatTable();
    void unseatTable();
    void findEfficiency();
    void exit();
};


#endif //HOSTSEATINGEFFICENCY_COMMAND_H
