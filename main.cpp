#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {
    string heroName, heroClass;
    int heroXp;

    cout << "Insira o nome do seu Heroi: "<< endl;
    getline(cin, heroName);

    cout << "Insira o xp total do seu Heroi: "<< endl;
    cin >> heroXp;

    if (heroXp <= 1000) {
        heroClass = "Ferro";
    } else if (heroXp > 1000 && heroXp <= 2000) {
        heroClass = "Bronze";
    } else if (heroXp > 2000 && heroXp <= 5000) {
        heroClass = "Prata";
    } else if (heroXp > 5000 && heroXp <= 7000) {
        heroClass = "Ouro";
    } else if (heroXp > 7000 && heroXp <= 8000) {
        heroClass = "Platina";
    } else if (heroXp > 8000 && heroXp <= 9000) {
        heroClass = "Ascendente";
    } else if (heroXp > 9000 && heroXp <= 10000) {
        heroClass = "Imortal";
    } else {
        heroClass = "Radiante";
    }

    cout << "O Heroi de nome " << heroName << " esta no nivel de " << heroClass << ".";

    return 0;
}
