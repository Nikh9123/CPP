using  namespace std ;
#include<iostream>
char Tolower(char ch){
    if(ch >= 'a' && ch <= 'z'){
         return ch ;
    }
    else 
    {
        char temp = ch - 'A' + 'a' ;
        return temp ;
    }
}
bool CheckPali(char ch[], int n){
int s= 0 ;
int e = n-1 ;
while(s<=e){
    if(ch[s] >= 41 && ch[e] <= 57 ){
    if(Tolower(ch[s++]) != Tolower(ch[e--])){
        return 0 ;
    }
    }
}
return 1 ;
}
void reverse(char name[],int n ){
    int s=0;
    int e=n-1 ;
    while(s<=e)
    swap(name[s++],name[e--]);

    
    }

int countLength(char name []){

    int count = 0;
    for(int i =0;name[i] != '\0';i++){
        count ++;
            }
            return count ;
}
int main()
{

    char name[20] ;
    cout<<"enter any name " ;
    cin>>name ;
    cout<<"name is : "<<name <<endl;

int len = countLength(name);
cout<<"length of name is : "<<len<<endl; 
reverse(name,len ) ;
cout<<"reversed name is :"<<name<<endl;
cout<<"pAlindrom ans is: "<<CheckPali(name,len)<<endl;
cout<<"CHARACTER IS : "<<Tolower('b')<<endl; 
cout<<"CHARACTER IS : "<<Tolower('C')<<endl;   
}