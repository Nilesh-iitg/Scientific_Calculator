#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
void addition();
void subtraction();
void multiplication();
void division();
void factorial();
void power();
void square();
void cube();
void squareroot();
int main()
{

cout<<"\t\tWelcome to the scioentific calculator , devdeloped by NILESH!!!\n"<<endl;
cout<<"**********Press 0 to quit the program\n"<<endl;
cout<<"Enter 1 for Addition \n";                  
cout<<"Enter 2 for Subtraction \n";               
cout<<"Enter 3 for Multiplication \n";            

cout<<"Enter 4 for Division \n";
cout<<"Enter 5 for Power  \n";
cout<<"Enter 6 for Factorial \n";
cout<<"Enter 7 for Square  \n";
cout<<"Enter 8 for Cube \n";
cout<<"Enter 9 for squareroot  \n\n";
int choice;
while (1)
{
    


cout<<"Enter your choice: ";
cin>>choice;
switch(choice)
{
    case 1:
      addition();
      break;
    case 2:
      subtraction();
      break;
    case 3:
      multiplication();
      break;
    case 4:
    division();
    break;
    case 5:
    power();
    break;
    case 6:
    factorial();
    break;
    case 7:
    square();
    break;
    case 8:
    cube();
    break;
    case 9:
    squareroot();
    break;
    case 0:
    exit(0);
    break;
    default:
    cout<<"\n********Wrong choice, Enter valid choice********\n\n";
    break;

}


}
return 0;
}
void addition()
    {
           cout<<"Enter the numbers you want to add: ";
           int a,b;
           cin>>a>>b;
           cout<<"The addition of "<<a<<" and " <<b<<" is "<<a+b<<endl;
           
    }

     void subtraction()
    {
           int a,b;
           cout<<"Enter the minuend: ";
           cin>>a;
           cout<<"Enter the subtrahend: ";
           cin>>b;
           cout<<a<<" - " <<b<<" is "<<a-b<<endl;
           
    }
    void multiplication()
    {
           cout<<"Enter the numbers you want to multiply: ";
           int a,b;
           cin>>a>>b;
           cout<<"The addition of "<<a<<" and " <<b<<" is "<<a*b<<endl;
           
    }

    void division()
    {
           int a,b;
           cout<<"Enter the dividend: ";
           cin>>a;
           cout<<"Enter the divisor: ";
           cin>>b;
           cout<<"The addition of "<<a<<" and " <<b<<" is "<<(float)a/(float)b<<endl;
           
    }
    void factorial()
    {
           cout<<"Enter the numbers you want the factorial of: ";
           int a;
           cin>>a;
           int fact=1;
           for(int i=1;i<=a;i++)
           {
             fact=fact*i;
           }
           cout<<"The factorial of "<<a<<" is "<<fact<<endl;
           
    }
    void power()
    {
           double a,b;
           cout<<"Enter the base: ";
           cin>>a;
           cout<<"Enter the exponent: ";
           cin>>b;
           double power = pow(a,b);
           cout<<a<<" to the power " <<b<<" is "<<power<<endl;
           
    }
    void square()
    {
           double a;
           cout<<"Enter the number to be squared: ";
           cin>>a;
           double power = pow(a,2);
           cout<<"square of "<<a<<" is "<<power<<endl;
           
    }
    void cube()
    {
           double a;
           cout<<"Enter the number to be cubed: ";
           cin>>a;
           double power = pow(a,3);
           cout<<"square of "<<a<<" is "<<power<<endl;
           
    }
    void squareroot()
    {
           double a;
           cout<<"Enter the number to be squareroot of: ";
           cin>>a;
           double power = sqrt(a);
           cout<<"squareroot of "<<a<<" is "<<power<<endl;
           
    }
    