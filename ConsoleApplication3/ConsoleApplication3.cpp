#include <iostream>
#include <ctime>
#include <string>
#include <math.h>
#include <list>
using namespace std;




int cn(int a) {
    int first = 0;
    int second;
    int num = 0;
    int d = 1000000000;
    int del = 0;
    if (a < 100)
    {
        return -3;
    }
    else {
        while (first == 0)
        {
            num = a / d;
            if (num != 0 & first == 0) {
                first = num;
                del = d;
            }
            d = d / 10;

        }
        cout << first << "   " << del;
    }
}

int main()
{
    int a;
    cin >> a;
    int c = cn(a);
    / if (c == -3) {
        cout << "Нету 3 числа";
    }
    else {
        cout << c;
    } /




}


