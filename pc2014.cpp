#include<iostream>
#include<conio.h>
#include<math.h>




using namespace std;



int main()
{
	
int R,r;
float area, volumen;
float pi=3.1416;
cout<<"ingrese R";cin>>R;
cout<<"ingrese r";cin>>r;

area= 4*R*r*pow(pi,2);
volumen=2*pow(pi,2)*R*pow(r,2);
cout<<"area:"<<area<<endl;
cout<<"volumen:"<<volumen;
_getch();	
return 0;	
	
	
}

