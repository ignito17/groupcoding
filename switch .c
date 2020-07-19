#include <stdio.h>
#include <stdlib.h>
   int main()
{
	int ID, paswd, a, b, c, o;
	while (ID!=500)
	{
    printf("please enter ur ID\n");
    scanf("%d", & ID);
    switch (ID) 
    {
    case 500:
    while (paswd!=123)
    {
    printf("please enter ur password\n" );
    scanf("%d", & paswd);
    switch (paswd)
    {
    	case 123:
    	while(o!=4)
    	{
    	printf("Welcome dear user\nwe have following services available\n\n\n1.addition\n2.substraction\n3.multiply\n4.exit\n\n\n");
    	printf("please select option of ur choice\n");
    	scanf("%d", & o);
    	switch (o) 
        {
        	case 1:
        	printf("\nplease input two numbers\n");
        	scanf("%d\n%d",&a, &b);
        	c=a+b;
        	printf("the result is =%d\n\n\n",c);
        	break;
        	case 2:
        	printf("\nplease input two numbers\n");
        	scanf("%d\n%d",&a, &b);
        	c=a-b;
        	printf("the result is =%d\n\n\n",c);
        	break;
        	case 3:
        	printf("\nplease input two numbers\n");
        	scanf("%d\n%d",&a, &b);
        	c=a*b;
        	printf("the result is =%d\n\n\n",c);
        	break;
        	case 4:
        	printf("visit again please :)\n");
        	void exit () ;  	
        }
    	}
    	break;
    	default :
    	printf("incorrect password, try again\n") ;
    }
    }
    break;
    default :
    printf("wrong id, please try again\n");
    }
	}
   
} 