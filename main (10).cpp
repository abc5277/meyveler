/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
class Meyveler{
    public:
         string adi; 
         string rengi;
         void yapılan(){
             cout<< adi<< "yiyor"<<endl;
         }
};

int main()
{
    Meyveler meyve1;
    meyve1.adi = "cilek";
    meyve1.rengi = "kırmızı";
   
   Meyveler meyve2;
   meyve2.adi = "erik";
   meyve2.rengi = "yesil";
   
    cout<<"meyve 1: " << meyve1.adi<<endl;
    cout<<"meyve 2: " << meyve2.adi<<endl;
    meyve1.yapılan ();
    meyve2.yapılan ();
     
    return 0;
}