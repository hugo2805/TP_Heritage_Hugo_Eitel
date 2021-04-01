#include "CVect2D.h"
#include "CVect3D.h"
#include <iostream>

using namespace std;

int main() 
{
	CVect2D v1(5, 6);
	v1.afficheLog();

	CVect2D v2(6, 7);
	CVect2D v3(v2);

	CVect2D v4;
	v4 = v3 + v2;
	cout << "addition de v3 et v2 : " << endl;
	v4.afficheLog();
	v4 = v3 - v2;
	cout << "soustraction de v3 et v2 : " << endl;
	v4.afficheLog();
	v4 = v3 / v2;
	cout << " division de v3 et v2 : " << endl;
	v4.afficheLog();
	v4 = v3 * v2;
	cout << " multiplication de v3 et v2 : " << endl;
	v4.afficheLog();

	CVect3D v5(5, 6, 7);
	
	v5.afficheLog();

	CVect3D v6;

	v6 = v5 + v5;
	cout << "addition de v5 et v5 : " << endl;
	cout << v6;

	v6 = v5 - v5;
	cout << "soustraction de v5 et v5 : " << endl;
	cout << v6;

	v6 = v5 / v5;
	cout << "division de v5 et v5 : " << endl;
	cout << v6;

	v6 = v5 * v5;
	cout << "multiplication de v5 et v5 : " << endl;
	cout << v6;


	CVect3D v7(5, 4, 7);
	cout << "v7 : " << endl;
	cout << v7;
	return 0;
}