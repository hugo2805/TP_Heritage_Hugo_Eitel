#include "CVect2D.h"
#include <iostream>

using namespace std;

CVect2D::CVect2D()
{
	this->flt_x = 15.3;
	this->flt_y = 11.2;
}

//constructeur
CVect2D::CVect2D(float flt_x, float flt_y)
{
	this->flt_x = flt_x;
	this->flt_y = flt_y;
}

// constructeur de copie
CVect2D::CVect2D(CVect2D& v)
{
	this->flt_x = v.flt_x;
	this->flt_y = v.flt_y;
}
// destructeur
CVect2D::~CVect2D()
{
}

float CVect2D::getX() const
{
	return flt_x;
}

float CVect2D::getY() const
{
	return flt_y;
}

void CVect2D::setX(float flt_x)
{
	this->flt_x = flt_x;
}

void CVect2D::setY(int flt_y)
{
	this->flt_y = flt_y;
}

//Opérations usuelles
void CVect2D::vect2Daddition()
{
	this->flt_x = flt_x + flt_y;
	this->flt_y = flt_x + flt_y;
}

void CVect2D::vect2Dsoustraction()
{
	this->flt_x = flt_x - flt_y;
	this->flt_y = flt_x - flt_y;
}

void CVect2D::vect2Dmultiplication()
{
	this->flt_x = flt_x * flt_y;
	this->flt_y = flt_x * flt_y;
}

void CVect2D::vect2Ddivision()
{
	if (flt_x != 0 && flt_y != 0) {
		this->flt_x = flt_x / flt_y;
		this->flt_y = flt_x / flt_y;
	}
}


//fonction coincide
bool coincideVect2D(const CVect2D& v1, const CVect2D& v2)
{
		return v1.flt_x == v2.flt_x && v1.flt_y == v2.flt_y;
}

//fonction affiche
void CVect2D::afficheLog() const
{
	cout << "vect2D X :"<< flt_x << "vect2D Y :"<< flt_x << endl;
}

CVect2D CVect2D::operator=(CVect2D& v1) const
{
	CVect2D flt_temp;
	flt_temp.flt_x = v1.flt_x;
	flt_temp.flt_y = v1.flt_y;

	return flt_temp;
}

CVect2D CVect2D::operator+(CVect2D& v1) const
{
	CVect2D flt_temp;
	flt_temp.flt_x = this->flt_x + v1.flt_x;
	flt_temp.flt_y = this->flt_y + v1.flt_y;

	return flt_temp;
}

CVect2D CVect2D::operator-(CVect2D& v1) const
{
	CVect2D flt_temp;
	flt_temp.flt_x = this->flt_x - v1.flt_x;
	flt_temp.flt_y = this->flt_y - v1.flt_y;

	return flt_temp;
}

CVect2D CVect2D::operator*(CVect2D& v1) const
{
	CVect2D flt_temp;
	flt_temp.flt_x = this->flt_x * v1.flt_x;
	flt_temp.flt_y = this->flt_y * v1.flt_y;

	return flt_temp;
}

CVect2D CVect2D::operator/(CVect2D& v1)
{
	CVect2D flt_temp;
	flt_temp.flt_x = this->flt_x / v1.flt_x;
	flt_temp.flt_y = this->flt_y / v1.flt_y;

	return flt_temp;
}


