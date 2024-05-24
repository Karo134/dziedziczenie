#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include <string>
#include "Shape.h"

class Rectangle : public Shape {
private:
	double szerokosc;
	double wysokosc;

public:
	Rectangle(double s, double w) : szerokosc(s), wysokosc(w) {}

	double area() const override {
		return szerokosc * wysokosc;
	}
	std::string info() const override {
		std::cout << "Dane do obliczenia pola prostokata:" << std::endl;
		std::cout << "szerokosc = " << szerokosc << "wysokosc" << wysokosc << std::endl;

	}

};

#endif // !RECTANGLE_H
