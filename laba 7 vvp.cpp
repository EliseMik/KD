//laba 7 (1)
/*

#include <iostream>
using namespace std;
int main()
{
    float a, r;
    cout<< "Enter degree"<<endl;
    cin >> a;
    r = a / 180;              //перевод в радианы
    cout << a << " = " << r << "pi" << endl;
    return 0;
}
*/


//laba 7 (2)
/*

#include <iostream>
using namespace std;
int main()
{
    float a,r;
    cout<< "Enter radian"<<endl;
    cin >> r;
    a = r * 180;            //перевод в градусы
    cout <<r<<"pi"<<" = "< a << endl;
    return 0;
}
*/


//laba 7 (3)
/*

#include <iostream>
using namespace std;
int main()
{
    float x, a, y, sum;
    cout<<"enter weight of chocolates, its value and weigt of chocolates that you would like to buy<< endl;
    cin >> x >> a >> y;
    sum = a / x;             //стоимость килограмма конфет
    y = sum * y;             //стоимость у килограмма конфет
    cout <<"value [ru/kg] = "<< sum << endl;
    cout << " " << endl;
    cout <<"value of chocolates that you would like to buy = "<< y << endl;
    return 0;
}
*/

//laba 7 (4)
/*

#include <iostream>
using namespace std;
int main()
{
    float v1, v2, S, t;
    cout<<"enter the speed of the first and second car, the distance between them, the time they traveled"<<endl;
    cin >> v1 >> v2 >> S>> t;
    cout <<"end distance" <<S + (v1 + v2) * t << endl;         //расстояние между машинами
    return 0;
}
*/


//laba 7 (5)
/*

#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cin >> a >> b;
    cout << -b / a << endl;        // решение уравнения вида  ах + в = 0
    return 0;
}
*/


//laba 7 (6)
/*

#include <iostream>
using namespace std;
int main()
{
    float a1, b1, c1, a2, b2, c2,x,y;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if ((a1 * b2 - b1 * a2) == 0)                //главный определитель = 0
    {
        if (c1/c2 == a1/a2)
        {
            cout << "belongs R" << endl;         //  принадлежит числу р
        }
        else
        {
            cout << "belongs to ...еее" << endl;           //принадлежит пустому множеству
        }
    }
    else
    {
        cout << -(b1 * c2 - c1 * b2) / (a1 * b2 - b1 * a2) << endl;         // подсчет х
        cout << (a1 * c2 - c1 * a2) / (a1 * b2 - b1 * a2) << endl;           // подсчет у
    }
    return 0;
}
*/

