#include<stdio.h>
#include<conio.h>
#include<math.h>


void main()
{
	float a, b, c, det, R, R1, R2, Real, Img;
	printf("Enter coefficient of Quad Equ: \n");
	scanf("%f  %f  %f", &a, &b, &c);
	det = pow(b,2) - 4*a*c;
	if(det == 0)
	{
		printf(" Roots are Real and equal.\n ");
		R = (-b)/(2 * a);
		printf("Roots is: %f \n ",R);
	}
	else if(det > 0)
	{
		printf(" Roots are Real and unequal.\n ");
		R1 = (-b + sqrt(det) )/(2 * a);
		R2 = (-b - sqrt(det) )/(2 * a);
		printf("Roots are:\n R1 = %f\n R2 = %f\n",R1, R2);
	}
	else 
	{
		printf(" Roots are Imaginary and unequal.\n ");
		det = -det; // det = -2  // - ( -2)= 2
		Real = -b/(2*a)	;
		Img = sqrt(det)	/ (2*a);	
		printf("Roots are:\n R1 = %f +  i %f\n R2 = %f -  i %f\n",Real,Img, Real, Img);
	}
	getch();	
}
