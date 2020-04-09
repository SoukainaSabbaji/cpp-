#include "point.h"
#include <iostream>
using namespace std;

point::point (float A, float O)
{ 
	x = A; 
	y = O;
}
void point::deplace (float dx, float dy)
{ 
	x += dx;
	y += dy;
}
void point::affiche ()
{ 
	cout << "les coordonnes du point sont :\n" << x << "et " << y << "\n" ;
}

int main()
{
	point p (3, 7.25); // construction d'un point de coordonnées 1.25 2.5
	p.affiche (); // affichage du point
	p.deplace (1, 5.4); // déplacement de ce point
	p.affiche ();
	return 0;
}
