#pragma once
#include <string>
#include <vector>
#include "Project.h"
class Developer {
private:
    int id;
    string name;
    vector<Project> projects;  // one-to-many relationship

public:
    Developer(int id, const string& name)
        : id(id), name(name) {}

    void addProject(const Project& project) {
        projects.push_back(project);
    }

    int getId() const { return id; }
    string getName() const { return name; }

    const vector<Project>& getProjects() const {
        return projects;
    }
};