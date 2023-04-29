/*
* File Name: Bai8.h
* Author: Giao Pham
* Date: 23/04/2023
* Description: This file is a header file that contains all the prototypes for bank
*/

#ifndef __BAI8_H
#define __BAI8_H

#include <stdio.h>
#include <stdint.h>
#include <string>

using namespace std;

class Bank{
    private:
        uint8_t id;
        string name;
        double balance;
    public:
        Bank(uint8_t accountNumber, string name, double balance);
        double Withdraw();
        double Recharge();
        void checkBalance();
};

#endif