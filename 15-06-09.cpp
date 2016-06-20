#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
// Questa procedura legge da tastiera:
// - l'importo che si vuole investire controllando che tale valore non sia minore o uguale a ZERO;
// - il numero minimo e massimo degli anni di durata dell'investimento. Il valore minimo non deve essere
// inferiore a 5 anni mentre il massimo non deve essere superiore a 30 anni, OVVIAMENTE il minimo non
// deve superare il massimo ed il massimo non deve essere inferiore al minimo.
void inserisci_dati(int& inv, int& min, int& max)
{
		
	do{
	cout << "Inserisci la cifra che vuoi investire: ";
	cin >> inv;
	cout << endl;
	if (inv<0)
	{
		cout << "La cifra deve essere maggiore di zero!!" << endl;
	}
}
while (inv<0);
	do{
	cout << "Inserisci il numero minimo di anni di durata dell'investimento[>5]: ";
	cin >> min;
	cout << endl;
	if (min<5)
	{
		cout << "L'investimento non puo' durare meno di 5 anni !!!" << endl;
	}
}
while (min<5);
	do{
	cout << "Inserisci il numero massimo di anni di durata dell'investimento[<30]";
	cin >> max;
	cout << endl;
	if (max>30)
	{
		cout << "L'investimento non puo' durare piu' di 30 anni !!!" << endl;
	}
}
while (max>30);
}
// Questa procedura stampa a video in forma tabellare, con colonne formattate, il piano di rendimento sulla base
// dell'investimento iniziale ed a partire della durata massima a quella minima, con decrementi di 5 anni, per tassi fissi
// da 2% al 7%, con incremento dello 0.5%
void piano_di_rendimento(int inv, int min, int max)
{
	float capitale;
	
	cout << "Tasso " ;
	for (int i=min;i<max+1;i=i+5) cout <<setw(2) << i << " anni ";
		cout << endl;
		for (float j=2.00;j<7.05;j=j+0.5)
		{
		cout << fixed << setprecision(2) << setw(3) << j << " ";
		for (int i=min;i<max+1;i=i+5)
		{
		capitale = inv * pow(1 + j/100,i);
		cout << fixed << setprecision(2) << setw(8) << capitale << " ";
	}
	cout << endl;
	}
}

int main()
{
	int inv,min,max;
	inserisci_dati(inv,min,max);
	piano_di_rendimento(inv,min,max);
	}
