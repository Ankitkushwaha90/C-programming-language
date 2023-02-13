#include<stdio.h>
#include<conio.h>
#include<math.h>

int  main(){
	double p, r, t, CI, x,z, y, e;
	printf("Enter the value of profite 'p' \n");
	scanf("%lf", &p);
	

	printf("Enter the value of rate 'r' \n");
	scanf("%lf", &r);

	printf("Enter the value of time 't' \n");
	scanf("%lf", &t);

	printf("Value of profite 'p': %.1lf\n Value of rate 'r': %.1lf\n Value of time 't': %.3lf\n", p,r,t);
	
	
	x=1+r;
	printf("x is 1+r = %lf \n", x);

	z = x/100;
	printf("z is x/100 = %.3lf \n", z);
	
	
	e=pow(z,t);
	printf("e is z of power t = %.12lf \n", e);

	y=p*e;
	printf("y= p*e => y= %.9lf",y);

	printf("\nYour formula of CI = p*(pow(1+r/100),t)\n And answer is %.12lf", y);
	getch();
	



}