#include <iostream>
using namespace std;

//laba 13.1
/*
int main()
{
	float a, i;
	cin >> a;
	for (i = 1; i < 11; i++)
	{
		cout << i * 0.1 * a << endl;
	}
}
*/

//laba 13.2

/*
int main()
{
	float n, i,s;
	cin >> n;
	s = 1;
	for (i = 1; i < (n-1)*10+1; i++)
	{
		s *= (1 + i*0.1);
		
	}
	cout << s << endl;
}
*/

//laba 13.3
/*
int main()
{
	float n, i, s;
	cin >> n;
	s = 0;
	for (i = 1; i < 2*n; i+=2)
	{
		s +=i;
		cout << s << endl;
	}
	
}
*/

//laba 13.4
/*
int main()
{
	int i,n;
	float a,x,s;
	cin >> a>>n;
	s = 1;
	x = 1;
	for (i = 0; i < n; i++)
	{
		x *= a;
		s += x;
	}
	cout << s << endl;
}
*/

//laba 13.5

/*
int main()
{
	int i, n;
	float a, x, s,b;
	cin >> a >> n;
	s = 1;
	x = 1;

	for (i = 0; i < n; i++)
	{
		b = ((i+1) % 2);  //чет = 1, нечет = 0
		x *= a;
		s += x;
		s -= 2 * x * b;
	}
	cout << s << endl;
}
*/
