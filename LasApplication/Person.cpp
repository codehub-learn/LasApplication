/*
author: Las
date: 2026-04-23
file: Person.cpp
*/


#include "Person.h"
#include <iostream>

Person::Person()
{
	age = 0;
	height = 0.0f;
	weight = 0.0f;
}

void Person::setAge(int a)
{
	age = a;
}

void Person::setHeight(float h)
{
	height = h;
}

void Person::setWeight(float w)
{
	weight = w;
}

int Person::getAge()
{
	return age;
}

float Person::getHeight()
{
	return height;
}

float Person::getWeight()
{
	return weight;
}

void Person::print()
{
	std::cout << "Age: " << age << std::endl;
	std::cout << "Height: " << height << std::endl;
	std::cout << "Weight: " << weight << std::endl;
}

