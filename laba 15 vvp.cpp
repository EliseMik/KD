#include <iosteream>
using namespace std;

//laba 15.1

/*
float PowerA3(float A)
{
	float B = A * A * A;
	return B;
}

int main()
{
	int i;
	float a;
	for (i = 0; i < 5; i++)
	{
		cin >> a;
		cout << PowerA3(a) << endl;
	}

}


*/

//laba 15.2

/*
float Sign(float x)
{
	if (x < 0)
	{
		return -1;
	}
	if (x ==0)
	{
		return 0;
	}
	if (x > 0)
	{
		return 1;
	}
}

int main()
{
	float a, b;
	cin >> a >> b;
	cout << Sign(a) + Sign(b) << endl;
	return 0;
}

*/

//laba 15.3

/*
float RingS(float r1, float r2)
{
	return 3, 14 * (r1 - r2)(r1 + r2);
}

int main()
{
	float i, r1, r2;
	for (i = 0; i < 3; i++)
	{
		cin >> r1 >> r2;
		cout << RingS(r1, r2) << endl;
	}
	return 0;
}
*/

//laba 15.4 

/*
int Quater(float x,float y)
{
	if (x > 0)
	{
		if (y > 0)
		{
			cout << "1" << endl;
		}
		else
		{
			cout << "4" << endl;
		}
	}
	else
	{
		if (y > 0)
		{
			cout << "2" << endl;
		}
		else
		{
			cout << "3" << endl;
		}
	}
}

int main()
{
	int i, x, y;
	for (i = 0; i < 3; i++)
	{
		cin >> x >> y;
		cout<< Quater(x,y)
	}
	return 0;
}

*/

//laba 15.5

/*
float Fact2(int n)
{
	float nn = 1;
	if (n % 2 != 0)
	{
		for (int i = 1; i <= n; i += 2)
		{
			nn *= i;
		}
	}
	else
	{
		for (int i = 2; i <= n; i += 2)
		{
			nn *= i;
		}
	}
	return nn;
}

int main()
{
	int x;
	cin >> x;
	cout << Fact2(x) << endl;
}
*/


