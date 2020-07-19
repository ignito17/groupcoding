#include <stdio.h>
   int main()
{
	int ID, paswd;
	while (1)
	{
    printf("please enter ur ID\n");
    scanf("%d", & ID);
    switch (ID) 
    {
    case 500:
    printf("please enter ur password\n" );
    scanf("%d", & paswd) ;
    break ;
    switch (paswd)
    {
    	case 123:
    	printf("Welcome dear user") ;
    }
    default :
    printf("wrong id, please try again\n");
    }
	}
   
} 