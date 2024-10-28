#include <iostream>
using namespace std;

int main() {
    int player_health = 100;
    int poison_damage = -10;

    // don't touch below this line

    int player_poison_health = player_health + poison_damage;

    cout << player_poison_health << endl;
}

