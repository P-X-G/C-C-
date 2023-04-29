/*
* File Name: Bai2.cpp
* Author: Giao Pham
* Date: 23/04/2023
* Description: This file contains all the functions/methods for rectangle
*/

# include "Bai2.h"

Rectangle::Rectangle(uint8_t length, uint8_t width){
    this->Length = length;
    this->Width = width;
}

/*
* Class: Rectangle
* Function: getLength
* Description: This function use for getting length of rectangle
* Input:
*   Don't have input parameters
* Output:
*   return: length of rectangle
*/
uint8_t Rectangle::getLenghth(){
    return this->Length;
}

/*
* Class: Rectangle
* Function: getWidth
* Description: This function use for getting width of rectangle
* Input:
*   Don't have input parameters
* Output:
*   return: width of rectangle
*/
uint8_t Rectangle::getWidth(){
    return this->Width;
}

/*
* Class: Rectangle
* Function: Perimeter
* Description: This function use for getting perimeter of rectangle
* Input:
*   Don't have input parameters
* Output:
*   return: perimeter of rectangle
*/
uint8_t Rectangle::Perimeter(){
    return (Length + Width) * 2;
}

/*
* Class: Rectangle
* Function: Area
* Description: This function use for getting area of rectangle
* Input:
*   Don't have input parameters
* Output:
*   return: area of rectangle
*/
uint8_t Rectangle::Area(){
    return Length * Width;
}

/*
* Class: Rectangle
* Function: diagonalLine
* Description: This function use for getting diagonal line distance of rectangle
* Input:
*   Don't have input parameters
* Output:
*   return: diagonal line distance of rectangle
*/
double Rectangle::diagonalLine(){
    return sqrt(pow(Length,2) + pow(Width,2));
}

/*
* Class: Rectangle
* Function: checkSquare
* Description: This function use for checking if it is a square or not
* Input:
*   Don't have input parameters
* Output:
*   return: None
*/
void Rectangle::checkSquare(){
    if (this->Length == this->Width){
        printf("This is a Square \n");
    }else{
        printf("This is a Rectangle\n");
    }
}