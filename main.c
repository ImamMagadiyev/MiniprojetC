/******************************************************************************
*  ASR => 4R2.04                                                              *
*******************************************************************************
*                                                                             *
*  N° de Sujet : 3                                                            *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé : Chiffrement de messages                                         *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 : Branco Tiago                                                 *
*                                                                             *
*  Nom-prénom2 : MAGADIYEV Imam                                               *
*                                                                             *                                                             *                                                          *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier : main.c                                                    *
*                                                                             *
******************************************************************************/
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include "chiffrement_programme.h"

#define MAX_LEN 1000

int main() {
    // Activation de la prise en charge des caractères spéciaux
    setlocale(LC_ALL, ""); 

    wchar_t texte[MAX_LEN];
    int choix, cle;

    // Saisie du texte
    wprintf(L"Entrez le texte à chiffrer/déchiffrer : ");
    fgetws(texte, MAX_LEN, stdin);
    texte[wcslen(texte) - 1] = L'\0';

    // Vérification que le texte est correct (alphanumérique ou espace uniquement)
    if (!verifier_alphanumerique(texte)) {
        wprintf(L"Erreur: Le texte contient des caractères non alphanumériques.\n");
        return 1;
    }

    // Saisie du choix : chiffrer ou déchiffrer
    wprintf(L"Choisissez l'option : 1-Chiffrer 2-Déchiffrer : ");
    wscanf(L"%d", &choix);
    getchar(); // Consomme le \n

    // Saisie de la clé
    wprintf(L"Entrez la clé (nombre entier) : ");
    wscanf(L"%d", &cle);
    getchar();

    // Exécution selon le choix
    if (choix == 1) {
        chiffrer_cesar(texte, cle);
    } else if (choix == 2) {
        dechiffrer_cesar(texte, cle);
    } else {
        wprintf(L"Choix invalide.\n");
        return 1;
    }

    // Affichage du résultat final
    affichage(texte);
    
    return 0;
}


