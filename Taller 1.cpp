#include <iostream> 
#include <math.h>


using namespace std;


//----------------------------------------------------

int first(int a, int b)
{
    int suma=0;
    
    for(int cont=0;cont < b;cont++)
    {
    suma=suma+a;
    }
    return suma;
}
//_--------------------------------------------------

int second(int a, int b)
{
    int p=0;
    int aux=a;
    for(int cont=0;cont<b-1;cont++)
    {
            p=first(aux,a);
            aux=p;
    }
    return p;
}

//----------------------------------------------------------------------------
int pol(int vec[], int x, int grado){
    int y=0;
    for(int i=0; i<=grado; i++){
            y= y + first(vec[i],second(x,grado-i));
            }
    return y;
}

//-----------------------------------------------------

int fourth(int a)
{
    int fact=0;
    int aux=1;
    for(int cont=0;cont<a;cont++)
    {
            fact=first(aux,cont+1);
            aux=fact;
    }
    return fact;
}

//-------------------------------------------

int fifth(int a, int b)
{
    int cont=0;
    while(a>=b)
    {
               a=a-b;
               cont++;
}
               return cont;
}

//--------------------------------------------
int main ()
{
    
    int k[]={4,2,1,10,20}; // Para el polinomio
    
    //cout<< first(5,5)<<endl; 
    //cout<< second(5,2)<<endl;
    //cout<<pol(k,2,4)<<endl;
    //cout<< fourth(4)<<endl;
   //cout<< fifth (33,3)<<endl;
    system ("pause");
}
    

