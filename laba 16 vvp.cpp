#include <iostream>

using namespace std;

//laba 16.1

/*

int main()
{
    int n, i;
    cout<< "Enter N>0"<<endl;
    cin >> n;
    int *A = new int[n];
    cout<<"The array of positive odd numbers is.."<<endl;
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
    cout<<"Enter an integer N (> 1), as well as the first term A and the denominator D of the geometric progression"<<endl;
    cout<<"to form and output an array of size N containing the N first terms of this progression: A, A·D, A·D2 , A·D3 , . . ."<<endl;
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
    cout<<"Enter integers N (> 2), A and B to form and output an integer array of size N"<<endl;
    cout<<"The first element of which is equal to A, the second is equal to B, and each subsequent element is equal to the sum of all the previous ones"<<endl;
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
    cout<<"array of the form A1, AN , A2, AN-1, A3, AN-2,"<<endl;
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
    cout<<"first, its elements with odd numbers in ascending order of numbers, and then - elements with even numbers in descending order of numbers"<<endl;
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
