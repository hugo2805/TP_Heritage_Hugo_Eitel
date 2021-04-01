#pragma once
#include "CVect2D.h"
#include <iostream>

using namespace std;

class CVect3D : public CVect2D  {

private:

	//Données membres
	float flt_z;

public:

	

	//Consturcteur
	//CVect3D();
	CVect3D(float flt_x=1, float flt_y=1, float flt_z=1);

	//Constructeur de copie
	CVect3D(CVect3D& v1);

	//Destructeur
	~CVect3D();


	//Accesseurs
	float getZ();



	//Mutateurs
	void setZ(float flt_z);
	

	

	//Méthode coincide, fcts amie independante de classe
	friend bool coincideVect3D( CVect3D& v1, CVect3D& v2);

	void afficheLog()const;

	// Surcharge opérateur = 
	CVect3D operator=( const CVect3D& v1);
	//Surcharge opérateur +
	CVect3D operator +(CVect3D& v1)const;
	//Surcharge opérateur -
	CVect3D operator -(CVect3D& v1)const;
	//Surcharge opérateur *
	CVect3D operator *(CVect3D& v1)const;
	//Surcharge opérateur /
	CVect3D operator /(CVect3D& v1);

	//Surcharge <<cout
	friend ostream& operator<<(ostream& os, const CVect3D& v1);
};
