#include "Wortliste.h"
#include "BenutzerOberflaesche.h"
#include "Validierung.h"
#include "RaetselEditor.h"
#include <iostream>
using namespace std;


int main()
{
    //Alle Worte ausgeben
    for (int i = 0; i < 651; i++)
        cout << wortliste[i] << endl;

    //Erstes Wort ausgeben
    cout << wortliste[0] << endl;

    //Letztes Wort ausgeben
    cout << wortliste[650] << endl;

    //Alle Buchstaben des ersten Wortes ausgeben
    for (int i = 0; i < 4; i++)
        cout << wortliste[0][i] << " ";

    cout << endl;

    return 0;
}