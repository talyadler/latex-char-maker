#include "./mancer/char/char.h"

character<std::string,std::string,std::string,std::string> _char;

bool menu(){
    unsigned int v;
    printf(
        "--------------------------\n"
        "Main Menu\n"
        "--------------------------\n"
        "Please choose an option:\n"
        "[1]\t = Character Menu\n"
        "[10]\t = Exit\n"
        "Your choice: "
    );
    std::cin >> v;
    switch (v){
        case 1:
            while(_char.menu()){_char.menu();};
            break;
        case 10:
            printf("\nThank you and goodby!\n\n");
            return false;
            // break;
        default:
            printf("not a valid input\n");
            break;
    }
    return true;
}


int main(){
    bool on = true;
    printf(
        "--------------------------\n"
        "Welcome to talyadler's 5e.2014 DND Character maker\n"
        "--------------------------\n"
    );
    while (menu()){}
    
    return 0;
}