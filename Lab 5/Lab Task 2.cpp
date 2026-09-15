#include <stdio.h>
int main()
{
    char start, e;
    printf("Please say starting letter of country:\n");
    scanf("%c", &start);
    switch(start)
    {
        case 'A':
        case 'a':
            printf("Please say ending letter:\n");
            scanf("\n%c", &e);
            switch(e)
            {
                case 'A':
                case 'a':
                    printf("\n Alaska \n Albania \n Algeria");
                    break;
                default:
                    printf("\n No such country");
            }
            break;
        case 'B':
        case 'b':
        	printf("Please enter the ending letter\n");
        	scanf("\n%c", &e);
        	switch(e)
        	{
        		case 'S':
                case 's':
                    printf("\n Bahamas \n Belarus");
                    break;
                default:
                    printf("\n No such country");
            }
            break;
        case 'P':
        case 'p':
        	printf("Please enter the ending letter :\n");
        	scanf("\n%c", &e);
        	switch(e)
        	{
        		case 'N':
                case 'n':
                    printf("\n Pakistan");
                    break;
                default:
                    printf("\n No such country");
            }
            break;
    default:
        printf("No country selected!");
    }
    return 0;
}

        		
			
