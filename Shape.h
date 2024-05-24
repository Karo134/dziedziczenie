#pragma once
#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include "Rectangle.h"
#include "Triangle.h"

class Shape {
public:
    virtual double area() const = 0;
    virtual std::string info() const = 0;

    virtual~Shape() {}

};
#endif // !SHAPE_H
