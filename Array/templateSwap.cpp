using namespace std;
#include<iostream>
template<class T>
class abc
{
T a,b;
public:
T swap(T a, T b );
};
template<class T>
T abc <T> :: swap(T a, T b )
{
a = a + b; 
    b = a - b; 
    a = a - b;
    cout << "After Swapping: a =" << a << ", b=" << b;
}
int main()
{
abc <int> ob1;
cout<<ob1.swap(12,34);
abc <int> ob3;
cout<<ob3.swap(12.98,34.76);
}
