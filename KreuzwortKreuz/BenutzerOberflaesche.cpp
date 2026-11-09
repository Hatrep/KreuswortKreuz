#include "BenutzerOberflaesche.h"
#include <iostream>
using namespace std;

void DieTabelleAnzeigen(char Tabelle[4][4], char Tabelle2[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        
        for (int j = 0; j < 4; j++)
        {
            if(i == 0 && j == 0 || i == 0 && j == 3 || i == 3 && j == 0 || i == 3 && j == 3)
            {
                cout << "----|";
            }else
            {
                cout << "  " << Tabelle2[i][j] << " |";
            }
        }
        cout << endl;
        for (int j = 0; j < 4; j++)
        {
            if (i == 0 && j == 0 || i == 0 && j == 3 || i == 3 && j == 0 || i == 3 && j == 3)
            {
                cout << "----|";
            }
            else
            {
                cout << "   " << " |";
            }
        }
        cout << endl;
        for (int j = 0; j < 4; j++)
        {
            if (i == 0 && j == 0 || i == 0 && j == 3 || i == 3 && j == 0 || i == 3 && j == 3)
            {
                cout << "----|";
            }
            else
            {
                cout << Tabelle[i][j] << "   |";
            }
        }
        cout << endl << "--------------------" << endl;
    }
}

char BuchtabeFragge()
{
    bool Running = true
;
    while(Running)
    {
        char Zeichnen;

        cout << "Schreib die Zeichnen, die du hinzufügen willst. Scheib - , um die Eingabe zu beenden." << endl;
        cin >> Zeichnen;
        if(Zeichnen == '-')
        {
            Running = false;
            return '-';
        }
    }
}

int KoordinateFraggen(bool Horizontal)
{
    int Zahl;

    while(true)
    {
        cout << endl << "Schreib die ";
        if (Horizontal)
        {
            cout << "horizontale";
        }
        else
        {
            cout << "vertikale";
        }
        cout << " Koordinate des Zeichnen (1-4)" << endl;
            cin >> Zahl;
        if(Zahl >= 1 && Zahl <= 4)
        {
            return Zahl;
        }
    }
}