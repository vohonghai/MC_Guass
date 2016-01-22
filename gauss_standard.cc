#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream> 
using namespace std;
#define Pi 3.14159
#define Nevent 10

int main ()
{
  float r1,r2,x1,x2,gauss;
  ofstream luufile;
  luufile.open ("C:/Users/Administrator/Desktop/data.txt");

/* initialize random seed: */
  srand (time(NULL)); 

  for (int n=0;n<Nevent;n++)
  {
  /* Xay dung standard Gauss simulation*/
 
  r1=(float)rand()/RAND_MAX; //random 0 -> 1 
  r2=(float)rand()/RAND_MAX; //random 0 -> 1
  x1=sqrt(-2.*log(r1));
  x2=sin(2.*Pi*r2); 
  gauss=x1*x2;

  cout<<r1<<"\n"<<r2<<endl;
  cout<< x1<<"\n"<<x2<<endl;
  cout<<gauss<<endl;

  luufile<<gauss<<"\n";
  
  r1=0.;r2=0.;x1=0.;x2=0.;gauss=0.;
  }

 luufile.close();

 return 0;
}
