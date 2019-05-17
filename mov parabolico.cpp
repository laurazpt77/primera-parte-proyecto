#include "mov_parabolico.h"

void mov_parabolico_friccion()
{

  // Variables para movimiento sin fuerza friccion

  float v0=0;                          
  float y0=0;                          
  float theta=0;                       
  float t=0;                           
  float vy,vx;                         
  float x,y;                           

  // Variables para movimiento con fuerza de friccion

  float k=0;                           
  float m=0;                           
  float alpha=0;                       
  float rad=0;                         
  float vm=0;                          
  float vxf, vyf;                      
  float ax, ay;                        
  float xf, yf;                        

  cout << "ingrese velocidad inicial" << endl;
  cin >> v0;
  cout << "ingrese posicion inicial en y" << endl;
  cin >> y0;
  cout << "ingrese angulo" << endl;
  cin >> theta;
  cout << "ingrese tiempo" << endl;
  cin >> t;
  cout << "ingrese friccion" << endl;
  cin >> k;

  float mp=t;                      
  t=0;

  if (k == 0){


      cout << "\t\t\t MOVIMIENTO PARABOLICO SIN FRICCION" << endl;

      for(int i=0;i<=mp;i++)
       {

        x= v0*cos((theta*PI)/180)*t;                       
        y= y0+v0*sin((theta*PI)/180)*t-0.5*g*pow(t,2);     
        vx= v0*cos((theta*PI)/180);                        
        vy= v0*sin((theta*PI)/180)-g*t;                    

        cout << "\nposicion en x para t= "<<t << " seg. es: "<<x<< " m " << endl;
        cout << "posicion en y para t= "<<t<<" seg. es: "<<y<< " m " <<  endl;
        cout << "velocidad en x par t= "<<t<<" seg. es: "<<vx<< " m/s " <<  endl;
        cout << "velocidad en y para t= "<<t<<" seg. es: "<<vy<< " m/s " << endl;
        cout <<endl;

        t++;

       }
   }
    else {

         cout << "ingrese masa" << endl;
         cin >> m;
         cout << "ingrese radio" << endl;
         cin >> rad;

         cout << "\t\t\tMOVIMIENTO PARABOLICO CON FRICCION" << endl;

          for(int i=0;i<=mp;i++)
          {
              // estas dos ecuaciones se toman del movimieno parablico sin friccion, para hallar el angulo de la friccion

              vx= v0*cos((theta*PI)/180);
              vy= v0*sin((theta*PI)/180)-g*t;
              alpha= atan(vx/vy);


              // las siguientes ecuaciones describen el movimiento con friccion

              vm=sqrt(pow(vx,2)+pow(vy,2));                            
              ax= -((k*pow(vm,2)*pow(rad,2))/m)*cos(alpha*PI/180);     
              ay= -((k*pow(vm,2)*pow(rad,2))/m)*sin(alpha*PI/180)-g;   
              vxf= v0*cos(theta*PI/180)+(ax*t);                       
              vyf= v0*sin(theta*PI/180)+(ay*t);                       

              xf= v0*cos(theta*PI/180)*t+(1/2)*ax*pow(t,2);           
              yf= y0+v0*sin(theta*PI/180)*t+(1/2)*ay*pow(t,2);        



              cout<<"\nposicion en x para t= "<<t<<" seg. es: "<<xf<< " m " <<endl;
              cout<<"posicion en y para t= "<<t<<" seg. es: "<<yf<< " m " <<endl;
              cout<<"Aceleracion en x para t= "<<t<<" seg. es: "<<ax<< " m/s^2 " <<endl;
              cout<< "Aceleracion en y para t= "<<t<<" seg. es: "<<ay<< " m/s^2 " <<endl;
              cout<< "velocidad en x para t= "<<t<<" seg. es: "<<vxf<< " m/s " <<endl;
              cout<< "velocidad en y para t= "<<t<<" seg. es: "<<vyf<< " m/s " <<endl;
              cout <<endl;
              t++;
          }

   }


}
