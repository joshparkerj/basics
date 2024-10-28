#include <iostream>
using namespace std;

int main() {
    int sword_damage = 10;
    int player_health = 100;
    // fix the bug where addition was used instead of substraction
    int health_after_attack = player_health - sword_damage;

    // Don't touch below this line
    cout << "Lollilfred's health is: " << player_health << endl;
    cout << "Lollilfred is hit by a sword for " << sword_damage << " damage..." << endl;
    cout << "Lollilfred's health is now: " << health_after_attack << endl;
}

