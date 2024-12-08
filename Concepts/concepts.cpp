#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// *********************inline function*************

// Only during the declartion use the keyword inline

// inline void f1(int *, int *); 
// void f1(int *x, int *y){
//     *x = 10;
//     *y = 30;
// }
// int main(){
//     int x = 2;
//     int y = 4;
//     f1(&x, &y);
//     cout<<x<<" "<<y;
   
//     return 0;
// }


//**************************default arguments ***********************

// In  function declartion we have to define the default argument.
// So while function call if we not pass the value then it will take that default value.

// void f1(int = 0 , int = 24, int = 50);

// void f1(int x, int y, int z){
//     cout<<x<<" "<<y<<" "<<z;
// }
// int main(){
//     f1(100);
//     return 0;
// }



//******************function Overloading***************

// function name is same but number of arguments is different or type of argument is different.
// function name same , argument same but return type different is an errro.


// class Base{
//     public:
//     void area(int x){
//         cout<<"Rectangle area"<<endl;
//     }

//     void area(int x, int y){
//         cout<<"circle Area"<<endl;
//     }

//     void area(int x, float y){
//         cout<<"square area"<<endl;
//     }

   
// };

// int main(){
//     Base b;
//     b.area(10);
//     b.area(12, 53);
//     b.area(13,9.2f);
//     return 0;
// }



//****************************** structure ***********************

// we can define varible and function in structure.
// There is no need to use struct while making the variable of structure.
// Access modifier like public, protected, and private is allowed.

// struct student{
//     private:
//     string subject;

//     public:
//     string name;
//     int rn;

//     void info(){
//         cout<<name<<endl;
//         cout<<rn<<endl;
//     }
// }s2;
// int main(){
//     student s1;
//     s1.name = "satendra";
//     s1.rn = 10;
//     cout<<s1.name<<" "<<s1.rn<<endl;

//     s1.info();
//     s2.name = "jatin";
//     s2.rn = 24;
//     s2.info();
//     return 0;
// }




//****************************** Operator Overloading ********************

// operator(primitive operator) keyword  used as the function name to overload  the operator.
// Below is the overloading of the + which add the complex number.


// class Complex{
//     public: 
//     int a;
//     int b;

//     void set(int x, int y){
//         a = x;
//         b = y;
//     }
//     void get(){
//         cout<<a<<" "<<b<<"i"<<endl;
//     }

//     Complex operator+(Complex c){
//         Complex temp;
//         temp.a = a + c.a;
//         temp.b = b + c.b;
//         return temp;
//     }
// };

// int main(){
//     Complex c1, c2, c3;
//     c1.set(10, 24);
//     c2.set(2,4);
//     c3 = c1 + c2;
//     c3.get();
//     return 0;
// }


// class Complex{           // Overloading with the help of friend function
//     public:
//     int a;
//     int b;

//     void set(int a, int b){
//         this -> a = a;
//         this -> b = b;
//     }
//     void get(){
//         cout<<a<<" + "<<b<<"i"<<endl;
//     }

//     friend Complex operator+(Complex, Complex);
// };

// Complex operator+(Complex c1, Complex c2){
//     Complex temp;
//     temp.a = c1.a + c2.a;
//     temp.b = c1.b + c2.b;
//     return temp;
// }

// int main(){
//     Complex c1, c2, c3;
//     c1.set(1,5);
//     c2.set(4,6);
//     c3 = c1 + c2;
//     c3.get();
//     return 0;
// }



//***************************static data member and member function **************
// static int x; declartion of the static variable.
// static variable does not got the memory in the object.They got the seperate memory.Only one copy of the static variable is create.
// All the object share the same copy of the static variable.
// Life of the static variable is through out the program and default value is 0.
// static returntype functionName(){// code}  declartion of the static method.
// static method can only access the static member variables.
// static variable and static function also known as class variables and functions.


// class Base{
//     public:
//     string name;
//     static int rn;
//     static int grno;

//     Base(string name){
//         this -> name = name;
//     }

//     void info(){
//         cout<<name<<" "<<rn<<endl;
//     }

//     static void showgr(){
//         cout<<grno<<endl;
//     }
// };

// int Base::rn = 10;
// int Base::grno = 1234;

// int main(){
//     Base b1("saten"), b2("viren");
//     b1.info();
//     b1.rn++;
//     b2.info();
//     Base::showgr();
//     return 0;
// }



//***************************** friend function *************************

// Friend function is not the member funtion of the class.
// it is declare inside the class as friend returnType functionName(ClassName).
// It must be define outside the class.
// friend function can access public, private and protected memeber of the class. it is not access directly we have to pass the object of that
// class. friend function can be friend to more then one class. 
// it is not the member of the class hence we can define the friend function in any access modifier like private , protected, public.

// class teacher;
// class student{
//     private:
//     string name;

//     public:
//     student(string name){
//         this -> name = name;
//     }
//     private:
//     friend void showinfo(student, teacher);
// };

// class teacher{
//     protected:
//     string subject;

//     public:
//     teacher(string subject){
//         this -> subject = subject;
//     }

//     friend void showinfo(student, teacher);
// };

// void showinfo(student s, teacher t){
//     cout<<"name = "<<s.name<<","<<"subject = "<<t.subject<<endl;
// }

// int main(){
//     student s("saten");
//     teacher t("Computer Science");
//     showinfo(s, t);
//     return 0;
// }





//****************************** this/new/delete ******************

// this is the keyword which present in every member function of the class. this is the pointer which store the address of the calling object.
// this point to the calling object.it is used to refer the caller object in the member function.
// new is used to create the dynamic memory. it will return the base address of the dynamically created memory location.
// int *p = new int. new will return the base address of the int  variable which does not have any name.
// delete p . delete is used to delete the dynamically created memeory location. it will not delete the pointer variable.
// Both new and delete  they are the operator.


// class Base{
//     public:
//     int x;
//     void show(){
//         cout<<this<<endl;
//         cout<<"Hii"<<endl;
//     }
// };
// int main(){
//     Base b, b1;
//     cout<<&b<<endl;
//     b.show();
//     cout<<&b1<<endl;
//     b1.show();

//     return 0;
// }

// class Base{
//     public:
//     int x;
//     int y;

//     Base(int x,int y){
//         this -> x = x;
//         this -> y = y;
//     }

//     void show(){
//         cout<<this<<endl;
//     }
// };
// int main(){
//     Base *p = new Base(13,24);
//     cout<<p<<endl;
//     p -> show();
//     int *q = new int;
//     cout<<q<<endl;
//     delete q;
//     int *r = new int[10];
//     delete []r;
//     cout<<r<<endl;
   
//     return 0;


// }