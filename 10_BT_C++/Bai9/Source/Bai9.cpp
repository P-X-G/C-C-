/*
* File Name: Bai9.cpp
* Author: Giao Pham
* Date: 25/04/2023
* Description: This file contains all the functions/methods for Car
*/

#include "Bai9.h"

Car::Car(string color, string engine, uint16_t kilometer){
    this->color = color;
    this->engine = engine;
    this->kilometer = kilometer;
}

/*
* Class: Car
* Function: maintenancePrice
* Description: This function is used to determine maintenance cost of car
* Input:
*   Dont have input parameters
* Output:
*   return: None
*/
void Car::maintenancePrice(){
    uint16_t price = this->kilometer * 0.13;;
    printf("Maintenance Price: %d USD\n",price);
}

/*
* Class: Car
* Function: checkKilometer
* Description: This function use for checking kilometers of car
* Input:
*   Dont have input parameters
* Output:
*   return: None
*/
void Car::checkKilometer(){
    printf("Number of kilometers traveled: %d\n",this->kilometer);
}

/*
* Class: Car
* Function: Information
* Description: This function is used to display information of car
* Input:
*   Dont have input parameters
* Output:
*   return: None
*/
void Car::Information(){
    printf("Information\n");
    printf("Color: %s\n",this->color.c_str());
    printf("Engine: %s\n",this->engine.c_str());
    printf("Kilometer: %d\n",this->kilometer);
}