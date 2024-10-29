#include <iostream>
using namespace std;

int triple_attack(int damage_one, int damage_two, int damage_three) {
    return damage_one + damage_two + damage_three;
}

// Don't touch below this line

int main() {
    int attack_one = 2;
    int attack_two = 4;
    int attack_three = 3;
    int first_triple_attack_damage = triple_attack(attack_one, attack_two, attack_three);
    cout << "Getting damage for " << attack_one << " " << attack_two << " and " << attack_three << "..." << endl;
    cout << first_triple_attack_damage << " points of damage dealt!" << endl;
    cout << "=====================================" << endl;
    int attack_four = -1;
    int attack_five = 10;
    int attack_six = 5;
    int second_triple_attack_damage = triple_attack(attack_four, attack_five, attack_six);
    cout << "Getting damage for " << attack_four << " " << attack_five << " and " << attack_six << "..." << endl;
    cout << second_triple_attack_damage << " points of damage dealt!" << endl;
    cout << "=====================================" << endl;
}

