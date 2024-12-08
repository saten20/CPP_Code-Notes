#include<iostream>
using namespace std;

//**************************Encapsulation ********************************

// Encapsulation is wrapping of data and member function in the single unit.class is a way to implement the encapsulation.
// Wrapping all the data and member function of the student in a single class is the exmple of encapsulation.
// "Data hiding " -- Private access modifier is used to hide the sensitive data and we can use the access modifier inside the class only.
// so we can say that encapsultion help us to implement  the data hiding.


//*******************************polymorphism ******************

// polymorphism is the ability of the objects to take on different form or behave in different ways depending on the context in which they are used.
// poly mean many morph means form that is many form of the same things is what we called polymorphism.
// There are two type of the polymorphism Compile time polymorphism and Runtime polymorphism.
// compile time polymorphism is Constructor overloading , function overloading and operator overloading.
// Runtime Polymorphism is virtual funtion and function overriding.


//****************************** Abstraction **********************

// Hiding the unnecessary details and showing only the important part is called as abstraction.
// Access modifier and Abstract class is the way to implement the absraction.
// Data hiding is different then the abstraction. In data hiding we hide the data but in abstraction we hide the unwanted date and show the 
// relevent information.



//**************************Inheritance **************************

// private methods are not accessable in both main function and child classn but we can access it where it is defind.
// protected methods are accessable in  child class but not in main function.
// public is accessable in both main as well as in child class.
// when we access the protected and public method of parent class inside the child class then there is no need to create the object because 
// in child class all the method of parent is also inherited.
// private members --> sirf mai use karunga 
// protected members --> mai aur mere bache use kar sakte hai, bahar wala koi use nhi kar skta hai.
// public members --> mai , mere bache , aur bahar ke log sab use kar skte hai.
// In inheritance the constructor call is from  child --> parent  but execution is from parent --> child class.
// Destructor call from child --> parent and execution is also from child --> parent class.

// Types of inheritance
// public, private, protected these are the three type of inheritance. what happen if we use access spcifier as public, procted, private.
// public --> public will be public, protected will be protected, private will be private. all the public member of parent class become publilc
// in child class and protected become protected in the child class. private it not accessable.
// protected --> public will be protected, protected will be protected, private will be private. All the public, protected member of the parent 
// class become protected and private is not accessable.
// private --> public will be private, protected will be private, private will be private. All public, protected, private members become private
// in the child class

// Types of inheritance 
// single level, multilevel, multilple, hierarchical , hybrid.
// In multiple inheritance if Both the class  that are going to inherit have the same function then child class will use the  Scope Resolution ::
// operator to specify which class function we want to call.



// class A{
//     private:
//     int x;

//     public:
//     A(int val){
//         cout<<"Constructor of the parent class"<<endl;
//         x = val;
//     }
//     private:
//     void privatefunA(){
//         cout<<"Privat method of A"<<endl;
//     }

//     protected:
//     void protectedfunA(){
//         cout<<"Protected method of A"<<endl;
//     }

//     public:
//     void publicfunA(){
//         cout<<"Public function of A"<<endl;
//         cout<<x<<endl;
//     }

// };

// class B: public A{

//     private:

//     void privatefunB(){
//         cout<<"Private function of B"<<endl;
//     }

//     protected:

//     void protectedfunB(){
//         cout<<"Protected function of B"<<endl;
//     }

//     public:

//     B(int val):A(val){
//         cout<<"Constructor of child class"<<endl;
//     }

//     void publicfunB(){
//         cout<<"Pubilc function of B"<<endl;
//         protectedfunA();
//         publicfunA();
//     }

// };


// int main(){
//     B obj1(10);
//     obj1.publicfunB();
//     return 0;
// }


// class A{                        
//     private:
//     void f1(){
//         cout<<"Private function of A"<<endl;
//     }
//     protected:
//     void f2(){
//         cout<<"protected function of A"<<endl;
//     }
//     public:
//     void f3(){
//         cout<<"public function of A"<<endl;
//     }
// };

// class B: private A{                           // access specifers
//     public:
//     void f4(){
//         f2();
//         f3();

//     }
// };

// class C: public B{
//     public: 
//     void f5(){
//       f4();         // Not accessable
//     } 

// };
// int main(){
//     C c;
//     c.f5();
//     return 0;
// }


// class A{                   // multiple inheritance
//     public:
//     void f1(){
//         cout<<"Function of A"<<endl;
//     }
// };
// class B{
//     public:
//     void f1(){
//         cout<<"Function of B"<<endl;
//     }
// };

