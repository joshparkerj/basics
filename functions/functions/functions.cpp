#include <iostream>
using namespace std;

double area_of_circle(double radius) {
    double pi = 3.14;
    double area = pi * radius * radius;
    return area;
}

int main() {
    double sword_length = 1.0;
    double spear_length = 2.0;

    // don't touch above this line

    double sword_area = area_of_circle(sword_length);
    double spear_area = area_of_circle(spear_length);

    // don't touch below this line

    cout << " Sword length: " << sword_length << " meters." << endl;
    cout << " Sword attack area: " << sword_area << " square meters" << endl;

    cout << " Spear length: " << spear_length << " meters." << endl;
    cout << " Spear attack area: " << spear_area << " square meters" << endl;
}

