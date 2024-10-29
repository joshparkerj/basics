#include <iostream>
using namespace std;

int main() {
    int player_health = 1000;
    int armor_multiplier = 2;

    // create armored_health here
    int armored_health = player_health * armor_multiplier;
    cout << armored_health << endl;
}

