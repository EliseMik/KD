#include<iostream>
using namespace std;

//laba 14.1

/*   
int main()
{
	int a, b, i, j, x;
	cout<<"Enter positive integers A and B (A < B) to output all integers from A to B inclusive"<<endl;
	cin >> a >> b;
	x = a;
	j = 0;
	while (j < a)
	{
		cout << a;
		j++;
	}
	cout << endl;

	for (i = 0; i < b - a - 1; i++)
	{
		x += 1;
		j = 0;
		while (j < x)
		{
			cout << x;
			j++;
		}
		cout << endl;
	}
	j = 0;
	while (j < b)
	{
		cout << b;
		j++;
	}
	cout << endl;

}
*/

//laba 14.2

/*
int main()
{
	int a, b;
	cout<<"Enter the positive numbers A and B (A > B). On a segment of length A, the maximum possible number of segments of length B is placed (without overlaps)."<<endl;
	cin >> a >> b;
	while (a+1>b)
	{
		a -= b;
	}
	cout << "the length of the unoccupied part of the segment A is  " << a << endl;
}
*/

//laba 14.3

/*
int main()
{
	int n, i, k;
	cout<<"enter the number N (> 1) to output the smallest of the integers K for which the sum is (1 + 2 + . . . + K)"<<endl;
	cout<<" will be greater than or equal to N, and this sum itself."<<endl;
	cin >> n;
	k = 0;
	for (i = 1; k < n; i++)
	{
		k += i;
	}
	cout << k << endl;
}
*/

//laba 14.4

/*
int main()
{
	float p, s, i;
	cout<< "The initial deposit in the bank is 1000 rubles. After each month, the deposit amount increases by P percent of the available amount (P is a real number, 0 < P < 25). " <<endl;
	cout<< "Enter P to determine how many months the deposit amount will exceed 1100 rubles. "<<endl;
	cin >> p;
	s = 1000;
	p = 1 + (p * 0.01);
	i = 0;
	while (s-1 < 1100)
	{
		s *= p;
		i++;
	}
	cout << i << endl;
}
*/

//laba 14.5

/*
int main()
{
	int t,a,b;
	cout<<"Enter positive integers A and B to find their greatest common divisor (GCD)"<<endl;
	cin >> a >> b;
	while (b != 0)
	{
		t = b;
		b = a % b;
		a = t;
	}
	cout << t << endl;
}
*/

//laba 14.6

/*
int main()
{
	int n, i, k, z;
	cout<< "Enter the integer N (> 1), which is the Fibonacci number: N = FK to find the integer K - the ordinal number of the Fibonacci number N."<<endl;
	cin >> n;
	k = 0;
	i = 1;
	z = 1;
	while (k != n)
	{
		k += i;
		i = k - i;
		z++;
	}
	cout << z << endl;
}
*/
