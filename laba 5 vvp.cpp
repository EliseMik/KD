//laba 5.1

/*
#include<iostream>
#include<cmath>

#include<cstdlib>

using namespace std;



int main()

{

cout<<"Enter the coordinates of the points (х1, у1), (х2, у2)"<<endl ;

float x1, y1, x2, y2;

cin >> x1 >> y1 >> x2 >> y2;

cout << "the distance between these points is " ;

cout << sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)) << endl;   //вычисление расстояния между заданными точками

return 0;

}
*/


//laba 5.2

/*
#include<iostream>
#include<cmath>

#include<cstdlib>

using namespace std;



int main()

{

float a, b, c;

cout<< "Enter the coordinates of 3 points (а, b, c) on the number line OX" ;

cin >> a >> b >> c;          //точки на одной прямой

cout << "the distance between a and c is "<< abs(a - c) << endl;         //расстояние между а и с

cout << "the distance between b and c is "<< abs(b - c) << endl;          //расстояние между в и с

cout << "the distance between (a and c) + (c and b) is "<< abs(a - c) + abs(b - c) << endl;           //сумма расстояний

return 0;

}


*/




//laba 5.3

/*
#include<iostream>
#include<cmath>

#include<cstdlib>

using namespace std;



int main()

{

float a, b, c;

cout<< "Enter the coordinates of 3 points (а, b, c) on the number line OX"<<endl ;

cin >> a >> b >> c;

cout << "Multiplication of distance between (a and c) + (c and b) is "<< abs(a - c) * abs(b - c) << endl;       //произведение расстояний

return 0;

}

*/


// laba 5.4
/*
#include<iostream>

#include<cmath>



using namespace std;



int main()

{

double x1, y1, x2, y2;

cout<<"Enter the coordinates of the points (х1, у1), (х2, у2) of rectangle" <<endl;

cin >> x1 >> y1 >> x2 >> y2;

double a = abs(x2 - x1);          //вычисление стороны а

double b = abs(y2 - y1);          //вычисление стороны в

cout << "P = " <<2 * (a + b) << endl;      //вычисление периметра (прямоуг)

cout << "S = " <<a * b << endl;             //вычисление площади  (прямоуг)

return 0;

}

*/




/*
#include<iostream>

#include<cmath>

using namespace std;

float s(float x1, float x2, float y1, float y2)          //создание функции

{

return (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));          //вычисление расстояния между точками

}

int main()

{

float x1, x2, x3, y1, y2, y3, a, b, c, p;

cout<<"Enter the coordinates of the points (х1, у1), (х2, у2), (x3, y3) of triangle"<<endl;

cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

if (((x1 == x2) and (x2 == x3)) or ((y1 == y2) and (y2 == y3)))          //если точки стоят в одну линию

{

 cout << "triangle? no." << endl;

}

else

{

 a = s(x1, x2, y1, y2);

 b = s(x2, x3, y2, y3);

 c = s(x3, x1, y3, y1);

 p = (a + b + c) / 2;        //полупериметр

 cout << "P = "<< p * 2 << endl;          //вывод периметра

 cout << "S = "<< sqrt(p * (p - a) * (p - b) * (p - c)) << endl;         //формула герона, вычисление площади треугольника

}


return 0;

}
*/


