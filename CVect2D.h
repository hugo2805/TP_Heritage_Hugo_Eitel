#pragma once

class CVect2D {



private:
	//non accessible depuis la classe enfant
	//Données membres
	float flt_x;
	float flt_y;



public:

	//Consturcteur
	CVect2D();
	CVect2D(float flt_x, float flt_y);

	//Constructeur de copie
	CVect2D(CVect2D& v);

	//Destructeur
	~CVect2D();


	//Accesseurs
	float getX()const;
	float getY()const;
	

	//Mutateurs
	void setX(float flt_x = 8.3);
	void setY(int flt_y = 7.2);
	
	//Opérations usuelles
	void vect2Daddition();
	void vect2Dsoustraction();
	void vect2Dmultiplication();
	void vect2Ddivision();

	//Méthode coincide, fcts amie independante de classe
	friend bool coincideVect2D(const CVect2D& v1, const CVect2D& v2);

	void afficheLog()const;

	// Surcharge opérateur = 
	CVect2D operator =(const CVect2D& v1);

	// Surcharge opérateur + 
	CVect2D operator +(CVect2D& v1)const;

	// Surcharge opérateur -
	CVect2D operator -(CVect2D& v1)const;

	// Surcharge opérateur *
	CVect2D operator *(CVect2D& v1)const;

	// Surcharge opérateur /
	CVect2D operator /(CVect2D& v1);









};