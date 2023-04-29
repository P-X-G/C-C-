/*
* File Name: main.cpp
* Author: Giao Pham
* Date: 23/04/2023
* Description: This is file for bank
*/

#include "Bai8.h"

int main(int argc, char const *argv[])
{
    Bank acc(123,"Nguyen",500.90);
    acc.Recharge();
    acc.Withdraw();
    acc.checkBalance();
    return 0;
}