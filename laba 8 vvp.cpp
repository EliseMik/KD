//laba 8

//laba 8.1
/*

#include <iostream>
using namespace std;
int main()
{
	float x;
	int a;
        cout<< "enter Number of bytes to count kilobytes" <<endl;
	cin >> x;
	a = x / 1024;              //перевод байтов в килобайты
	cout <<x<<"b = " <<a <<"Kb" <<endl;
	return 0;
}
*/

//laba 8.2
/*
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b;
	cout<< "enter numbers a, b (a>b)<<endl;
	cin >> a >> b;
	cout << "b in a: " << a / b << endl;      // кол-во целых отрезков б в а
	return 0;
}
*/

//laba 8.3
/*
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b;
	cout<< "enter numbers a, b (a>b)<<endl;
	cin >> a >> b;
	cout << "unoccupied part a, consisting of b: " << a%b << endl;        //незанятая часть а, занятая отрезками б
	return 0;
}
*/

//laba 8.4
/*
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a;
	cout<< "enter two-digit number "<<endl;
	cin >> a;
	cout << a % 10 << a / 10 << endl;       //поменяли цифры местами
	return 0;
}

*/

//laba 8.5
/*
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a;
	cout<< "enter three-digit number "<<endl;
	cin >> a;
	cout << a % 100 << a / 100 << endl;      //зачеркнули цифру слева, приписали справа
	return 0;
}
*/


