#include "CVect3D.h"
#include <iostream>

using namespace std;
//Constructeur
CVect3D::CVect3D(float flt_x, float flt_y, float flt_z):CVect2D(flt_x, flt_y)
{
	this->flt_z = flt_z;
}

//constructeur de copie
CVect3D::CVect3D(CVect3D& v1) : CVect2D(v1)
{
	this->flt_z = v1.flt_z;
}

//destructeur
CVect3D::~CVect3D()
{
}

//acceseur
float CVect3D::getZ()
{
	return this->flt_z;
}

void CVect3D::setZ(float flt_z)
{
	this->flt_z = flt_z;
}

//fonction affiche
void CVect3D::afficheLog() const
{
	CVect2D::afficheLog();
	cout << " Z: " << this->flt_z << endl;
}

//surcharge opérateur
CVect3D CVect3D::operator=(const CVect3D& v1)
{
	this->setX(v1.getX());
	this->setY(v1.getY());
	this->flt_z = v1.flt_z;

	return *this;
}

CVect3D CVect3D::operator+(CVect3D& v1) const
{

	CVect3D flt_temp;
	flt_temp.setX(this->getX() + v1.getX());
	flt_temp.setY(this->getY() + v1.getY());
	flt_temp.flt_z = this->flt_z + v1.flt_z;

	return flt_temp;
}

CVect3D CVect3D::operator/(CVect3D& v1)
{
	CVect3D flt_temp;
	if (v1.getX() != 0 && v1.getY() != 0 && flt_z != 0) {
		flt_temp.setX(this->getX() / v1.getX());
		flt_temp.setY(this->getY() / v1.getY());
		flt_temp.flt_z = this->flt_z / v1.flt_z;

		return flt_temp;
	}
	return *this;
}

CVect3D CVect3D::operator-(CVect3D& v1) const
{
	CVect3D flt_temp;
	flt_temp.setX(this->getX() - v1.getX());
	flt_temp.setY(this->getY() - v1.getY());
	flt_temp.flt_z = this->flt_z - v1.flt_z;

	return flt_temp;
}

CVect3D CVect3D::operator*(CVect3D& v1) const
{
	CVect3D flt_temp;
	flt_temp.setX(this->getX() * v1.getX());
	flt_temp.setY(this->getY() * v1.getY());
	flt_temp.flt_z = this->flt_z * v1.flt_z;

	return flt_temp;
}


//fonction coincide
bool coincideVect3D(const CVect3D& v1, const CVect3D& v2, const CVect3D& v3)
{
	return	v1.getX() == v2.getX() == v3.getX() &&
		v1.getY() == v2.getY() == v3.getY() &&
		v1.flt_z == v2.flt_z == v3.flt_z;
}
