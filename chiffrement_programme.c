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
*  Nom-prénom1 : Branco Tiagp                                                 *
*                                                                             *
*  Nom-prénom2 : MAGADIYEV Imam                                               *
*                                                                             *                                                             *                                                          *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier : chiffrement_programme.C                                   *
*                                                                             *
******************************************************************************/
#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
#include "chiffrement_programme.h"

// Fonction qui trouve l'index d'un caractère dans l'alphabet
// Cherche la position du caractère donné
int trouver_index(wchar_t c) {
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (ALPHABET[i] == c) return i;
    }
    return -1;
}

// Fonction qui vérifie si un texte est uniquement composé de caractères alphanumériques ou d'espaces
// Parcourt chaque caractère du texte pour le valider
int verifier_alphanumerique(const wchar_t *texte) {
    for (int i = 0; texte[i] != L'\0'; i++) {
        if (!(iswalnum(texte[i]) || texte[i] == L' ')) {
            return 0;
        }
    }
    return 1;
}

// Fonction qui chiffre un texte avec la méthode de César
// Remplace chaque lettre par une autre décalée d'une clé
void chiffrer_cesar(wchar_t *texte, int cle) {
    for (int i = 0; texte[i] != L'\0'; i++) {
        int index = trouver_index(texte[i]);
        if (index != -1) {
            texte[i] = ALPHABET[(index + cle) % ALPHABET_SIZE];
        }
    }
}

// Fonction qui déchiffre un texte codé par César
// Ramène chaque lettre à sa position d'origine
void dechiffrer_cesar(wchar_t *texte, int cle) {
    for (int i = 0; texte[i] != L'\0'; i++) {
        int index = trouver_index(texte[i]);
        if (index != -1) {
            texte[i] = ALPHABET[(index - cle + ALPHABET_SIZE) % ALPHABET_SIZE];
        }
    }
}

// Fonction qui affiche le texte final
// Affiche le texte chiffré ou déchiffré
void affichage(const wchar_t *texte) {
    wprintf(L"Résultat : %ls\n", texte);
}


