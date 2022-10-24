#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main()
{
    char notes[25];
    char grd;

    printf("Input the grade: ");
    scanf("%c", &grd);

    grd = toupper(grd);

    switch(grd)
    {
    case 'E':
        strcpy(notes, " Excellent");
        break;
    case 'V':
        strcpy(notes, " Very Good");
        break;
    case 'G':
        strcpy(notes, " Good ");
        break;
    case 'A':
        strcpy(notes, " Average");
        break;
    case 'F':
        strcpy(notes, " Fails");
        break;
    default :
        strcpy(notes, "Invalid Grade Found. \n");
        break;
    }
    printf("You have chosen  : %s\n", notes);
}

