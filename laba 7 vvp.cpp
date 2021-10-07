//laba 7 (1)
/*

#include <iostream>
using namespace std;
int main()
{
    float a, r;
    cin >> a;
    r = a / 180;              //перевод в радианы
    cout << r << "pi" << endl;
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
    cin >> r;
    a = r * 180;            //перевод в градусы
    cout << a << endl;
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
    cin >> x >> a >> y;
    sum = a / x;             //стоимость килограмма конфет
    y = sum * y;             //стоимость у килограмма конфет
    cout << sum << endl;
    cout << " " << endl;
    cout << y << endl;
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
    cin >> v1 >> v2 >> S>> t;
    cout << S + (v1 + v2) * t << endl;         //расстояние между машинами
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

