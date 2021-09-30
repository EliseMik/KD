//laba 5.1

/*
#include<iostream>

#include<cstdlib>

using namespace std;



int main()

{

float x1, y1, x2, y2;

cin >> x1 >> y1 >> x2 >> y2;

cout << sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)) << endl;

return 0;

}
*/


//laba 5.2

/*
#include<iostream>

#include<cstdlib>

using namespace std;



int main()

{

float a, b, c;

cin >> a >> b >> c;

cout << abs(a - c) << endl;

cout << abs(b - c) << endl;

cout << abs(a - c) + abs(b - c) << endl;

return 0;

}


*/




//laba 5.3

/*
#include<iostream>

#include<cstdlib>

using namespace std;



int main()

{

float a, b, c;

cin >> a >> b >> c;

cout << abs(a - c) * abs(b - c) << endl;

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

cin >> x1 >> y1 >> x2 >> y2;

double a = abs(x2 - x1);

double b = abs(y2 - y1);

cout << 2 * (a + b) << endl;

cout << a * b << endl;

return 0;

}

*/




/*
#include<iostream>

#include<cmath>

using namespace std;

float s(float x1, float x2, float y1, float y2)

{

return (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));

}

int main()

{

float x1, x2, x3, y1, y2, y3, a, b, c, p;

cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

if (((x1 == x2) and (x2 == x3)) or ((y1 == y2) and (y2 == y3)))

{

 cout << "triangle? no." << endl;

}

else

{

 a = s(x1, x2, y1, y2);

 b = s(x2, x3, y2, y3);

 c = s(x3, x1, y3, y1);

 p = (a + b + c) / 2;

 cout << p * 2 << endl;

 cout << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;

}


return 0;

}
*/


