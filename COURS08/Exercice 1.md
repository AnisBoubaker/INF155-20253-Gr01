## Exercice 1: 

Écrire la fonction `cacher_caracteres` qui reçoit deux tableaux: 

* Un tableau de caractères `phrase` contenant une phrase;
* Un tableau de caractères `a_cacher` contenant la liste de caractères à cacher. 

Votre fonction doit remplacer tous les caractères du tableau `phrase` qui se trouvent dans le tableau `a_cacher` par des astérisques (`'*'`).

Par exemple: 

* Si le tableau `phrase` contient les caractères: B,o,n,j,o,u,r, ,t,o,u,t, ,l,e, ,m,o,n,d,e
* Et si le tableau `a_cacher` contient : o, j, l, n

La fonction doit modifier le tableau `phrase` pour qu'il contienne: B,\*,\*,\*,\*,u,r, ,t,\*,u,t, ,\*,e, ,m,\*,\*,d,e