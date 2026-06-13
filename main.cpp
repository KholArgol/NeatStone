#include "inGame/characters.h"

void main() {
    hero *hero1 = new hero("warrior");
    hero *hero2 = new hero("mage");

    minion *practiceDummy = new minion("neutral", 1, 2, 1, "none", 0, hero1);
}
