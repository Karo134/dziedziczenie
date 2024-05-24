#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <string>
#include <iostream>
#include "Shape.h"

class Triangle : public Shape {
private:
	double szerokosc;
	double wysokosc;
	
public:
	Triangle(double s, double w) : szerokosc(s), wysokosc(w) {}

	double area() const override {
		return 0.5 * szerokosc * wysokosc;

	}
	std::string info() const override {
		std::cout << "Dane do obliczenia pola trojkata:" << std::endl;
		std::cout << "szerokosc:" << szerokosc << "wysokosc" << wysokosc << std::endl;

	}
};
#endif // !TRIANGLE_H
