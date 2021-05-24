//
// Created by fersolano on 5/23/2021.
//

#include "Controller.h"

Controller::Controller(){
    bl = new Business();
}

void Controller::init(int length) {
    bl->initArray(length);
}

void Controller::setNumber(double number) {
    bl->setNumber(number);
}

int Controller::getLength() {
   return bl->getLength();
}

double Controller::average() {
    return bl->average();
}

double Controller::min() {
    return bl->min();
}

double Controller::max() {
    return bl->max();
}
