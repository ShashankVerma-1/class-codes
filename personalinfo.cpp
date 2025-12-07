#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string name, gender, school, dob, favPlace, favFood, goal;
    int age;

   
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); 

    cout << "Enter your gender: ";
    getline(cin, gender);

    cout << "Enter your school name: ";
    getline(cin, school);

    cout << "Enter your date of birth (DD-MM-YYYY): ";
    getline(cin, dob);

    cout << "Enter your favorite place: ";
    getline(cin, favPlace);

    cout << "Enter your favorite food: ";
    getline(cin, favFood);

    cout << "Enter your goal in life: ";
    getline(cin, goal);

   
    cout << "\n--- Personal Information ---\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;
    cout << "School: " << school << endl;
    cout << "Date of Birth: " << dob << endl;
    cout << "Favorite Place: " << favPlace << endl;
    cout << "Favorite Food: " << favFood << endl;
    cout << "Goal: " << goal << endl;

    return 0;
}