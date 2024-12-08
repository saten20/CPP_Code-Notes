#include<iostream>
using namespace std;

//************************ Constructor ************************
// There are three types of the constructor default, parameterized , copy constructor.
// Constructor make the object, it is called only once during the object creation.
// If there is no user defind constructor then compiler make the two constructor default and copy.
// If there is user defind constructor then compiler does not make the default constructor but still it make the copy constructor.
// In copy constructor compiler does the shallow copy ,it  copy all the value of the variable as it is(copy paste).
// Destructor is used to release the resource. it is the last function that execute before the object die. ~className

// class student{
//     public:
//     string name;
//     int *marksptr;

//     // default constructor
//     student(){

//     }
   
//    // parameterized constrctor
//     student(string name, int mark){
//         this -> name = name;
//         marksptr = new int;
//         *marksptr = mark;
//     }

//     // copy constructor
//     student(student &s){
//         this -> name = s.name;
//         marksptr = new int;
//         *marksptr = *(s.marksptr);
//     }

//     ~student(){
//         delete marksptr;
//     }

//     void info(){
//         cout<<name<<" "<<*marksptr<<endl;
//     }
// };
// int main(){
//     student s("satendra", 90);
//     s.info();
//     student s1(s);
//     *(s1.marksptr) = 100;
//     s1.info();
//     s.info();
//     return 0;
// }


// Pointer is the special variable which store the address of the other variable.
// int *p, where p is pointer which store the address of the int type variable. p = &x , &x is address of the variable x
// p store  the memory location of the variable and *p is equivalent to variable x.
// By using &x mean we are accessing the address of the variable x.

// int main(){
//     int x = 10;
//     int *p = NULL;
//     cout<<p<<endl;
//     p = &x;
//     cout<<*&x<<endl;
//     cout<<*p<<endl;
//     return 0;
// }