# Exercice: 

Qu'est-ce qui cloche avec cette fonction? 

```C
/* Crée un tableau, remplit nb_valeurs cases avec des 100 et retourne le tableau */
int* creer_tab_100(int nb_valeurs){
  int resultat[1000];
  if(nb_valeurs>1000) 
    nb_valeurs = 1000;
  for(int i=0; i<nb_valeurs; i++){
    resultat[i] = 100;
  }
  return resultat;
}
```

