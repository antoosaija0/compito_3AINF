#include<stdio.h>

#include"math.h"
#include"pow.h"
#include"trace.h"

int main(void){
    int A, B;
    float risultato;
    char scelta;

    printf("Quale operazione vuoi svolgere:\n");
    printf("a) somma b)sottrazione c)moltiplicazione d)divisione e)potenza\n");
    scanf("%c", &scelta);

    switch (scelta){
        case 'a':
        printf("Inserire il primo valore\n");
        scanf("%d", &A);

        printf("Inserire il secondo valore\n");
        scanf("%d", &B);

        risultato = somma(A,B);
        printf("%f\n", risultato);
        break;

        case 'b':
        printf("Inserire il primo valore\n");
        scanf("%d", &A);

        printf("Inserire il secondo valore\n");
        scanf("%d", &B);

        risultato= sottrazione(A,B);
        printf("%f\n", risultato);
        break;

        case 'c':
        printf("Inserire il primo valore\n");
        scanf("%d", &A);

        printf("Inserire il secondo valore\n");
        scanf("%d", &B);
        
        risultato= moltiplicazione(A,B);
        printf("%f\n", risultato);
        break;

        case 'd':
        printf("Inserire il primo valore\n");
        scanf("%d", &A);

        printf("Inserire il secondo valore\n");
        scanf("%d", &B);
        
        risultato= divisione(A,B);
        printf("%f\n", risultato);
        break;

        case 'e':
        printf("Inserire la base\n");
        scanf("%d", &A);

        printf("Inserire l'esponente\n");
        scanf("%d", &B);

        risultato= potenza(A,B);
        printf("%f\n", risultato);
        break;

        default:
        printf("Operazione non riconosciuta\n");

    }
}