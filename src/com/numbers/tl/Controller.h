//
// Created by fersolano on 5/23/2021.
//

#ifndef TAREA_2_CONTROLLER_H
#define TAREA_2_CONTROLLER_H

#include "../bl/Business.h"

class Controller{
    public:
        Controller();
        void init(int length);
        int getLength();
        void setNumber(double number);
        double average();
        double min();
        double max();
    private:
        Business* bl;
};

#endif //TAREA_2_CONTROLLER_H
