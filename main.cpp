#include <iostream>

using namespace std;

int potegowanie(int podstawa, int wykladnik)
    {
        int wynik = 1;

        for(int i = 0; i < wykladnik; i++)
        wynik *= podstawa;

        return wynik;
    }

int main()
{
    int podstawa, wykladnik;

    cout << "Potegowanie - wersja 3.0" << endl;

    cout << "\n Podstawa: ";
    cin >> podstawa;

    cout << "\n Wykladnik: ";
    cin >> wykladnik;

    cout << "\n " << podstawa << " do potegi " << wykladnik << " = " << potegowanie(podstawa, wykladnik)<< endl;

    return 0;
}
