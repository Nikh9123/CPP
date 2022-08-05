#include<iostream> 
using namespace std;

int factorial(int n) {
    
    //base case me return mandatory hai nhi to segmentation fault aayega

    if(n==0)
        return 1;
//base case end //

    int smallerProblem = factorial(n-1);   
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}

int main() {

    int n;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;
}