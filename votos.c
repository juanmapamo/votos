#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) 
{
    int candidato[5];
    int voto;
    do
    {
        printf("Ingrese el voto por el candidato de su preferencia");
        scanf("%d", &voto);
        if (voto>0 && voto<6)
        {
            candidato[voto-1]++;
        }
        
    } while (voto!=0);
    
}