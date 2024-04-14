#include <stdio.h>
#include <string.h>

int main()
{
    char n[80];
    int a;

    scanf("%d",&a);

    for(int s = 0 ; s < a ; s++){

    scanf("%s", &n);
    


    int score = 0;
    int getscore = 0;


    for (int j = 0 ; j < strlen(n); j++)
    {
        if(n[j]=='O'){
            getscore += 1;
            score += getscore;

        }
        else if(n[j]=='X'){
            getscore = 0;
        }
    }

    printf("%d\n",score);


    }





    return 0;
}
