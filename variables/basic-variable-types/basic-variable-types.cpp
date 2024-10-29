#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main() {
    int player_health = 100;

    bool player_has_magic = true;

    // don't touch below this line
    cout << "player_health is a/an " << typeid(player_health).name() << endl;
    cout << "player_has_magic is a/an " << typeid(player_has_magic).name() << endl;
}

