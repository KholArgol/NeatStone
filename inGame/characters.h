#ifndef NEATSTONE_CHARACTERS_H
#define NEATSTONE_CHARACTERS_H

//characters on the board. do not confond with cards in hand

using namespace std;
#include <iostream>
#include <string>


class character {
public:
    stringacter(string ofclass, int attack, int pvMax) {m_ofClass = ofclass; m_attack = attack; m_pvMax = pvMax; m_pv = pvMax;};

    receiveDmg();
    healDmg();
    attack();

private:
    string m_ofClass;

    int m_pvMax;
    int m_pv;

    int m_attack;
    bool m_have_attacked=false;

    bool m_freeze=false;
    bool m_divineShield=false;
    bool m_windFury=false;
    bool m_stealth=false;
    bool m_lifeSteal=false;
    bool m_insensible=false;
};

class hero : public character {
public:
    hero(std::string ofClass) : character(ofClass, 0, 30) {};

private:

};

class minion : public character {
public:
    minion(string ofClass, int attack, int pvMax, int cost, string type, int ID, hero *owner) : character(ofClass, attack, pvMax) {m_cost = cost; m_type = type; m_ID = ID; m_owner = owner;};

private:
    int m_ID;
    hero *m_owner;

    int m_cost;
    string m_type;

    bool m_rush;
    bool m_charge;
    bool m_toxicity;
    bool m_taunt;
    bool m_enraged;
};


#endif //NEATSTONE_CHARACTERS_H
