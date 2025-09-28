# 🔐 Chiffrement de Messages — Projet ASR 4R2.04

## 🎯 Objectif du projet
Ce programme permet de **chiffrer et déchiffrer des messages** en utilisant le **chiffrement de César**, tout en prenant en compte les **lettres accentuées**.  
Le but est de sécuriser un texte alphanumérique avec une **clé numérique simple**.

---

## 👥 Développeurs
- Branco Tiago  
- Magadiyev Imam  

---

## ⚙️ Fonctionnalités
- Saisie d’un message par l’utilisateur.  
- Vérification que le message est alphanumérique (y compris les accents).  
- Choix entre **chiffrement** et **déchiffrement**.  
- Utilisation du **chiffrement de César**.  
- Affichage du résultat.  

---

## 📂 Structure du projet
- `main.c` → programme principal (menu + logique principale).  
- `chiffrement_programme.c / .h` → implémentation et en-têtes pour le chiffrement de César.  
- `makefile` → automatisation de la compilation.  
- `.gitignore` → fichiers ignorés par Git.  
- `README.md` → documentation du projet.  

---

## 📑 Spécifications des fonctions

```c
int verifier_alphanumerique(const wchar_t *texte);
```
- **Paramètre** : texte à vérifier  
- **Retour** : `1` si le texte est alphanumérique (avec espaces), `0` sinon  
- **Cas d’erreur** : texte contenant des caractères non alphanumériques  

```c
int trouver_index(wchar_t c);
```
- **Paramètre** : caractère à rechercher dans l’alphabet étendu  
- **Retour** : index du caractère ou `-1` s’il n’existe pas  

```c
void chiffrer_cesar(wchar_t *texte, int cle);
```
- **Paramètres** :  
  - `texte` : texte original  
  - `cle` : entier de décalage  
- **Effet** : modifie le texte pour le chiffrer  
- **Cas d’erreur** : aucun (lettres non supportées sont ignorées)  

```c
void dechiffrer_cesar(wchar_t *texte, int cle);
```
- **Paramètres** :  
  - `texte` : texte chiffré  
  - `cle` : entier de décalage  
- **Effet** : modifie le texte pour le déchiffrer  
- **Cas d’erreur** : aucun (lettres non supportées sont ignorées)  

```c
void affichage(const wchar_t *texte);
```
- **Paramètre** : texte à afficher  
- **Effet** : affiche le résultat chiffré ou déchiffré  

---

## 🚨 Cas d’erreurs gérés
- Texte ou clé contenant des caractères non alphanumériques.  
- Mauvais choix d’option (chiffrement/déchiffrement).  

---

## ⚙️ Compilation et exécution

1. Compiler avec **make** :  
   ```bash
   make
   ```

2. Lancer le programme :  
   ```bash
   ./programme
   ```

---

## 🔗 Dépôt GitHub
Ce projet est hébergé sur GitHub :  
https://github.com/im31200/MiniprojetC
