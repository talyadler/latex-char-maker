#pragma once
#include <string>
#include <vector>
#include <iostream>

template<typename C, typename R, typename B, typename P>
class character{
public:
/*
Constructors
*/
    character(){}
    ~character(){}
/*
Fields
*/
    std::string player;
    std::string name;
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

    // //Resistance
    // P[] resistance;
    
    // //Damage Recution
    // P[] reduction;

    // //Proficiencies
    // P[] armor;
    // P[] weapon;
    // P[] tools;

/*
Methods
*/
    bool menu();
    // void _name()/*{std::cout << "name function\n";}*/;
    // void _player()/*{std::cout << "player function\n";}*/;
    // void race(){std::cout << "race function\n";}
    // void cls(){std::cout << "class function\n";}
    void _init();
    void _currentstatus();

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

template<typename C, typename R, typename B, typename P> bool character<C,R,B,P>::menu(){
    unsigned int v;
    printf(
        "##########################\n"
        "Char Menu\n"
        "##########################\n"
        "Please choose an option:\n"
        "[1]\t = New Character\n"
        "[2]\t = Show Character Info\n"
        "[10]\t = Back\n"
        "Your choice: "
    );
    std::cin >> v;
    switch (v){
        case 1:
            _init();
            break;
        case 2:
            _currentstatus();
            break;
        case 10:
            // printf("\nThank you and goodby!\n\n");
            return false;
            // break;
        default:
            printf("not a valid input\n");
            break;
    }
    return true;
}

template<typename C, typename R, typename B, typename P> void character<C,R,B,P>::_currentstatus(){
    std::cout << "Player name:\t\t\t" << player << "\n";
    std::cout << "Character name:\t\t\t" << name << "\n";
    std::cout << "Character race:\t\t\t" << race << "\n";
    std::cout << "Character background:\t\t" << background << "\n";
}

template<typename C, typename R, typename B, typename P> void character<C,R,B,P>::_init(){
    printf("Please enter the players name: ");
    std::cin >> player;
    printf("Please enter the Character name: ");
    std::cin >> name;
    printf("Please enter the Character race: ");
    std::cin >> race;
    printf("Please enter the Character background: ");
    std::cin >> background;
}