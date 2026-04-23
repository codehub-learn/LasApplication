#include "Ui.h"
#include <iostream>
#include <vector>
#include <string>
#include "Project.h"
#include "Developer.h"

void Ui::UiAtWork() {
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
    vector<Developer> developers;
    developers.push_back(dev1);
    developers.push_back(dev2);

    // Iterate developers and their projects
    for (const auto& dev : developers) {
        cout << "Developer: " << dev.getName() << "\n";

        for (const auto& proj : dev.getProjects()) {
            cout << "  Project: " << proj.getName() << "\n";
        }

        cout << endl;
    }


}