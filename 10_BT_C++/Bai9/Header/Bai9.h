/*
* File Name: Bai9.h
* Author: Giao Pham
* Date: 25/04/2023
* Description: This file is a header file that contains all the prototypes for Car
*/

#ifndef __BAI9_H
#define __BAI9_H

#include <stdio.h>
#include <stdint.h>
#include <string>

using namespace std;

class Car{
    private:
        string color;
        string engine;
        uint16_t kilometer;
    public:
        Car(string color, string engine, uint16_t kilometer);
        void maintenancePrice();
        void checkKilometer();
        void Information();
};

#endif