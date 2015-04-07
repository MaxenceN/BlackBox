#ifndef LASER_H_INCLUDED
#define LASER_H_INCLUDED

typedef struct Laser Laser;

struct Laser
{
    int Coordonnee[1][1];
    int Direction[1][1]; //La direction du laser sera comprise entre [-1][-1] et [+1][+1]
    int Voisin[3]; /*  Voisin[0] correspond au voisin gauche, voisin[1] a celui du milieu, et voisin[2] à celui de droite par rapport à la direction
                    Chaque élément du tableau vaut 0 si il n'y a pas d'atomes voisins,et 1 s'il y a un atome */
};

int InitialiserPlateau(int taille);

#endif // LASER_H_INCLUDED
