#include "cihmboucle.h"


CIhmBoucle::CIhmBoucle()
{
    SetConsoleOutputCP(CP_UTF8);
    menu();
}
//---------------------------------------------------------
/*
Algorithme de la m├йthode menu( ) de la classe CIhmBoucle:
Auteur : de PONTAC
Date : septembre 2022
Variable :

    code = caract├иre
d├йbut
    r├йp├йter
            {
                afficher "5 exercices pour la mise en oeuvre des boucles en C++"
                afficher "====================================================="
                afficher "de PONTAC Vladislaw"
                afficher "a - Exercice 1 - calcul de la somme, du produit et de la moyenne"
                afficher "b - Exercice 2 - Division par soustractions successives"
                afficher "c - Exercice 3 - Calcul de la factorielle d'un entier"
                afficher "d - Exercice 4 - Afficher un triangle isoc├иle form├й d'├йtoiles"
                afficher "e - Exercice 5 -Afficher en boucle les dessins de la classe DessinConsole"
                afficher "q - Quitter le programme"
                afficher "S├йlectionner a, b, c ,d ,e ou q ? :"
            saisir code
            si ( code = 'a' )
                    alors appel de la m├йthode calculSPM( ) // ex├йcution du 1er exercice
            si ( code = 'b' )
                    alors calculDivisionParSoustraction( )
            si ( code = 'c' )
                    alors calculFactorielle( )
            si ( code = 'd' )
                    alors calculSPM( )
            si ( code = тАШeтАЩ )
                    alors triangleIsocele( )
            } jusquтАЩ├а ( code = 'q' )
fin
*/
void CIhmBoucle::menu()
{
    cout <<"      ▄███▄        ▄▄                                      ▄▄        ▄███▄"<< endl;
    cout <<"    ▄ ██▀  ▀      ▀ ▀█▄   ▄██▀█▄▄  ▀▄▄    ▄▄▀  ▄▄▄▀██▄   ▄█▀ ▀      ▀  ▀██ ▄"<< endl;
    cout <<"   █▄ ▀██▄▄▄      ▄▄███▓  ██▄  ▀▀▓█▄ ██  ██ ▄█▓▀▀  ▄██  ▓███▄▄      ▄▄▄██▀ ▄█"<< endl;
    cout <<"    ▀█▓████████▄██████▓▀   ▀█▀     ▀██▀  ▀██▀     ▀█▀   ▀▓██████▄████████▓█▀"<< endl;
    cout <<"      ███▓▀ ▀██▀▓▀            ▀                  ▀            ▀▓▀██▀ ▀▓███"<< endl;
    cout <<" ▄▀  ▄██▓ ▄ ▄█  ▀            Travail Pratique N° 03            ▀  █▄ ▄ ▓██▄  ▀▄"<< endl;
    cout <<" ▓▄▄███▓   ▀▀                                                      ▀▀   ▓███▄▄▓"<< endl;
    cout <<"  ▀██▀        Exercices pour la mise en oeuvre des boucles  en C++        ▀██▀"<< endl;
    cout <<" "<< endl;
    cout <<"            ▄▀▀▄ ▀▄▀▀▄ ▀▄ ▄▀▀▄ ▀▄▀▀▄ ▀▄  ▄▀ ▄▀▀▄▀ ▄▀▀▄ ▄▀ ▄▀▀▄▀ ▄▀▀▄"<< endl;
    cout <<"             ▀  ▀▀ ▀  ▀▀   ▀  ▀▀ ▀  ▀▀    ▀▀  ▀ ▀▀  ▀   ▀▀  ▀ ▀▀  ▀"<< endl;
    cout <<" "<< endl;
    cout <<"   a │ Exercice 1 │ Calcul de la somme, du produit et de la moyenne"<< endl;
    cout <<" "<< endl;
    cout <<"   b │ Exercice 2 │ Soustraction par divisions successives"<< endl;
    cout <<" "<< endl;
    cout <<"   c │ Exercice 3 │ Calcul de la factorielle d un entier"<< endl;
    cout <<" "<< endl;
    cout <<"   d │ Exercice 4 │ Affiche un triangle isocКle compose d étoiles"<< endl;
    cout <<" "<< endl;
    cout <<"   e │ Exercice 5 │ Afficher en boucle des dessins de la classe DessinConsole"<< endl;
    cout <<" "<< endl;
    cout <<" "<< endl;
    cout <<"            ▄▀▀▄ ▀▄▀▀▄ ▀▄ ▄▀▀▄ ▀▄▀▀▄ ▀▄  ▄▀ ▄▀▀▄▀ ▄▀▀▄ ▄▀ ▄▀▀▄▀ ▄▀▀▄"<< endl;
    cout <<"  ▄██▄       ▀  ▀▀ ▀  ▀▀   ▀  ▀▀ ▀  ▀▀    ▀▀  ▀ ▀▀  ▀   ▀▀  ▀ ▀▀  ▀       ▄██▄"<< endl;
    cout <<" ▓▀▀███▓   ▄▄                                                      ▄▄   ▓███▀▀▓"<< endl;
    cout <<" ▀▄  ▀██▓ ▀ ▀█  ▄    q │ Quitter                x │ Credits    ▄  █▀ ▀ ▓██▀  ▄▀"<< endl;
    cout <<"      ███▓▄ ▄██▄▓▄                                            ▄▓▄██▄ ▄▓███"<< endl;
    cout <<"    ▄█▓███████▀▀██████▓▄  ▄██▀█▄▄  ▀▄▄    ▄▄▀  ▄▄█▀██▄  ▄▓██████▀▀███████▓█▄"<< endl;
    cout <<"   █▀ ▄██▀▀▀      ▀▀███▓  ██▄  ▀▀▓█▄ ██  ██ ▄█▓▀▀  ▄██  ▓███▀▀      ▀▀▀██▄ ▀█"<< endl;
    cout <<"    ▀ ██▄  ▄      ▄ ▄█▀    ▀█▀     ▀██▀  ▀██▀     ▀█▀    ▀█▄ ▄      ▄  ▄██ ▀"<< endl;
    cout <<"      ▀███▀        ▀▀         ▀                  ▀         ▀▀        ▀███▀"<< endl;
    cout <<" "<< endl;
    cout <<" SВlectionner a, b, c ,d ,e ou q ? :";
}

void CIhmBoucle::afficherDessinConsole()
{
    int nbNotes;
    int note;
    int somme;
    int produit;
    float moyenne;
    int i;

    system("cls");
    cout <<"Exercice 1 │ Calcul de la somme, du produit et de la moyenne";
    cout <<"Combien de notes souhaitez vous entrer ?";
    cin >> nbNotes;
    somme = 0;
    produit = 1;
    i = 0;
    do
        {
            i = i + 1;
            cout << i <<"- note : ";
            cin >> note;
            somme = somme + note;
            produit = produit * note;
        }while ( i != nbNotes );
    moyenne = somme / note;
    cout << "La somme des "<< nbNotes<< " est de : "<< somme;
    cout << "Le produit des "<< nbNotes<<" est de : "<< produit;
    cout << "La moyenne des "<< nbNotes<<" est de : "<< moyenne;
    system("pause");
}

void CIhmBoucle::calculDivisionParSoustraction()
{

}

void CIhmBoucle::calculFactorielle()
{

}

void CIhmBoucle::calculSPM()
{

}

void CIhmBoucle::triangleIsocele()
{

}

/*void CIhmBoucle::credits()
{

}*/
