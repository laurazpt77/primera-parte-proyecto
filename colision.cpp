#include "mov_parabolico.h"
#include "colision.h"

void Colision()
{
  float ma1, ma2;
  float vi1, vi2;
  float vf1, vf2;

  cout << "\t\t\tFUNCION DE COLISION "  << endl;

  cout << "\ningrese primera masa "  << endl;
  cin >>ma1;
  cout << "ingrese segunda masa" << endl;
  cin >>ma2;
  cout << "ingrese velocidad inicial de ma1" << endl;
  cin >>vi1;
  cout << "ingrese velocidad inicial de ma2" << endl;
  cin >>vi2;

  if (vi2 !=0){

      vf1=((ma1-ma2)/(ma1+ma2))*vi1+((2*ma2)/(ma1+ma2))*vi2;   
      vf2=((2*ma1)/(ma1+ma2))*vi1-((ma1-ma2)/(ma1+ma2))*vi2;      
  }
   else{

      vf1= ((ma1-ma2)/(ma1+ma2))*vi1;         
      vf2= ((2*ma1)/(ma1+ma2))*vi1;           

   }
  cout << "velocidad final de ma1 es: "<<vf1<< " m/s " << endl;
  cout << "velocidad final de ma2 es: "<<vf2<< " m/s " << endl;
}
