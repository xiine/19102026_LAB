#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
    // Zadanie 1
    /*int a, b;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    if (a == b) {
        cout << "Podane liczby są rowne";
    } else if (a < b) {
        cout << "Liczba " << a << "jest mniejsza od liczby" << b;
    } else {
        cout << "Liczba " << a << "jest wieksza od liczby" << b;
    }*/

    // Zadanie 2
    /*int a, b;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    if (a != b) {
        if (a < b) {
            cout << "Liczba " << a << "jest mniejsza od liczby" << b;
        } else {
            cout << "Liczba " << a << "jest wieksza od liczby" << b;
        }
    } else {
        cout << "Podane liczby są rowne";
    }*/
    
    // Zadanie 3
    /*double r = 0.0;
    cout << "Podaj liczbe r w przedziale od 0.0 do 1.0: ";
    cin >> r;
    if (r >= 0.7 && r <= 1) {
        cout << "Wystepuje bardzo silna korelacja dodatnia";
    }
    else if (r >= 0.5) {
        cout << "Wystepuje silna korelacja dodatnia";
    }
    else if (r >= 0.3) {
        cout << "Wystepuje umiarkowana korelacja dodatnia";
    }
    else if (r >= 0.2) {
        cout << "Wystepuje slaba korelacja dodatnia";
    }
    else if (r >= 0) {
        cout << "brak korelacji";
    }
    else {
        cout << "Podano zla wartosc";
    }*/

    // Zadanie 4
    /*double a, b;
    char znak;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;
    cout << "Podaj znak: ";
    cin >> znak;

    switch (znak) {
        case '+':
            cout << "Wynik dodawania " << a << " + " << " b " << " = " << a + b;
            break;

        case '-':
            cout << "Wynik dodawania " << a << " - " << " b " << " = " << a - b;
            break;

        case '*':
            cout << "Wynik dodawania " << a << " * " << " b " << " = " << a * b;
            break;

        case '/':
            if (a == 0 || b == 0) {
                cout << "Nie dziel przez 0!";
            }
            else {
                cout << "Wynik dodawania " << a << " / " << " b " << " = " << a / b;
            }
            break;
    }*/

    // Zadanie 5
    /*for (int i = 0; ; i++) {
        cout << i;
    }
    while (true) {
        cout << "Siema";
    }*/

    // Zadanie 6
    /*double a, b;
    char znak;
    bool next = false;
    string ans = "";
  

    do {
        cout << "Podaj pierwsza liczbe: ";
        cin >> a;
        cout << "Podaj druga liczbe: ";
        cin >> b;
        cout << "Podaj znak: ";
        cin >> znak;

        switch (znak) {
            case '+':
                cout << "Wynik dodawania " << a << " + " << " b " << " = " << a + b << endl;
                break;

            case '-':
                cout << "Wynik dodawania " << a << " - " << " b " << " = " << a - b << endl;
                break;

            case '*':
                cout << "Wynik dodawania " << a << " * " << " b " << " = " << a * b << endl;
                break;

            case '/':
                if (a == 0 || b == 0) {
                    cout << "Nie dziel przez 0!";
                }
                else {
                    cout << "Wynik dodawania " << a << " / " << " b " << " = " << a / b << endl;
                }
                break;
            }
        cout << "Zakończyć swoje działanie? TAK/NIE ";
        cin >> ans;
        if (ans == "TAK") {
            next = false;
        }
        else {
            next = true;
        }
    } while (next);*/

    // Zadanie 7
    /*bool go = true;
    int i = 0;
    while (go) {
        
        if (i % 2 != 0) {
            cout << i;
        }
        i++;
        if (i == 200) {
            break;
        }
    }*/

    // Zadanie 8
    /*int n;
    cout << "Podaj liczbę: ";
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << "Znaleziono dzielnik; przerywanie petli";
            break;
        }
    }*/

    // Zadanie 9
    /*int temp;
    cout << "Podaj temperature w celsjuszach: ";
    cin >> temp;

    if (temp < 0) {
        cout << "Mroz";
    }
    else if (temp >= 0 && temp < 10) {
        cout << "Zimno";
    }
    else if (temp >= 10 && temp < 20) {
        cout << "Umiarkowanie";
    }
    else if (temp >= 20 && temp < 30) {
        cout << "Ciepło";
    }
    else if (temp >= 30) {
        cout << "Gorąco";
    }*/

    // Zadanie 10
    /*int a, b, c;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    cout << "Podaj liczbe c: ";
    cin >> c;
    if (a > b && b > c) {
        cout << a << " jest największe";
    }
    if (b > a && a > c) {
        cout << b << " jest największe";
    }
    if (c > a && a > b) {
        cout << c << " jest największe";
    }
    if (a == b && b == c) {
        cout << "wszystkie liczby są równe";
    }*/

    // Zadanie 11
    /*int rok;
    cout << "Podaj rok: ";
    cin >> rok;
    if (rok % 4 == 0 && rok % 100 != 0) {
        cout << rok << " rok jest przystępny";
    }*/

    // Zadanie 12
    /*int opcja;
    cout << "Wybierz opcje z menu:" << endl;
    cout << "1 - wyświetlenie komunikatu Start" << endl;
    cout << "2 - wyświetlenie komunikatu Ustawienia" << endl;
    cout << "3 - wyświetlenie komunikatu Pomoc" << endl;
    cout << "4 - wyświetlenie komunikatu Koniec" << endl;
    cin >> opcja;
    switch (opcja) {
        case 1:
            cout << "Start";
            break;
        case 2:
            cout << "Ustawienia";
            break;
        case 3:
            cout << "Pomoc";
            break;
        case 4:
            cout << "Koniec";
            break;
        default:
            cout << "Podano zla opcje";
            break;
    }*/

    // Zadanie 13
    /*int ocena;
    cout << "Podaj ocene: ";
    cin >> ocena;
    switch (ocena) {
        case 1:
            cout << "ocena niedostateczna" << endl;
            break;
        case 2:
            cout << "ocena dopuszczajaca" << endl;
            break;
        case 3:
            cout << "ocena dostateczna" << endl;
            break;
        case 4:
            cout << "ocena dobra" << endl;
            break;
        case 5:
            cout << "ocena bardzo dobra" << endl;
            break;
        default:
            cout << "Podales zla ocene" << endl;
            break;
    }*/

    // Zadanie 14
    /*int sum = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) continue;

        sum += i;
    }

    cout << sum << endl;*/

    // Zadanie 15
    /*int i = 7;
    while (true) {
        if (i > 50) break;
        i += 7;
    }*/

    // Zadanie 16
    /*for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            int wynik = i * j;
            if (wynik < 10) {
                cout << "  " << wynik;
            } else {
                cout << " " << wynik;
            }
        }
        cout << endl;
    }*/

    // Zadanie 17
    /*int num, i = 0;
    cout << "Podaj liczbe: ";
    cin >> num;

    while (num > 0) {
        num /= 10;
        i++;
    }
    cout << i;*/

    // Zadanie 18
    /*int n;
    cout << "Podaj liczbe: ";
    cin >> n;

    bool prime = true;

    if (n < 2) {
        prime = false;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % 2 == 0) {
                prime = false;
                break;
            }
        }
    }

    if (prime) {
        cout << "Liczba " << n << " jest pierwsza";
    } else {
        cout << "Liczba " << n << " nie jest pierwsza";
    }*/

    // Zadanie 19
    /*int opcja;
    bool kontynuuj = true;
    
    while (kontynuuj) {
        cout << "1 - wyświetlenie komunikatu Start" << endl;
        cout << "2 - wyświetlenie komunikatu Ustawienia" << endl;
        cout << "3 - wyświetlenie komunikatu Pomoc" << endl;
        cout << "4 - wyświetlenie komunikatu Koniec" << endl;
        cout << "Wybierz opcje z menu: ";
        cin >> opcja;
        switch (opcja) {
        case 1:
            cout << "Start" << endl;
            break;
        case 2:
            cout << "Ustawienia" << endl;
            break;
        case 3:
            cout << "Pomoc" << endl;
            break;
        case 4:
            cout << "Koniec" << endl;
            kontynuuj = false;
            break;
        default:
            cout << "Podano zla opcje" << endl;
            break;
        }
    }*/

    // Zadanie 20
    /*double s = 0, prog = 10.0;
    int it = 0;
    while (s < prog) {
        s += 0.1;
        cout << "s: " << s << endl;
        it++;
    }
    cout << "Koncowa suma: " << s << "\nIlosc iteracji: " << it << endl;*/

    return 0;
}