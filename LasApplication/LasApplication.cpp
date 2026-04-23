/*
author: Las
date: 2026-04-23
file: LasApplication.cpp
version: 1.0
*/

#include <iostream>
#include <iomanip>
#include "Person.h"
using namespace std;
 

int main()
{
	Person person;

	person.setAge(30);
	person.setHeight(175.5f);
	person.setWeight(80.f);

	cout << "Person Information:" << endl;
	cout << "weight: " << person.getWeight() << " kg" << endl;

}