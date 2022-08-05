using namespace std ;
#include<iostream>
int main(){
    int arr[10]= {1,3,45,24,2,45,4};;
    //adress of array = &arr_name[index number] ;
    cout<<" adress of first memory block = "<<&arr<<endl;
    
    cout<<" adress of 2nd memory block = "<<&arr[1]<<endl;

    cout<<" value of arr[0] = "<<*arr<<endl;
    
    cout<<"value of *arr+1 =  "<<*arr+1<<endl; // *arr = 1 and 1+1 = 2, *arr+1= 2
    
    cout<<"value of *(arr+1) =  "<<*(arr+1)<<endl; // *(arr + 1)= 3
    
   
   int i= 3;
   cout<<"new trick i[arr]= "<< i[arr] <<endl;  // i[arr] //
    int temp[10];
    cout<<sizeof(temp)<<endl;
    int *p = &arr[0];
    cout<<"size of pointer= "<<sizeof(p)<<endl;
    cout<<" ="<<sizeof(*p);
     cout<<sizeof(&p);



     int a[10] ;
     int *l=&a[0];
cout<<a[0]<<endl;
cout<<a<<endl;

cout<<l<<endl;
     l=l+1 ;
     
     cout<<l<<endl;


     //char arrays//
     // see how 'cout' behaves different with int array and char array 
     // in char array it will print all content but in int array it will only print adress of array
    
     int r[5]= {1,2,3,4,5};
     char ch[6] = "abcde" ;
     //attention here imp
     cout<<"printing integer array as arr = "<< r<<endl;
     cout<<"printing character array as ch =  "<<ch<<endl;
     //pointer of char type 

     char *c = &ch[0];

     cout<<"printing the pointer = "<<c<<endl;
      // char pointer will print the entire string

    // again see here
    char tem = 'b';
    char *h = &tem;

    cout<< h<<endl;


    char cp[6] = "abcdg" ;

    char *v = "abcdg";
    cout<<cp<<" => "<<v<<" -< "<<*v<<endl;

    return 0 ;
}
 