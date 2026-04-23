/*
author: Las
date: 2026-04-23
file: Person.h
*/



#pragma once
class Person
{
private:
		int age;
		float height;
		float weight;
public:
	Person();
	void print();

	void setAge(int a);
	void setHeight(float h);
	void setWeight(float w);

	int getAge();
	float getHeight();
	float getWeight();

};

