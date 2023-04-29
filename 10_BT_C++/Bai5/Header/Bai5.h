/*
* File Name: Bai5.h
* Author: Giao Pham
* Date: 23/04/2023
* Description: This file is a header file that contains all the prototypes for person
*/

#ifndef __BAI5_H
#define __BAI5_H

#include <stdio.h>
#include <stdint.h>
#include <string>

using namespace std;

class Person{
    private:
        string name;
        uint8_t age;
        string address;
    public:
        Person(string name, uint8_t age, string address);
        string getName();
        uint8_t getAge();
        string getAddress();
        void displayInformation();
};


#endif