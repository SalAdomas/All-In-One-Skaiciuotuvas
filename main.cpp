#include <iostream>
#include <strmif.h>
#include <math.h>
#include <cmath>
#include <stdio.h>
#include <manipulations.h>
using namespace std;

int main()
{
    int xx;
    int bb;
    int dd;
    int renkas;
    float pp, a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, r, s, t, u, v, z, x1, x2, x3, x4, prst, pita, diskrim, dis; //kaikurie yra nenaudojami..
    cout << "\nKa noretumete daryti?"<<endl;                                                                                //zinau, kad nera labai tvarkinga...
    cout << "\nPitagoro skaiciuokle - 1"<<endl;
    cout << "Diskriminanto skaiciuokle - 2"<<endl;
    cout << "Koordinaciu skirtumo skaiciuokle - 3"<<endl;
    cout << "Paprastas skaiciuotuvas - 4\n"<<endl;
    cin >>renkas;

    switch(renkas)
    {
    case 1:
        cout << "Pasirinkai Pitagora"<<endl;
        float a, b, rezultatas;

	cout << "A krastine ";
	cin >> a;
	cout << "B krastine ";
	cin >> b;
	rezultatas = a * a + b * b;
	rezultatas = sqrt(rezultatas);
	cout << "Pitagoro tearoma yra: " << rezultatas << '.' << endl;
	return main();
        break;
    case 2:
        cout << "Pasirinkai diskriminanta"<<endl;
            float rez;
    cout << "Iveskite A = ";
    cin >> a;
    cout << "Iveskite B = ";
    cin >> b;
    cout << "Iveskite C = ";
    cin >> c;
    d = b * b - 4 * a * c;
    cout << "Diskriminantas yra : " << d << '.' << endl;

    if (d > 0) {
        rez = sqrt(d);
        e = -b - rez;
        f = a * 2;
        x1 = e / f;
        cout << "X1 Atsakymas : " << x1 << '.' << endl;
        g = -b + rez;
        h = a * 2;
        x2 = g / h;
        cout << "X2 Atsakymas : " << x2 << '.' << endl;
        return main();
    }

    if (d < 0) {
        cout << "Rezultato nera";
        return main();
    }

    if (d = 0) {
        i = 2 * a;
        x3 = -b / i;
        cout << "Diskriminantas lygus 0 " << x3 << '.' << endl;
        return main();
        break;
    case 3:
        cout <<"Pasirinkai koordinaciu skirtumo skaiciuokle."<<endl;
        float x1, x2, y1, y2, a, b, c, d, e, f, g, rezke;
    cout << "Iveskite x1 koordinates " << '.' << endl;
    cin >> x1;
    cout << "Iveskite x2 koordinates " << '.' << endl;
    cin >> x2;
    cout << "Inveskite y1 koordinates " << '.' << endl;
    cin >> y1;
    cout << "Inveskite y2 koordinates " << '.' << endl;
    cin >> y2;
    a = x1 - x2;
    b = a * a;
    c = y1 - y2;
    d = c * c;
    e = b + d;
    f = sqrt(e);
    cout << "Atstumas yra = "<< f;
    return main();
    break;
        case 4:
        cout << "Pasirinkai skaiciuotuva"<<endl;
        char kodas;
    float pirm, antr;
    cout<<"Iveskite norima simboli veiksmui ( - , +, / , * )" << endl;
    cin>>kodas;
    cout<<"Iveskite pirma skaiciu veiksmui" << endl;
    cin >> pirm;
    cout<<"Iveskite antra skaiciu veiksmui" << endl;
    cin >> antr;

    switch (kodas)
    {
    case '-':
        cout << pirm << " - " << antr << " = " << pirm - antr;
        break;
    case '+':
        cout << pirm << " + " << antr << " = " << pirm + antr;
        break;
    case '/':
        cout << pirm << " / " << antr << " = " << pirm / antr;
        break;
    case '*':
        cout << pirm << " * " << antr << " = " << pirm * antr;
        break;
    default:
        cout << "Klaida, tokio pasirinkimo net nera!";
        break;

    }




    return main();

    }
    }
}
