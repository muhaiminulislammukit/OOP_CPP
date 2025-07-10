#include <bits/stdc++.h>
using namespace std;

class students {
public:
    int id;
    double gpa;

    void display() {
        cout << id << "  " << gpa << endl;
    }

    // Parameterized constructor
    students(int x, double y) {
        id = x;
        gpa = y;
    }
};

int main() {
    // Create and initialize objects correctly
    students mukit(103, 3.69);
    mukit.display();

    students sorwar(105, 3.23);
    sorwar.display();

    return 0;
}
