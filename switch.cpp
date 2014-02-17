#include<stdio.h>
#include<conio.h>
#include <math.h>

int main ()
{
    int opc;
    int ca, co, h2; 
    double hip;
    int m=7;
    int num, suma=0,prod=1;
    
  
    printf("Elije una Opcion\n");
    printf("\n1.-Calcula la Hipotenusa\n");
    printf("2.-Serie de 7 con limite de 150\n");
    printf("3.-Suma y Producto\n");
    printf("4.-Salir");
    scanf("%d",&opc);
    
    do {
    switch (opc)
    {
          case 1:
               printf("\nIntroduce El Cateto Ayacente: ");
               scanf("%d",&ca);
               printf("\nIntroduce El Cateto Opuesto: ");
               scanf("%d",&co);
    
               ca=ca*ca;
               co=co*co;
               h2=ca+co;
               hip=sqrt(h2);
    
               printf("\nLa Hipotenusa Cuadrada es: %d",h2);
               printf("\nLa Hipotenusa es: %2f",hip);
               break;          
          case 2:
               while(m<150)
               {
       
               printf("\nEl valor de m es: %d",m);
               m=m+7;
               }
               break;
          case 3:
               while(suma<50 && prod<150)
               {
               printf("\nDame un entero: ");
               scanf("%d",&num);
       
               if(num%2==0)
               {
               suma=suma+num; 
               }    
               else 
               prod=prod*num;
     
               printf("\n La suma es : %d",suma);
               printf("\n El producto es: %d\n",prod);
               }
               break;      
    }
      
    }while(opc!=4);
    
    getch ();
    return 0;
    
}
