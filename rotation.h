//
// Created by zach on 10/18/17.
//

#ifndef HOSTSEATINGEFFICENCY_ROTATION_H
#define HOSTSEATINGEFFICENCY_ROTATION_H

#include <vector>
#include "rotation.h"
#include <iostream>
#include "section.h"
using namespace std;
class rotation {
private:
    vector<int>* rotationSums;
public:
    rotation(int);
    int getNextSection();
    bool isFollowingRotation(int);
    void setNextRotation(int);


};


#endif //HOSTSEATINGEFFICENCY_ROTATION_H
