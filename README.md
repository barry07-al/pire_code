## Explication du mauvais code

Concernant ce défi, on a décidé d'implementer le tri stupide en `langage c`.

Le principe de ce tri, est de trier la liste qui lui est passé en paramètre avec sa longueur de façon stupide comme son nom l'indique, pour cela, dans un premier temps on vérifie si la liste est trié, si c'est le cas on fait rien, si non on mélange aléatoirement les éléments de la liste et on révérifie encore, ces opérations sont répétées jusqu'à ce que la liste soit triée.

On rappelle que ce trie est un **trie sur place**, c'est à dire qui modifie la liste passé en paramètre.

On a décompeser ce processus en trois fonctions comme vous le verez dans le fichier pireCode.c.

Une prémière fonction **est_triee**, qui vérifie si la liste est triée ou pas.

Une deuxième fonction **melange**, qui mélange aléatoirement les éléments de la liste.

Et en dernière fonction **trie_stupide**, qui enfin trie la liste de façcon stupide..



## Essai (Main)

Pour l'éxécution du code, on construit une liste non triée contenant 8 éléments dans le `main` qu'on va trier avec notre algorithme de tri stupide.

Les éléments de cette liste sont : 2, 4, 3, 1, 0, 3, 5 et 8


Attention
---------

Donc le tri peut prendre énormement de temps, tout comme il peut marcher du premier coup.

Vous verez sur la console l'apparition des listes à chaque processus du mélange.
