/*
author: Las
date: 2026-04-23
file: LasApplication.cpp
version: 1.0
*/
 
#include <iostream>
#include <vector>
#include <string>

// -------------------- Project --------------------
class Project {
private:
    int id;
    std::string name;

public:
    Project(int id, const std::string& name)
        : id(id), name(name) {}

    int getId() const { return id; }
    std::string getName() const { return name; }
};

// -------------------- Developer --------------------
class Developer {
private:
    int id;
    std::string name;
    std::vector<Project> projects;  // one-to-many relationship

public:
    Developer(int id, const std::string& name)
        : id(id), name(name) {}

    void addProject(const Project& project) {
        projects.push_back(project);
    }

    int getId() const { return id; }
    std::string getName() const { return name; }

    const std::vector<Project>& getProjects() const {
        return projects;
    }
};

// -------------------- Main --------------------
int main() {
    // Create developers
    Developer dev1(1, "Alice");
    Developer dev2(2, "Bob");

    // Create projects
    Project p1(101, "AI System");
    Project p2(102, "Web API");
    Project p3(103, "Mobile App");

    // Assign projects
    dev1.addProject(p1);
    dev1.addProject(p2);

    dev2.addProject(p3);

    // Store developers in vector
    std::vector<Developer> developers;
    developers.push_back(dev1);
    developers.push_back(dev2);

    // Iterate developers and their projects
    for (const auto& dev : developers) {
        std::cout << "Developer: " << dev.getName() << "\n";

        for (const auto& proj : dev.getProjects()) {
            std::cout << "  Project: " << proj.getName() << "\n";
        }

        std::cout << std::endl;
    }

    return 0;
}