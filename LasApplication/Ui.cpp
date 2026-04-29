#include "Ui.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Project.h"
#include "Developer.h"

void Ui::UiAtWork() {
 
	// for each developer, read from file and create Developer object and push int developers vector
    vector<Developer> developers ;
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
            Project proj(name, id++ );
            projects.push_back(proj);
        }
        file2.close();
    }


    // Assign projects
 
    developers[0].addProject(projects[0]);
    developers[0].addProject(projects[1]);

    developers[1].addProject(projects[2]);

 
	//iterate through developers and print their projects
    for (const auto& dev : developers) {
        cout << dev << endl;
     }
     cout << endl;

}
   

 