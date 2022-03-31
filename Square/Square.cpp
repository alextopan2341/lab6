//
// Created by Alex on 3/23/2022.
//

#include "Square.h"
#include <iostream>
#include <cmath>
using namespace std;
Square::Square(){
    this->id = 0;
    this-> x1 = 0.0;
    this-> y1 = 0.0;
    this-> x2 = 0.0;
    this-> y2 = 0.0;

}
Square::Square(const Square &sqr) {
    this->id = sqr.id;
    this->x1 =sqr.x1;
    this->y1 =sqr.y1;
    this->x2 =sqr.x2;
    this->y2 =sqr.y2;
}

Square::Square(int id,float x1, float y1, float x2, float y2) {
    this->id = id;
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
}

float Square::diagonal() {
    return sqrt((pow(x2-x1,2) + pow(y2-y1,2)));
}

std::ostream &operator<<(ostream &os, const Square &sqr) {
    os<<sqr.id<<" "<<sqr.x1<<" "<<sqr.y1<<" "<<sqr.x2<<" "<<sqr.y2;
    return os;
}

Square &Square::operator=(const Square &sqr) {
    this->id = sqr.id;
    this->x1 = sqr.x1;
    this->y1 = sqr.y1;
    this->x2 = sqr.x2;
    this->y2 = sqr.y2;
    return *this;
}

bool Square::operator==(const Square &sqr) {
    return (this->x1 == sqr.x1) && (this->y1 == sqr.y1) && (this->x2 == sqr.x2) && (this->y2 == sqr.y2);
}

float Square::getId() {
    return this->id;
}

float Square::get_x1() {
    return x1;
}

void Square::setX1(float x1) {
    Square::x1 = x1;
}

float Square::get_y1(){
    return y1;
}

void Square::setY1(float y1) {
    Square::y1 = y1;
}


float Square::get_x2() {
    return x2;
}

void Square::setX2(float x2) {
    Square::x2 = x2;
}

float Square::get_y2(){
    return y2;
}

void Square::setY2(float y2) {
    Square::y2 = y2;
}





