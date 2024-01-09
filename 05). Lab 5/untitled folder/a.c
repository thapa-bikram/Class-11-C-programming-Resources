#include<stdio.h>
int main()
{
    float pi=3.14;
    int radius;
	printf("Enter a radius\n");
    scanf("%i",&radius);
    printf("Radius is %d\n",radius);
    printf("Radius is %f\n",radius);
    printf("Radius is %f\n",(float)radius); //Type casting to float type
	printf("The entered value is %2.2f\n",2*pi*radius);
	return 0;
}