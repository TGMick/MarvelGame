#include <iostream>
#include "stdafx.h"
#include "characters.cpp"
#include <cstdlib>
#include <string>

using namespace std;

int Fighting()
{
    StartofGame:
        //Variables
        string playagain;
        //Combat Basics
        //Choose Team
        cout << "What do team do you want to play?" << endl;
        cout << "Heroes or Villains" << endl;
        bool team;
        if (!(cin >> "Heroes")) {
            if (cin >> "Villains") {
                team = true;
                goto V;
            }
        }
        else {
            team = false;
            goto H;
        }
        //Choose Characters
        H: //Play Heroes
        cout << "Who Would you like to use?: " << endl;
        string champion = cin >> ">";
        cout << charlistV() << endl;
        string fighter = cin >> ">";
        goto CharrecallH;

        M: //Play Villains
        cout << "Who Would you like to use?: " << endl;
        cout << charlistH() << endl;
        string fighter = cin >> ">";
        goto CharrecallV;

        //Recall Characters
        CharrecallV: //Recall if Playing Villain
        if (champion = "Juggernaut"){
            champion = Juggernaut;
        }
        else if (champion = "Kang the Conqueror"){
            champion = Kang the Conqueror;
        }
        else if (champion = "Doctor Doom"){
            champion = Doctor Doom;
        }
        else if (champion = "Red Skull"){
            champion = Red Skull;
        }
        else if (champion = "Absorbing Man"){
            champion = Absorbing Man;
        }
        else if (champion = "Sin"){
            champion = Sin;
        }
        else if (champion = "Loki"){
            champion = Loki;
        }
        else if (champion = "Abomination"){
            champion = Abomination;
        }
        else if (champion = "Kraven the Hunter"){
            champion = Kraven the Hunter;
        }
        else if (champion = "Mysterio"){
            champion = Mysterio;
        }
        else {
            goto H;
        }

        CharrecallH: //Recall if Playing Hero
        if (champion = "Captain America"){
            champion = Captain America;
        }
        else if (champion = "Iron Man"){
            champion = Iron Man;
        }
        else if (champion = "Hawkeye"){
            champion = Hawkeye;
        }
        else if (champion = "Captain Marvel"){
            champion = "Captain Marvel";
        }
        else if (champion = "Scarlet Witch"){
            champion = Scarlet Witch;
        }
        else if (champion = "Sider Man"){
            champion = Spider Man;
        }
        else if (champion = "Thor"){
            champion = Thor;
        }
        else if (champion = "Black Widow"){
            champion = Black Widow;
        }
        else if (champion = "Dazzler"){
            champion = Dazzler;
        }
        else if (champion = "Invisible Woman"){
            champion = Invisible Woman;
        }
        else {
            goto V;
        }

        //Champion Bio and Attacks
        cout << "Champion Name: " << champion.name << endl;
        cout << "Champion Ability: " << champion.ability << endl;
        cout << "Champion's Real Name: " << champion.realname << endl;
        //Round loop
        int Rounds = 1;
        while (healthC > 0 or healthF > 0)
        {
            roundpt1:
            cout << "What attack do you want to use" << endl;
            cout << attack1S << "   " << attack2S << endl;
            cout << attack3S << "   " << attack4S << endl;
            cout << "Use Choose attack";
            int roundchoicesC = cin >> ">";
            //Check if the attack can be done
            if (roundchoicesC == 1){
                attackC = attack1C
            }
            else if (roundchoices == 2){
                attackC = attack2C
            }
            else if (roundchoices == 3){
                attackC = attack3C
            }
            else if (roundchoices == 4){
                attackC = attack4C
            }
            else {
                goto roundpt1;
            }

            int randomattack = rand() % 4 + 1;
            int roundchoicesF = randomattack;

            if (roundchoicesF = 1){
                attackF = attack1F
            }
            else if (roundchoicesF = 2){
                attackF = attack2F
            }
            else if (roundchoicesF = 3){
                attackF = attack3F
            }
            else if (roundchoicesF = 4){
                attackF = attack4F
            }
            //Health of the Fighter
            dmgC = attackF
            healthF = healthF - dmgC
            //Health of the Champion
            int dmgF = attackC
            int healthC = healthC - dmgF
            int Rounds = Rounds + 1
        }
        string gameend;
        if (healthC = 0 and healthF = 0){
            gameend = "Double KO! Do you want to try again?";
        }
        else if (healthC = 0 and healthF > 0){
            gameend = "KO! You have lost, Do you want to try again?";
        }
        else if (healthC > 0 and healthF = 0){
            gameend = "Enemy KO! You win, Do you want to play again?";
        }
    EndGame:
        cout << gameend << endl;
        cout << "Yes or No";
        cin >> playagain;
        if (playagain = "Yes"){
            goto StartofGame;
        }
        else if (playagain = "No"){
            goto LEAVE;
        }
        else {
            goto EndGame;
        }
        LEAVE:
}


