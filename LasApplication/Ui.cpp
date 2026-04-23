#include "Ui.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Project.h"
#include "Developer.h"

void Ui::UiAtWork() {
 
	// for each developer, read from file and create Developer object and push int developers vector
    vector<Developer> developers;
	string fileName = "developers.txt";

    ifstream file1(fileName);
    if (file1.is_open()) {
        string name;
        int id = 1;
        while (getline(file1, name)) {
            Developer dev(id++, name);
            developers.push_back(dev);
        }
        file1.close();
    }   

    // for each project, read from file and create Project object and push int project vector
    vector<Project> projects;
    fileName = "projects.txt";

    ifstream file2(fileName);
    if (file2.is_open()) {
        string name;
        int id = 1;
        while (getline(file2, name)) {
            Project proj(id++, name);
            projects.push_back(proj);
        }
        file2.close();
    }


    // Assign projects
    developers[0].addProject(projects[0]);
    developers[0].addProject(projects[1]);

    developers[1].addProject(projects[2]);

 

    // Iterate developers and their projects
    for (const auto& dev : developers) {
        cout << "Developer: " << dev.getName() << "\n";

        for (const auto& proj : dev.getProjects()) {
            cout << "  Project: " << proj.getName() << "\n";
        }

        cout << endl;
    }


}