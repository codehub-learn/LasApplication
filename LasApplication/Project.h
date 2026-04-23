#pragma once
#include <string>
using namespace std;

class Project {
private:
    int id;
    string name;

public:
    Project(int id, const string& name)
        : id(id), name(name) {}

    int getId() const { return id; }
    string getName() const { return name; }
};
