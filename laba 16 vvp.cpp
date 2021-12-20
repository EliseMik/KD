#include <iostream>
#include <valarray>
using namespace std;

//laba 16.1

/*

int main()
{
    int n, i;
    cin >> n;
    int *A = new int[n];
    A[0] = 1;
    cout << A[0]<< " ";
    for (i = 1; i < n; i++)
    {
        A[i] = A[i - 1] + 2;
        cout << A[i] << " ";
    }
    cout << endl;

}

*/

//laba 16.2

/*

int main()
{
    int n,i;
    float a, d;
    cin >> n >> a >> d;
    int *A = new int[n];
    A[0] = a;
    cout << A[0]<<" ";
    for (i = 1; i < n; i++)
    {
        A[i] = A[i - 1] * d;
        cout << A[i] << " ";
    }
    cout << endl;

}

*/

//laba 16.3

/*

int main()
{
    int n, a, b, i;
    cin >> n >> a >> b;
    int *A = new int[n];
    A[0] = a;
    A[1] = b;
    cout << A[0] << " " << A[1] << " ";
    for (i = 2; i < n; i++)
    {
        A[i] = A[i - 1] + A[i - 2];
        cout << A[i] << " ";
    }
    cout << endl;
}

*/

//laba 16.4 

/*
int main()
{
    int n, i;
    cout << "enter int N" << endl;
    cin >> n;
    int* A = new int[n];
    cout << "enter *A" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (i = 0; i < n/2; i++)
    {
        cout<<A[i]<<" "<<A[n-i-1]<<" ";
    }
    if (n % 2 != 0)
    {
        cout << A[n / 2] << endl;
    }
    cout << endl;
}
*/

//laba 16.5

/*
int main()
{
    int n, i;
    cout << "enter int N" << endl;
    cin >> n;
    int* A = new int[n];
    cout << "enter *A" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (i = 0; i < n; i+=2)
    {
        cout << A[i] << " ";
    }

    for (i =n - 1 - n%2; i>=0;i-=2)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
*/