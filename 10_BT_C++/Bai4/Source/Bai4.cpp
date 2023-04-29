/*
* File Name: Bai4.cpp
* Author: Giao Pham
* Date: 23/04/2023
* Description: This file contains all the functions/methods for animal
*/

#include "Bai4.h"

Animal::Animal(string name, uint8_t age, uint8_t weight, uint8_t height){
    this->NAME = name;
    this->AGE = age;
    this->WEIGHT = weight;
    this->HEIGHT = height;
}

/*
* Class: Animal
* Function: getName
* Description: This function use for getting name of animal
* Input:
*   Don't have input parameters
* Output:
*   return: name of animal
*/
string Animal::getName(){
    return this->NAME;
}

/*
* Class: Animal
* Function: getAge
* Description: This function use for getting age of animal
* Input:
*   Don't have input parameters
* Output:
*   return: age of animal
*/
uint8_t Animal::getAge(){
    return this->AGE; 
}

/*
* Class: Animal
* Function: getWeight
* Description: This function use for getting weight of animal
* Input:
*   Don't have input parameters
* Output:
*   return: weight of animal
*/
uint8_t Animal::getWeight(){
    return this->WEIGHT;
}

/*
* Class: Animal
* Function: BMI
* Description: This function use for getting BMI of animal
* Input:
*   Don't have input parameters
* Output:
*   return: BMI of animal
*/
float Animal::BMI(){
    return WEIGHT / (pow((HEIGHT),2));
}


Compare::Compare(Animal animalA, Animal animalB){
    this->animalA = animalA;
    this->animalB = animalB;
}

/*
* Class: Compare
* Function: compareAge
* Description: This function use to compare age of animals
* Input:
*   Don't have input parameters
* Output:
*   return: None
*/
void Compare::compareAge(){
    if (animalA.getAge() == animalB.getAge()){
        printf("%s is the same age as %s\n",animalA.getName().c_str(),animalB.getName().c_str());
    }else if (animalA.getAge() > animalB.getAge()){
        printf("%s is older than %s\n",animalA.getName().c_str(),animalB.getName().c_str());
    }else{
        printf("%s is younger than %s\n",animalA.getName().c_str(),animalB.getName().c_str());
    }
}

/*
* Class: Compare
* Function: compareWeight
* Description: This function use to compare weight of animals
* Input:
*   Don't have input parameters
* Output:
*   return: None
*/
void Compare::compareWeight(){
    if (animalA.getWeight() == animalB.getWeight()){
        printf("%s is the same weight as %s\n",animalA.getName().c_str(),animalB.getName().c_str());
    }else if (animalA.getWeight() > animalB.getWeight()){
        printf("%s have more weight than %s\n",animalA.getName().c_str(),animalB.getName().c_str());
    }else{
        printf("%s have less weight than %s\n",animalA.getName().c_str(),animalB.getName().c_str());
    }
}