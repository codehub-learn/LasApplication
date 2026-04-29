#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Project.h"
using namespace std;
class Developer {
private:
    int id;
    string name;
    vector<Project> projects;  // one-to-many relationship
    int* budget;

public:
    Developer(int id, const string& name)
        : id(id), name(name) {
        budget = new int[10];
    }

    ~Developer() {
        delete[] budget;
	}
    void addProject(const Project& project) {
        projects.push_back(project);
    }

    int getId() const { return id; }
    string getName() const { return name; }

   
};