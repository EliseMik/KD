#include <iostream>
using namespace std;

//laba 13.1
/*
int main()
{
	float a, i;
	cout<<"enter the price of 1 kg of candy"<<endl;
	cin >> a;
	for (i = 1; i < 11; i++)
	{
		cout << "for " << 0.1*i<< " kg of sweets you will pay " << i * 0.1 * a << endl;
	}
}
*/

//laba 13.2

/*
int main()
{
	float n, i,s;
	cout<< "enter an integer to find out the product of the multipliers (1.1 * 1.2 * 1.3 * . . . N)"<<endl;
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
	cout<<"enter a number to find the square of the given number"<<endl;
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
	cout<<"enter a real number A and an integer N (> 0) to find the sum of 1 + A + A2 + A3 + . . . + AN"<<endl;
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
	cout<<"enter a real number A and an integer N (> 0) to find the sum of 1 - A + A2 - A3 + . . . +- AN"<<endl;
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
