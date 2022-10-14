#ifndef CIHMBOUCLE_H
#define CIHMBOUCLE_H
#include <conio.h>
#include <iostream>
using namespace std;
#include <windows.h>

class CIhmBoucle
{
public:
    CIhmBoucle();
private:
    void menu();
    void afficherDessinConsole();
    void calculDivisionParSoustraction();
    void calculFactorielle();
    void calculSPM();
    void triangleIsocele();
    void credits();
};

#endif // CIHMBOUCLE_H
