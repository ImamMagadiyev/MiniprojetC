# Chiffrement de Messages — Projet ASR 4R2.04

## Objectif du projet

Ce programme permet de chiffrer et déchiffrer des messages en utilisant le **chiffrement de César**, tout en prenant en compte les **lettres accentuées**.  
Le but est de sécuriser un texte alphanumérique avec une clé numérique simple.

## Développeur
- Branco Tiago**
- Magadiyev Imam**

## Fonctionnalités

- Saisie d’un message par l’utilisateur.
- Vérification que le message est alphanumérique (y compris les accents).
- Choix entre chiffrement et déchiffrement.
- Utilisation du chiffrement de César.
- Affichage du résultat.

## Spécifications

### `int verifier_alphanumerique(const wchar_t *texte);`
- **Paramètre** : texte à vérifier.
- **Retour** : `1` si le texte est alphanumérique (avec espaces), `0` sinon.
- **Cas d’erreur** : Texte contenant des caractères non alphanumériques.

### `int trouver_index(wchar_t c);`
- **Paramètre** : caractère à rechercher dans l’alphabet étendu.
- **Retour** : index du caractère ou `-1` s’il n’existe pas dans l’alphabet.

### `void chiffrer_cesar(wchar_t *texte, int cle);`
- **Paramètres** :
  - `texte` : texte original.
  - `cle` : entier de décalage.
- **Effet** : Modifie le texte pour le chiffrer.
- **Cas d’erreur** : Aucun (lettres non supportées sont ignorées).

### `void dechiffrer_cesar(wchar_t *texte, int cle);`
- **Paramètres** :
  - `texte` : texte chiffré.
  - `cle` : entier de décalage.
- **Effet** : Modifie le texte pour le déchiffrer.
- **Cas d’erreur** : Aucun (lettres non supportées sont ignorées).

### `void affichage(const wchar_t *texte);`
- **Paramètre** : texte à afficher.
- **Effet** : Affiche le résultat chiffré ou déchiffré.

## Cas d’erreurs gérés

- Le texte ou la clé contient des caractères non alphanumériques.
- Mauvais choix d’option (chiffrement/déchiffrement).

# Lien
Voici le lien vers le git : https://gitlab.info.iut-tlse3.fr/brt5524a/miniprojetc



