//
// Created by zach on 10/18/17.
//

#include "rotation.h"

rotation::rotation(int numberOfSections) {
    for(int i = 0;i<numberOfSections;i++) {
        this->rotationSums->push_back(2);//2 seats per section per rotation
    }
}

int rotation::getNextSection() {//returns next section to be seated
    for(int i = 0;i<rotationSums->size();i++) {
        if(rotationSums->at(i) > 0) {
            return i;
        }
    }
}

void rotation::setNextRotation(int sectionSeated) {//resets the rotation
    for(int i = 0;i<rotationSums->size();i++) {
        this->rotationSums->at(i) += 2;//is a section was set more than 2 times, you remove
                                       //however many extra times they were set from the next rotation
    }
}

bool rotation::isFollowingRotation(int sectionSeated) {//checks sections in order for which is open
    for(int i = 0;i<rotationSums->size();i++) {        //and if the first open section is seated
        if((this->rotationSums->at(i) > 0) && (sectionSeated == (i+1))) {
            return true;
        }

    }
    return false;
}