#include <iostream>
#include <ctime>
#include <string>
#include <math.h>
#include <list>
using namespace std;

void kvadrat(int ch)
{
	for (int i = 1; i <= ch; i++) {
		cout << i * i << ' ';

	}



}


int main()
{
	int chislo;
	cin >> chislo;
	kvadrat(chislo);
	

}


