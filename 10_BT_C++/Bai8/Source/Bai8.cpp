/*
* File Name: Bai8.cpp
* Author: Giao Pham
* Date: 23/04/2023
* Description: This file contains all the functions/methods for bank
*/

#include "Bai8.h"

Bank::Bank(uint8_t id, string name, double balance){
    this->id = id;
    this->name = name;
    this->balance = balance;
}

/*
* Class: Bank
* Function: Withdraw
* Description: This function is used to withdraw
* Input:
*   Dont have input parameters
* Output:
*   return: balance has changed
*/
double Bank::Withdraw(){
    float change;
    printf("Please enter the amount you want to withdraw:\n");
    scanf("%f",&change);
    if (change > balance){
        printf("Out of range\n");
        return 0;
    }
    this->balance -= change;
}

/*
* Class: Bank
* Function: Recharge
* Description: This function is used to recharge
* Input:
*   Dont have input parameters
* Output:
*   return: balance has changed 
*/
double Bank::Recharge(){
    float change;
    printf("Please enter the amount you want recharge:\n");
    scanf("%f",&change);
    this->balance += change;
}

/*
* Class: Bank
* Function: checkBalance
* Description: This function is used to check balance
* Input:
*   Dont have input parameters
* Output:
*   return: None 
*/
void Bank::checkBalance(){
    printf("The remaining balance: %.2lf",this->balance);
}