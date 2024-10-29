#include <iostream>
using namespace std;

int player_level = 4; // global scope

// Don't touch below this line

int calculate_health(int modifier) {
    return player_level * modifier;
}

int calculate_primary_stats(int armor_bonus, int modifier) {
    return armor_bonus + modifier + player_level;
}

int main() {
    cout << "Character has " << calculate_health(10) << " max health." << endl;
    cout << "Character has " << calculate_primary_stats(3, 8) << " primary stats." << endl;
}

