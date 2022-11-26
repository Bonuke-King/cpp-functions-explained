//parameters and arguments
//parameters are specified after the function name , inside the parentheses
//

#include <iostream>
#include <string.h>
using namespace std;

void myFunction (string fname)
{
    cout << fname << " the early morning code"<<endl;

}
//default parameters
//a parameter with a default value is often known as an optional parameter
//Frome the example above country is an optional parameter and Norway is a the default value
void myFunc (string country = "Kenya")
{
    cout << country<< endl;
}

//Multiple parameters
//when you are working with multiple parameters the function call must havethe same number of arguments 
//as there are parameters and the arguments must be passed in the same order
void myFunc1 (string sname, int age)
{
    cout << sname << " the early code"<< age << "years old. \n";
}

//The Return Keyword
//void indicates that the function should not return a value
int myFunc2(int x)
{
    return 5+x;
}
int myFunc3(int c, int y){
    return c+y;
}


//Functions -Pass By reference
//previous example we used normal variables when we passed parameters to a function .
//you can also pass a reference to the function. This can be useful when you need to change the value of the arguments
void swapNums (int &w, int &v)
{
    int q=w;
    w=v;
    v=q;
}

//pass arrays as function parameters

void myFunc4 (int myNum1[])
{for (int l=0;l<5;l++)
{
    cout << myNum1[l] <<endl;
}

}


//Function Overloading
//multiple functions can have the same name with different parameters

int plusFunc (int h, int k) {
    return h+k;
}
double plusFunc (double h, int k)
{return h+k;}

//Recursion 
//is the technique of making a function call itself
//this technique provides a way to break complicated problems down into simple problems which are easier to solve








int main ()
{
    myFunction("samuel");
    myFunction("bonuke");
    myFunction("king");

myFunc ("Tanzania");
myFunc ("Ethiopia");
myFunc();
myFunc ("USA");

  myFunc1 ("Bonuke ",24);
  myFunc1("Nyagaka " ,50);
  myFunc1 ("King " ,4);

      cout<< myFunc2(6) <<endl;
      cout << myFunc3(13,3) <<endl;
       //we can also store the result in a variable
       int z= myFunc3(21,45);
       cout << z;

 int firstNum =10;
 int secondNum =30;

 cout << "Before swap: "  <<endl;
 cout << firstNum <<endl<<secondNum << endl;

 //call the function which will change the values of firstNum and secondNum
 swapNums (firstNum,secondNum) ;

 cout <<"After swap: "   <<endl;
 cout << firstNum <<endl<<secondNum<<endl;


         int myNum1[] ={10,20,30,40,600};
         myFunc4(myNum1);

int myNum3=plusFunc(8,13);
double myNum4 =plusFunc(4.5,7.9);

cout << "Int: " << myNum3 << endl;
cout << "Double: " <<myNum4;
    return 0;
}
































