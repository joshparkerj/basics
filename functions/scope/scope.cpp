#include <iostream>
using namespace std;

int get_max_health(int modifier, int level) {
    return modifier * level;
}

int main() {
    int my_modifier = 5;
    int my_level = 10;

    // don't touch above this line

    int max_health = get_max_health(my_modifier, my_level);

    // don't touch below this line

    cout << "max_health is: " << max_health << endl;
}

