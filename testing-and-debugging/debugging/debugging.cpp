#include "debugging.h"

int take_magic_damage(int health, int resist, int amp, int spell_power) {
    return health - (amp * spell_power - resist);
}

