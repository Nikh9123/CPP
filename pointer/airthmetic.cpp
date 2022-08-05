using namespace std ;
#include<iostream>
int main()
{
    float f = 10.5;
float p = 2.5;
float* ptr = &f;
(*ptr)++;
*ptr = p;
cout << *ptr << " " << f << " " << p;
int a = 7; 
int b = 17; 
int *c = &b;
 *c = 7; 
cout << a << " "<< b << endl;


}