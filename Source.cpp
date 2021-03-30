#include "Complex.h"
#include "Object.h"
#include <iostream>

using namespace std;

int main()
{
	Complex l;
	cin >> l;
	cout << l;
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	l.Sub();
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	l.Div();
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	l.Conj1();
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	l.Conj2();
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	cout << endl;
	cout << "inkrement(prefiksna forma)" << endl;
	++l; cout << l;
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	l.Sub();
	l.Div();
	l.Conj1();
	l.Conj2();
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	cout << endl;
	cout << "dykryment(prefiksna forma)" << endl;
	--l; cout << l;
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	l.Sub();
	l.Div();
	l.Conj1();
	l.Conj2();
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	cout << endl;
	cout << "inkryment(postfiksna forma)" << endl;
	l++; cout << l;
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	l.Sub();
	l.Div();
	l.Conj1();
	l.Conj2();
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	cout << endl;
	cout << "dykrement(postfiksna forma)" << endl;
	l--; cout << l;
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	l.Sub();
	l.Div();
	l.Conj1();
	l.Conj2();
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	return 0;
}