// Сизченко Iван COI-21-1 //
#include <iostream>
#include <math.h>
using namespace std;
void equation( double *a, double *b);
int main()
{
double a,b;
double x;
cout << " Введите 2 числа \n ";
cin >> a;
cin >> b;
if (a==0)
   {
   if (b==0)
   cout << "Bezlich \n ";
   else 
   cout << "nema \n ";
   }
else
   {
if (a!=0&b!=0)
x=-(a/b);
cout << x;
   }
return 0;
}