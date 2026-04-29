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
   

public:
    Developer(int id, const string& name)
        : id(id), name(name) {
     
    }

    ~Developer() {
 
	}
    void addProject(const Project& project) {
        projects.push_back(project);
    }

    int getId() const { return id; }
    string getName() const { return name; }

   // save to ostream
   friend ostream& operator<<(ostream& os, const Developer& dev) {
       os << "Developer ID: " << dev.id << ", Name: " << dev.name << ", Projects: ";
      for (const auto& proj : dev.projects) {
          os << proj.name << " ";
      }
      return os;
	}
};