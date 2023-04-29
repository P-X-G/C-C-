/*
* File Name: Bai5.cpp
* Author: Giao Pham
* Date: 23/04/2023
* Description: This file contains all the functions/methods for person
*/

#include "Bai5.h"

Person::Person(string name, uint8_t age, string address){
    this->name = name;
    this->age = age;
    this->address = address;
}

/*
* Class: Person
* Function: getName
* Description: This function use for getting name of person
* Input:
*   Don't have input parameters
* Output:
*   return: name of person
*/
string Person::getName(){
    return this->address;
}

/*
* Class: Person
* Function: getAge
* Description: This function use for getting age of person
* Input:
*   Don't have input parameters
* Output:
*   return: age of person
*/
uint8_t Person::getAge(){
    return this->age;
}

/*
* Class: Person
* Function: getAddress
* Description: This function use for getting address of person
* Input:
*   Don't have input parameters
* Output:
*   return: address of person
*/
string Person::getAddress(){
    return this->address;
}

/*
* Class: Person
* Function: displayInformation
* Description: This function use to display information of person
* Input:
*   Don't have input parameters
* Output:
*   return: None
*/
void Person::displayInformation(){
    printf("Name: %s\n", name.c_str());
    printf("Age: %d\n", age);
    printf("Address: %s\n", address.c_str());
}