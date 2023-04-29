/*
* File Name: Bai6.cpp
* Author: Giao Pham
* Date: 23/04/2023
* Description: This file contains all the functions/methods for fraction
*/

#include "Bai6.h"

Fraction::Fraction(int8_t Numerator, int8_t Denominator){
    if (this->Numerator == 0){
        printf("The Denominator cannot be 0\n");
        return;
    }
    this->Numerator = Numerator;
    this->Denominator = Denominator;
}

/*
* Class: Fraction
* Function: getNumerator
* Description: This function use for getting numerator of fraction
* Input:
*   Dont have input parameters
* Output:
*   return: Numerator of fraction
*/
int8_t Fraction::getNumerator(){
    return this->Numerator;
}

/*
* Class: Fraction
* Function: getDenominator
* Description: This function use for getting denominator of fraction
* Input:
*   Dont have input parameters
* Output:
*   return: Denominator of fraction
*/
int8_t Fraction::getDenominator(){
    return this->Denominator;
}


Calculate::Calculate(Fraction SoA, Fraction SoB){
    this->SoA = SoA;
    this->SoB = SoB;
}

/*
* Class: Calculate
* Function: Sum
* Description: This function is used to sum fractions
* Input:
*   Dont have input parameters
* Output:
*   return: None
*/
void Calculate::Sum(){
    int Tu, Mau;
    Tu = this->SoA.getNumerator() * SoB.getDenominator() + SoB.getNumerator() * SoA.getDenominator();
    Mau = this->SoA.getDenominator() * this->SoB.getDenominator();
    printf("Summation: %d/%d + %d/%d = %d/%d = %f\n", this->SoA.getNumerator(),this->SoA.getDenominator(),this->SoB.getNumerator(),this->SoB.getDenominator(),Tu,Mau,(float)Tu/Mau);
}

/*
* Class: Calculate
* Function: Sub
* Description: This function is used to subtrac fractions
* Input:
*   Dont have input parameters
* Output:
*   return: None
*/
void Calculate::Sub(){
    int Tu, Mau;
    Tu = this->SoA.getNumerator() * SoB.getDenominator() - SoB.getNumerator() * SoA.getDenominator();
    Mau = this->SoA.getDenominator() * this->SoB.getDenominator();
    printf("Subtraction: %d/%d - %d/%d = %d/%d = %f\n", this->SoA.getNumerator(),this->SoA.getDenominator(),this->SoB.getNumerator(),this->SoB.getDenominator(),Tu,Mau,(float)Tu/Mau);
}

/*
* Class: Calculate
* Function: Multip
* Description: This function is used to multiply fractions
* Input:
*   Dont have input parameters
* Output:
*   return: None
*/
void Calculate::Multip(){
    int Tu, Mau;
    Tu = this->SoA.getNumerator() * SoB.getNumerator();
    Mau = this->SoA.getDenominator() * this->SoB.getDenominator();
    printf("Multiplication: %d/%d * %d/%d = %d/%d = %f\n", this->SoA.getNumerator(),this->SoA.getDenominator(),this->SoB.getNumerator(),this->SoB.getDenominator(),Tu,Mau,(float)Tu/Mau);
}

/*
* Class: Calculate
* Function: Divi
* Description: This function is used to divide fractions
* Input:
*   Dont have input parameters
* Output:
*   return: None
*/
void Calculate::Divi(){
    int Tu, Mau;
    Tu = this->SoA.getNumerator() * SoB.getDenominator();
    Mau = this->SoA.getDenominator() * this->SoB.getNumerator();
    printf("Division: %d/%d / %d/%d = %d/%d = %f\n", this->SoA.getNumerator(),this->SoA.getDenominator(),this->SoB.getNumerator(),this->SoB.getDenominator(),Tu,Mau,(float)Tu/Mau);
}