// class C: public A, public B{
//     public:
//     void f3(){
//         cout<<"Function of C"<<endl;
//     }
// };
// int main(){
//     C c;
//     c.f3();
//     c.A::f1();
//     c.B::f1();
//     return 0;
// }




//*************************************** Pointers in OOP's / Virtual function ******************************

// Object creation is happen during runtime.
// Jis class ka pointer hai vo ussi class ke method ko access kar sakta hai in Case of Early binding or Complile time binding.
// While in case of late binding or runtime binding Complier check the address of the pointer whom pointer in pointing.
// In compile time binding compiler check the type of the pointer and then search the function in that class,  And bind the function
// call with it's corressponding defination present in the respective class.
// By default compile time binding is occurs.
// basePointer = &baseObject -- valid.   basePointer = &derivedObject -- valid.
// derivedPointer = &derivedObject -- valid.  derivedPointer = &baseObject -- invalid.
// Funtion overloading --> function name is same but parameter is different. it is possible in the same class.return type may or maynot same.
// Function Overriding --> function name as well as parameter both are same. it is possible in the different class.

// When we write virtual just ahead of the function then runtime binding is happen. That is compiler does not check the type of the pointer 
// instead it check the address of the object whom pointer is pointing and then search that funtion in that repective class object and bind the fucntion
// call with it's defination present in that class object.
// When base and derived both have the same function name with same parameter then virtual function play an important role to decide which
// function will be called.
// It is not compulsory that you have to override the virtual function in the derived class. if it is not override then base class function
// will be called. because virtual table will store the function address of the base class.

// "Inner working of virtual function binding"
// Each class prepair there own virtual function table which store the base address of all the virtual function inside the array.
// When object is created , that object have *vptr pointer which store the base address of the virtual function table of the class whose object it is.
// So compiler check the vptr pointer and from there it will bind the function call with it's defination.
// In the below example Paytm provide the Generalize method to search the flight but all agencies have there own way to book the 
// ticket. That why we have to call the book method of the respective agencies whose flight is searched.





// class Base{
//     public:

//     void basefun(){
//         cout<<"Base class method called"<<endl;
//     }
// };

// class Derived: public Base{
//     public:

//     void derivedfun(){
//         cout<<"Derived method called"<<endl;
//     }
// };
// int main(){
//     Base *b, obj1;
//     Derived *d, obj2;
//     b = &obj1;
//     b -> basefun();

//     d = &obj2;
//     d -> basefun();
//     d -> derivedfun();

//     b = &obj2;
//     b -> basefun();
 
//     return 0;
// }




// class Paytm{
//     public:

//     void search(){
//         cout<<"Search the flight"<<endl;
//     }

//     virtual void Book(){
//         cout<<"Book the flight"<<endl;
//     }
// };

// class AirIndia: public Paytm{
//     public:

//     void Book(){
//         cout<<"Air india flight is booked successfully"<<endl;
//     }
// };

// class Indigo: public Paytm{
//     public:
//     void Book(){
//         cout<<"Indigo flight is booked successfully"<<endl;
//     }
// };

// int main(){
//     Paytm *p;
//     AirIndia ai;
//     Indigo i;
//     p = &ai;
//     p -> search();
//     p -> Book();
//     return 0;
// }


//***********************************Pure virtual function / Abstract class ******************

// virtual returnType functionName() = 0; This is called as the pure virutal function.
// if atleast one pure virtual function is present inside the class then that class is called as the abstract class and we can not create the object
// of the abstract class. Child class who is inheriting the parent class should provide the defination of the all the virtul function present 
// in the parent class.



//  class Paytm{
//     public:
//     virtual void Search() = 0;
//     virtual void Book() = 0;
// };

// class Airindia: public Paytm{
//     public:

//     void Search(){
//         cout<<"Airindia flight Search successfully"<<endl;
//     }
//     void Book(){
//         cout<<"Air india Flight book successfully"<<endl;
//     }
// };

// int main(){
//     Airindia a;
//     a.Search();
//     a.Book();
   
//     return 0;
// }







//********************************* Diamond problem ***********************
// When we do the hybrid inheritance at that time two function calling the same constructor twice. This is called as diamond problem.
// To solve this problem we use virtual while inheriting the class.

// class A{
//     public:
//     A(){
//         cout<<"A's constructor called"<<endl;
//     }
// };

// class B: virtual public A{
//     public:
    
// };

// class C: virtual public A{
//     public:
    
// };

// class D: public B, public C{
//     public:
    
// };
// int main(){
//     D d;
//     return 0;
// }


