#include <string>

template<typename C, typename R, typename B, typename P>
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
    P athletics;
    //Dexterity
    P acrobatics;
    P sleight_of_hand;
    P stealth;
    //Intelligence
    P arcana;
    P history;
    P investigation;
    P nature;
    P religion;
    //Wisdom
    P animal_handling;
    P insight;
    P medicine;
    P perception;
    P survival;
    //Charisma
    P deception;
    P intimidation;
    P performance;
    P persuasion;

    //Senses
    unsigned int blindsight;
    unsigned int darkvision;
    unsigned int tremorsense;
    unsigned int truesight;

    //Languages
    P languages;

    //Resistance
    P[] resistance;
    
    //Damage Recution
    P[] reduction;

    //Proficiencies
    P[] armor;
    P[] weapon;
    P[] tools;

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