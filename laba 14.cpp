#include<iostream>
using namespace std;

//laba 14.1

/*   
int main()
{
	int a, b, i, j, x;
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
	cin >> a >> b;
	while (a+1>b)
	{
		a -= b;
	}
	cout << a << endl;
}
*/

//laba 14.3

/*
int main()
{
	int n, i, k;
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
	cin >> p;
	s = 1000;
	p = 1 + (p * 0.01);
	i = 0;
	while (s < 1100)
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