//Muhindo ID 160040009
//Kaaal   ID 160041080
//Ashiraf ID 160040001
//Latifa  ID 160040002
#include "global_vars_classess_and_structures.h";
#include "logged_in_functions.h";
#include "questions.h";
#include "other_functions.h";

int main(){
    initializer();
    number_of_players = load_data();


    system("cls");
    cout<<"+--------------------------------+";
    cout<<"\n|          INSTRUCTION!          |";
    cout<<"\n|           ---------            |";
    cout<<"\n+--------------------------------+";

    cout<<"\n\nUse 'W' to navigate UP, 'S' for down and 'Esc' for back!";
    cout<<"\n\n\n\t\t  ";
    choice = getch();

    demo();

    //system("cls");
    return 0;
}
