#include <iostream>
#include <stdlib.h>
using namespace std;
float FtoC(float temp);
float FtoK(float temp);
float CtoF(float temp);
float CtoK(float temp);
float KtoC(float temp);
float KtoF(float temp);
int check(float temp, char stopnie);

float FtoC(float temp)
{
	float wynik = (5.0 / 9.0) * (temp - 32.0);
	char stopnie = 'F';
	return wynik;
}
float FtoK(float temp)
{
	float wynik = (5.0 / 9.0) * (temp + 459.67);
	char stopnie = 'F';
	return wynik;
}
float CtoF(float temp)
{
	float wynik = temp * 9.0 / 5.0 + 32.0;
	char stopnie = 'C';
	return wynik;
}
float CtoK(float temp)
{
	float wynik = temp + 273.15;
	char stopnie = 'C';
	return wynik;
}
float KtoC(float temp)
{
	float wynik = temp - 273.15;
	char stopnie = 'K';
	return wynik;
}
float KtoF(float temp)
{
	float wynik = temp * 9.0 / 5.0 - 459.67;
	char stopnie = 'K';
	return wynik;
}
int check(float temp, char stopnie)
{
	if (stopnie == 'K' && temp < 0.0)
	{
		cout << "Nie ma takiej temperatury" << endl;
		return -999;
	}
	if (stopnie == 'C' && temp < -273.15)
	{
		cout << "Nie ma takiej temperatury" << endl;
		return -999;
	}
	if (stopnie == 'F' && temp < -459.67)
	{
		cout << "Nie ma takiej temperatury" << endl;
		return -999;
	}

}
void menu()
{
	cout << "1 - przelicz Fahr -> Celsius" << endl;
	cout << "2 - przelicz Fahr -> Kelwin" << endl;
	cout << "3 - przelicz Celsius -> Fahr" << endl;
	cout << "4 - przelicz Celsius -> Kelwin" << endl;
	cout << "5 - przelicz Kelwin -> Celsius" << endl;
	cout << "6 - przelicz Kelwin -> Fahr" << endl;
	cout << "7 - pokaz historie" << endl;
	cout << "8 - zakoncz dzialanie programu" << endl;
}
int main()
{
	int powrot = 1;
	double tab[100];
	int dataCounter = 0;
	char tab2[100];
	while (powrot == 1)
	{
		system("cls");
		menu();
		char stopnie;
		char e;
		int a;
		int x = 1;
		float temp;
		float temp2;
		cout << "Podaj cyfre od 1 do 8: " << endl;
		cin >> a;
		switch (a)
		{
		case 1:
			tab2[dataCounter] = 'F';
			tab2[dataCounter + 1] = 'C';
			break;
		case 2:
			tab2[dataCounter] = 'F';
			tab2[dataCounter + 1] = 'K';
			break;
		case 3:
			tab2[dataCounter] = 'C';
			tab2[dataCounter + 1] = 'F';
			break;
		case 4:
			tab2[dataCounter] = 'C';
			tab2[dataCounter + 1] = 'K';
			break;
		case 5:
			tab2[dataCounter] = 'K';
			tab2[dataCounter + 1] = 'C';
			break;
		case 6:
			tab2[dataCounter] = 'K';
			tab2[dataCounter + 1] = 'F';
			break;
		}
		switch (a)
		{
		case 1:
			cout << "Podaj temperature, ktora chcesz przeliczyc: ";
			cin >> temp;
			stopnie = 'F';
			temp2 = FtoC(temp);
			check(temp, stopnie);
			if (check(temp, stopnie) == -999.0)
			{
				cout << "Nacisnij e" << endl;
				cin >> e;
				if (e == 'e')
					powrot = 1;
				continue;
			}
			else
			{
				cout << temp << " --> " << temp2 << endl;
				cout << "Nacisnij e" << endl;
				cin >> e;
				if (e == 'e')
					powrot = 1;
				tab[dataCounter] = temp;
				tab[dataCounter + 1] = temp2;
				dataCounter += 2;
				continue;
			}
		case 2:
			cout << "Podaj temperature, ktora chcesz przeliczyc: ";
			cin >> temp;
			stopnie = 'F';
			temp2 = FtoK(temp);
			check(temp, stopnie);
			if (check(temp, stopnie) == -999.0)
			{
				cout << "Nacisnij e" << endl;
				cin >> e;
				if (e == 'e')
					powrot = 1;
				continue;
			}
			else
			{
				cout << temp << " --> " << temp2 << endl;
				cout << "Nacisnij e" << endl;
				cin >> e;
				if (e == 'e')
					powrot = 1;
				tab[dataCounter] = temp;
				tab[dataCounter + 1] = temp2;
				dataCounter += 2;
				continue;
			}
		case 3:
			cout << "Podaj temperature, ktora chcesz przeliczyc: ";
			cin >> temp;
			stopnie = 'C';
			temp2 = CtoF(temp);
			check(temp, stopnie);
			if (check(temp, stopnie) == -999.0)
			{
				cout << "Nacisnij e" << endl;
				cin >> e;
				if (e == 'e')
					powrot = 1;
				continue;
			}
			else
			{
				cout << temp << " --> " << temp2 << endl;
				cout << "Nacisnij e" << endl;
				cin >> e;
				if (e == 'e')
					powrot = 1;
				tab[dataCounter] = temp;
				tab[dataCounter + 1] = temp2;
				dataCounter += 2;
				continue;
			}
		case 4:
			cout << "Podaj temperature, ktora chcesz przeliczyc: ";
			cin >> temp;
			stopnie = 'C';
			temp2 = CtoK(temp);
			check(temp, stopnie);
			if (check(temp, stopnie) == -999.0)
			{
				cout << "Nacisnij e" << endl;
				cin >> e;
				if (e == 'e')
					powrot = 1;
				continue;
			}
			else
			{
				cout << temp << " --> " << temp2 << endl;
				cout << "Nacisnij e" << endl;
				cin >> e;
				if (e == 'e')
					powrot = 1;
				tab[dataCounter] = temp;
				tab[dataCounter + 1] = temp2;
				dataCounter += 2;
				continue;
			}
		case 5:
			cout << "Podaj temperature, ktora chcesz przeliczyc: ";
			cin >> temp;
			stopnie = 'K';
			temp2 = KtoC(temp);
			check(temp, stopnie);
			if (check(temp, stopnie) == -999.0)
			{
				cout << "Nacisnij e" << endl;
				cin >> e;
				if (e == 'e')
					powrot = 1;
				continue;
			}
			else
			{
				cout << temp << " --> " << temp2 << endl;
				cout << "Nacisnij e" << endl;
				cin >> e;
				if (e == 'e')
					powrot = 1;
				tab[dataCounter] = temp;
				tab[dataCounter + 1] = temp2;
				dataCounter += 2;
				continue;
			}
		case 6:
			cout << "Podaj temperature, ktora chcesz przeliczyc: ";
			cin >> temp;
			stopnie = 'K';
			temp2 = KtoF(temp);
			check(temp, stopnie);
			if (check(temp, stopnie) == -999.0)
			{
				cout << "Nacisnij e" << endl;
				cin >> e;
				if (e == 'e')
					powrot = 1;
				continue;
			}
			else
			{
				cout << temp << " --> " << temp2 << endl;
				cout << "Nacisnij e" << endl;
				cin >> e;
				if (e == 'e')
					powrot = 1;
				tab[dataCounter] = temp;
				tab[dataCounter + 1] = temp2;
				dataCounter += 2;
				continue;
			}
		case 7:
			cout << "HISTORIA: " << endl;
			for (int i = 0; i < dataCounter; i = i + 2)
			{
				cout << "<" << x << ">" << tab[i] << tab2[i] << " " << "=" << " " << tab[i + 1] << tab2[i + 1] << endl;
				x = x + 1;
			}
			return 0;
		default:
			return 0;
		}
	}
}



