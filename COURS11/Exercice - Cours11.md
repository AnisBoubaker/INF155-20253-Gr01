# Exercice - Cours 11

Contexte : on veut modéliser une **garderie d’animaux** en C, en utilisant des **structures**, des **modules** et de **l’allocation dynamique**.

Vous allez progressivement construire trois modules :

1. `mod_animal` : gestion d’un animal et de son propriétaire (version simple, propriétaire contenu dans l’animal).
2. `mod_personne` : on sort la personne dans un module séparé, et l’animal ne stocke plus la personne elle-même mais **une référence** vers une personne.
3. `mod_garderie` : gestion d’une garderie qui contient un **tableau dynamique d’animaux**.

------

### Étape 0 – Définir la structure de données 

1. Définir le type `t_personne` représentant un propriétaire :

- nom (chaîne de caractères dynamique)
- prénom (chaîne de caractères dynamique)
- téléphone (chaîne de caractères, max ~20)

2. Définir le type `t_animal` représentant un animal :

- nom (ex. "Rex")
- espèce (ex. "Chien", "Chat")
- race (ex. "Golden Retriever")
- Date de naissance (jour, mois et année)
- propriétaire : une personne allouée de façon statique

3. Dans un main créer l'animal suivant: Le chien Choupi, un Golden Retriever né le 20 janvier 2021 qui appartient à Romy Boulanger dont le numéro de téléphone est le 514-345-8967.

   À la fin de votre main, libérer l'espace alloué par votre animal.

4. Modifier la structure de données pour que le propriétaire soit alloué de façon dynamique. Modifiez votre main en conséquence. 

### Étape 1 – Modules `mod_personne` et `mod_animal`

1. Créez un module `mod_personne` qui encapsule le type `t_personne` et qui définit les fonctions suivantes: 

```
t_personne* init_personne(const char* nom, const char* prenom, const char* telephone);
void afficher_personne(const t_personne* p);
void free_personne(t_personne* p);
```



2. Créez le module `mod_animal` qui définit les fonctions suivantes 

```
t_animal* init_animal( const char* nom,
                 const char* espece,
                 const char* race,
                 int annee_naiss, int mois_naiss, int jour_naiss,
                 const t_personne* proprietaire);
void afficher_animal(const t_animal* a);
void free_animal(t_animal* a);
```

3. Écrire un petit programme `main.c` qui :

- crée  **deux propriétaires** (`t_personne`)
- crée  **trois animaux** (`t_animal`), avec des propriétaires
- appelle `print_animal` pour afficher les informations
- Libère la mémoire occupée à la fin.

------

### Étape 2 – Module Garderie

1. Créer le module `mod_garderie` qui définit une garderie comme un tableau dynamique d'animaux. 
2. Depuis le main, créer une garderie et y ajouter des animaux. 