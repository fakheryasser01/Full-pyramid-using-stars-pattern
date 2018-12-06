#include <stdio.h>

int main (void)
{

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	unsigned int number ;

	printf("Please enter number of rows  \n");
	scanf("%d" , &number);
for (int rows =1 ; number >= rows ; rows++)
{
for (int span = number-1 ; span >= rows ; span-- )
{
printf(" ");
}
for (int star = 1 ; star <= (2*rows)-1 ; star++ )
{
printf("*");
}
printf("\n");

}




return 0;
}



