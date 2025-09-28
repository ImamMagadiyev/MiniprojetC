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
*  Nom du fichier : chiffrement_programme.h                                   *
*                                                                             *
******************************************************************************/
#ifndef CHIFFREMENT_PROGRAMME_H
#define CHIFFREMENT_PROGRAMME_H

#include <wchar.h>

#define ALPHABET L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzÀÁÂÄÈÉÊËÌÍÎÏÒÓÔÖÙÚÛÜàáâäèéêëìíîïòóôöùúûüç"
#define ALPHABET_SIZE (sizeof(ALPHABET) / sizeof(ALPHABET[0]) - 1)

int verifier_alphanumerique(const wchar_t *texte);
int trouver_index(wchar_t c);
void chiffrer_cesar(wchar_t *texte, int cle);
void dechiffrer_cesar(wchar_t *texte, int cle);
void affichage(const wchar_t *texte);

#endif /* CHIFFREMENT_PROGRAMME_H */

