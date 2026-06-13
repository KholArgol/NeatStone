#ifndef NEATSTONE_CHARACTERS_H
#define NEATSTONE_CHARACTERS_H

//characters on the board. do not confond with cards in hand

class characters {
public:
    explicit characters() {
    }

private:
    char ofClass;

    int pvMax;
    int pv;

    int attack;
    bool have_attacked=false;

    bool freeze;
    bool divineShield;
    bool windFury;
    bool stealth;
    bool lifeSteal;
    bool insensible;
};

class hero : public characters {
private:

};

class minion : public characters{
private:
    int ID;

    int cost;
    char type;

    bool rush;
    bool charge;
    bool toxicity;
    bool taunt;
    bool enraged;
};


#endif //NEATSTONE_CHARACTERS_H
