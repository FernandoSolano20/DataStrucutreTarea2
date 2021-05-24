//
// Created by fersolano on 5/23/2021.
//

#include <cmath>
#include "Business.h"

Business::Business(){
    length = 0;
}

void Business::initArray(int counter) {
    length = counter;
    numbers = new double[length];
}

void Business::setNumber(double number) {
    numbers[index] = number;
    index++;
}

int Business::getLength() {
   return length;
}

double Business::average() {
    double sum = 0;
    for (int i = 0; i < length; i++) {
        sum += numbers[i];
    }

    return round( (sum / length) * 100.0 ) / 100.0;
}

double Business::min() {
    double minValue = numbers[0];
    for (int i = 1; i < length; i++) {
        if(minValue > numbers[i]) {
            minValue = numbers[i];
        }
    }
    return round( minValue * 100.0 ) / 100.0;
}

double Business::max() {
    double maxValue = numbers[0];
    for (int i = 1; i < length; i++) {
        if(maxValue < numbers[i]) {
            maxValue = numbers[i];
        }
    }
    return round( maxValue * 100.0 ) / 100.0;
}
