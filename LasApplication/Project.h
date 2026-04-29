#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Project {
private:

public:
    string name;
    int durationMonths;

    Project(const string& name, int duration)
        : name(name), durationMonths(duration) {}
};
