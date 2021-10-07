//laba 6.1
/*
#include<iostream>

#include<cmath>

using namespace std;

int main()

{

int a, b;

cin >> a >> b;

int t = a;           //замена содержимого переменных

a = b;              //замена содержимого переменных

b = t;              //замена содержимого переменных

cout << a << " " << b << endl;

return 0;

}


*/


//laba 6.2
/*
#include<iostream>

#include<cmath>

using namespace std;

int main()

{

int a, b, c;

cin >> a >> b>> c;

int t = b;            // алгоритм замены содержимых переменных между собой

b = a;

a = c;

c = t;

cout << a << " " << b << " "<< c<< endl;

return 0;

}


*/


//laba 6.3
/*
#include<iostream>

#include<cmath>

using namespace std;

int main()

{

int C, b, a;

cin >> C >> b>> a;

int t = b;            // алгоритм замены содержимых переменных между собой

b = C;

C = a;

a = t;

cout << C << " " << b << " "<< a<< endl;

return 0;

}


*/


//laba 6.4
/*
#include<iostream>

#include<cmath>

using namespace std;

int main()

{

	int x;

	cin >> x;

	int y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;          //подсчет функции у(х)

	cout << y << endl;

	return 0;

}

*/


//laba 6.5
/*
#include<iostream>

#include<cmath>

using namespace std;

int main()

{

int x;

cin >> x;

x -= 3;           //изначально задавалось уравнение int y = 4 * pow((x-3),6) - 7 * pow((x-3),2)+2

int y = 4 * pow(x,6) - 7 * pow(x,2)+2;

cout << y << endl;

return 0;

}


*/


//laba 6.6
/*
#include<iostream>

#include<cmath>

using namespace std;

int main()

{

int x;

cin >> x;

x = x * x;        //я даже не буду это комментировать 

x = x * x;

x = x * x;

cout << x << endl;

return 0;

}
*/


//laba 6.7
/*
#include<iostream>

#include<cmath>

using namespace std;

int main()

{

int x,t;

cin >> x;

x = x * x * x;        //и это тоже

t = x;

x = x * x;

x = x * x;

x = x * t;

cout << x << endl;

return 0;

}
*/
