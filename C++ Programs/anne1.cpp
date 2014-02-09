//if/else statement attempt (with hw conditions):

#include <iostream>
#include <string>

using namespace std;

int main() {
    double weight;
    double height;
    string name;
    string input;
    double bmi;

    cout << "Type your first name (with no space):\n";
    cin >> name;
    cout << "Type metric for metric system, type standard for standard system:\n";
    cin >> input;
    if (input == "metric") {
        cout << "Type in your weight in kilogram and your height in meter:\n";
    cin >> weight;
    cin >> height;
    cout << name << ", your BMI is " << (bmi = (weight / (height * height))) << "\n";
    }
    else {
        cout << "Type in your weight in pound and your height in inch:\n";
    cin >> weight;
    cin >> height;
    cout << name << ", your BMI is " << (bmi = (weight / (height * height) * 703)) << "\n";
    }


    return 0;
}
