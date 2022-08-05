using namespace std ;
#include<iostream>
void pointer(int *j){
cout<< *j<<" -> "<<j<<endl;
}
void update(int*p){
    // p = p+1 ;  // it can't cahnge the address or anything of pointer
//   cout<<"inside function p = "<<p<<endl;

*p = *p + 1 ;

}
int GetSum(int arr[],int n){
    cout<<"size of arr = "<<sizeof(arr)<<endl;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += i[arr];

    }
    return sum ;
}
int main()
{
    int num=9;
    int *p = &num ;
   // pointer(p); //passing pointer in a function.
   cout<<"before value = "<<*p<<endl;
   update(p);
   cout<<"after value = "<<*p<<endl;
   // we can change value by passing pointer but we can not change address of pointer in changing in anything in another function
   cout<<"before adddress = "<<p<<endl;
   update(p);
   cout<<"after address = "<<p<<endl;

  // attention⚠️⚠️⚠️//
  //when we paas an array and we want to print its size in the function then it will print the pointers size
  // in that case array becomes pointer 

   int arr[5] = {1,2,3,4,5};
   cout<<"sum is = "<<GetSum(arr,5)<<endl;
}