#include<iostream>
using namespace std;

int get_attacked(int health, int armor, int damage) {
    damage -= armor;
    int new_health = health - damage;
    return new_health;
}

int get_punched(int health, int armor) {
    return get_attacked(health, armor, 50);
}

int get_punched(int health) {
    return get_punched(health, 0);
}

int get_slashed(int health, int armor) {
    return get_attacked(health, armor, 100);
}

int get_slashed(int health) {
    return get_slashed(health, 0);
}

// Don't touch below this line

void test(int health, int armor) {
    cout << "Health: " << health << ", Armor: " << armor << "" << endl;
    cout << "Health after punch: " << get_punched(health, armor) << endl;
    cout << "=====================================" << endl;
    cout << "Health: " << health << ", Armor: " << armor << "" << endl;
    cout << "Health after slash: " << get_slashed(health, armor) << endl << endl;
    cout << "=====================================" << endl;
    cout << "Health: " << health << ", Armor: no armor!" << endl;
    cout << "Health after slash: " << get_slashed(health) << endl << endl;
    cout << "=====================================" << endl;
    cout << "Health: " << health << ", Armor: no armor!" << endl;
    cout << "Health after punch: " << get_punched(health) << endl;
    cout << "=====================================" << endl;
}

int main() {
    test(400, 5);
    test(300, 3);
    test(200, 1);
}

