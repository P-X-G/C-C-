/*
* File Name: Bai4.h
* Author: Giao Pham
* Date: 23/04/2023
* Description: This file is a header file that contains all the prototypes for animal
*/

#ifndef __BAI4_H
#define __BAI4_H

#include <stdio.h>
#include <stdint.h>
#include <string>
#include <math.h>

using namespace std;

class Animal{
    private:
        string NAME;
        uint8_t AGE;
        uint8_t WEIGHT;
        uint8_t HEIGHT;
    public:
        Animal(string name = " ", uint8_t age = 0, uint8_t weight = 0, uint8_t height = 0);
        string getName();
        uint8_t getAge();
        uint8_t getWeight();
        float BMI();
};

class Compare{
    private:
        Animal animalA;
        Animal animalB;
    public:
        Compare(Animal animalA, Animal animalB);
        void compareAge();
        void compareWeight();
};

#endif