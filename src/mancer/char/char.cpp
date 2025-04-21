#include <string>

template<typename C, typename R, typename B, typename S>
class character{
public:
/*
Constructors
*/
    character();
    ~character();
/*
Fields
*/
    string player;
    string name;
    R race;
    B background;
    
    unsigned int chr_lvl;
    unsigned int prof_bonus;
    C cls_1;
    C cls_additional;

    int hp_max;
    int hp_current;
    int hp_temp_max;
    int hp_temp_current;
    unsigned int hit_dice;
    
    unsigned int ac;
    unsigned int speed_move;
    unsigned int speed_fly;
    unsigned int speed_swim;
    unsigned int speed_burrow;

    bool insp;

    //attributes
    unsigned int str;
    unsigned int str_mod;
    unsigned int dex;
    unsigned int dex_mod;
    unsigned int con;
    unsigned int con_mod;
    unsigned int wiz;
    unsigned int wiz_mod;
    unsigned int intl;
    unsigned int intl_mod;
    unsigned int cha;
    unsigned int cha_mod;

    //SKILLS
    //Strength
    S athletics;
    //Dexterity
    S acrobatics;
    S sleight_of_hand;
    S stealth;
    //Intelligence
    S arcana;
    S history;
    S investigation;
    S nature;
    S religion;
    //Wisdom
    S animal_handling;
    S insight;
    S medicine;
    S perception;
    S survival;
    //Charisma
    S deception;
    S intimidation;
    S performance;
    S persuasion;

    //Senses
    unsigned int blindsight;
    unsigned int darkvision;
    unsigned int tremorsense;
    unsigned int truesight;

    //Languages
    S languages;

    //Resistance
    S[] Resistance;
    
    //Damage Recution
    S[] reduction;

    //Proficiencies
    S[] armor;
    S[] weapon;
    S[] tools;

/*
Methods
*/

private:
/*
Constructors
*/

/*
Fields
*/

/*
Methods
*/
};