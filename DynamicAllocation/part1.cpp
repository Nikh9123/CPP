using namespace std ;
#include<iostream>



//Attention⚠️⚠️⚠️⚠️ //

// pass by refrence//same memory name diffrenet 
int update2(int& n){  // here argument is a refrence variable thats why in update2 function value of n is changing //
    n++ ;

}
// call by value //new memory, name diffrenet or same
int update (int n){
    n++ ;   // here argument is from call by value (copy of variable) thats why in update function value of n isn't changing

}
int main(){

    /*
    int i = 9 ;
    //creating a refrence variable 
    int &j = i ; 
   cout<<"value of i = "<<i<<endl;
    i++ ;
    cout<<"value of i & j after increamenting i = "<<i<<" "<<j<<endl;
     j++ ;
     cout<<"value of j is after incrementing j  = "<<j<<endl ;


     */
    
     int n ;
     n=8 ;
     cout<<"value of n in main fumction = "<<n<<endl<<endl;
     update(n);
     cout<<"value of n in update function = "<<n<<endl<<endl;
     update2(n);
     cout<<"value of n in update2 function = "<<n<<endl<<endl;
     return 0 ;

}