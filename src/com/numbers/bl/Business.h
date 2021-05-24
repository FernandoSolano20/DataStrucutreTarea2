//
// Created by fersolano on 5/23/2021.
//

#ifndef TAREA_2_BUSINESS_H
#define TAREA_2_BUSINESS_H

class Business{
    public:
        Business();
        void setNumber(double number);
        int getLength();
        void initArray(int counts);
        double average();
        double min();
        double max();
    private:
        double* numbers;
        int index = 0;
        int length = 0;
};


#endif //TAREA_2_BUSINESS_H
