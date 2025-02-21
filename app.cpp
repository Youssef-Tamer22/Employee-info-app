#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string name;
    int id;
    int age;
    string position;
    double salary;
    string place_of_birth;
    
    cout << "Enter employee's name: ";
    getline(cin, name);
    cout<< "Enter employee's Place Of Birth: ";
    getline(cin, place_of_birth);
    cout << "Enter employee's ID: ";
    cin >> id; 
    cout << "Enter employee's age: ";
    cin >> age;
    cin.ignore();  // Ignore the newline character left in the input buffer
    cout << "Enter employee's position: ";
    getline(cin, position);
    cout << "Enter employee's salary: ";
    cin >> salary;

    ofstream outfile("employees info.txt", ios::app);  // Open file in append mode
    if (outfile.is_open()) {
        outfile << "ID: " << id <<"\n";
        outfile << "Name: " << name << "\n";
        outfile << "Place Of Birth: "<< place_of_birth<<"\n";
        outfile << "Age: " << age << "\n";
        outfile << "Position: " << position << "\n";
        outfile << "Salary: " << salary << "\n";
        outfile << "=======================\n";
        outfile.close();
        cout << "Employee information saved to employees info.txt" << endl;
    } else {
        cout << "Unable to open file" << endl;
    }

    return 0;
}
