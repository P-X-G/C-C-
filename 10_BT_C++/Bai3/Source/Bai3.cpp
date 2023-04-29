/*
* File Name: Bai3.cpp
* Author: Giao Pham
* Date: 23/04/2023
* Description: This file contains all the functions/methods for circle
*/

#include "Bai3.h"

Circle::Circle(uint8_t r){
    this->R = r; 
}

/*
* Class: Circle
* Function: getRadius
* Description: This function use for getting radius of circle
* Input:
*   Don't have input parameters
* Output:
*   return: radius of circle
*/
uint8_t Circle::getRadius(){
    return this->R;
}

/*
* Class: Circle
* Function: Perimeter
* Description: This function use for getting perimeter of circle
* Input:
*   Don't have input parameters
* Output:
*   return: perimeter of circle
*/
double Circle::Perimeter(){
    return (2 * R) * PI;
}

/*
* Class: Circle
* Function: Area
* Description: This function use for getting area of circle
* Input:
*   Don't have input parameters
* Output:
*   return: area of circle
*/
double Circle::Area(){
    return PI * pow(R,2);
}

