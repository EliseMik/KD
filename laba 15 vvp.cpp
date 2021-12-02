#include <iostream>
using namespace std;

//laba 15.1

/*

float PowerA3(float A)
{
	float B = A * A * A;  //возвести в 3-ю степень
	return B;
}

int main()
{
	int i;
	float a;
	cout<<"enter 5 numbers to find their third powers"<<endl;
	for (i = 0; i < 5; i++)
	{
		cin >> a;
		cout << PowerA3(a) << endl;
	}

}


*/

//laba 15.2

/*

float Sign(float x)   // −1, если X < 0; 0, если X = 0; 1, если X > 0
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
	return 0;
}

int main()
{
	float a, b;
	cout<<"Enter A and B"<<endl;
	cin >> a >> b;
	cout <<"Sign(A) + Sign(B) = "<< Sign(a) + Sign(b) << endl;
	return 0;
}

*/

//laba 15.3

/*
float RingS(float r1, float r2)          //функция подсчета площади кольца
{
	return 3.14 * (r1 - r2)*(r1 + r2);
}

int main()
{
	float i, r1, r2;
	cout<<"Enter 3 pairs of numbers R1 and R2 - outer and inner radii (real, R1 > R2) to find the areas of the three rings"<<endl;
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

int Quater(float x,float y)    //функция определения четверти координаты
{
	if (x > 0)
	{
		if (y > 0)
		{
			return 1;
		}
		else
		{
			return 4;
		}
	}
	else
	{
		if (y > 0)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
}

int main()
{
	int i, x, y;
	cout<<" Enter 3 points with non-zero real coordinates (x, y) to find the coordinate quarter numbers for three points with these non-zero coordinates"<<endl;
	for (i = 0; i < 3; i++)
	{
		cin >> x >> y;
		cout<< Quater(x,y)<<endl;
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
	cout<<"enter a number to calculate its double factorial"<<endl;
	cin >> x;
	cout << Fact2(x) << endl;
}
*/


