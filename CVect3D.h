#pragma once
#include "CVect2D.h"

class CVect3D : public CVect2D  {

private:

	//Données membres
	float flt_z;

public:

	//Consturcteur
	CVect3D(float flt_x=1, float flt_y=1, float flt_z=1);

	//Constructeur de copie
	CVect3D(CVect3D& v);

	//Destructeur
	~CVect3D();


	//Accesseurs
	float getZ();



	//Mutateurs
	void setZ(float flt_z);
	

	

	//Méthode coincide, fcts amie independante de classe
	friend bool coincideVect3D(const CVect3D& v1, const CVect3D& v2, const CVect3D& v3);

	void afficheLog()const;

	// Surcharge opérateur = 
	CVect3D operator=(const CVect3D& v1);
	//Surcharge opérateur +
	CVect3D operator +(CVect3D& v1)const;
	//Surcharge opérateur -
	CVect3D operator -(CVect3D& v1)const;
	//Surcharge opérateur *
	CVect3D operator *(CVect3D& v1)const;
	//Surcharge opérateur /
	CVect3D operator /(CVect3D& v1);

};
