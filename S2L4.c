#include<stdio.h>

char print_menu() {
    char lettera;
    printf("%s" "Start menu:\n");
    printf("A -> Start new game\nB -> Exit game\n");
    printf("Lettera scelta:");
    scanf(" %c", &lettera);
    return lettera;
}

int gioca_partita()
{

    int punteggio = 0;
    char nick[20]= {'\0'};
    char risposta1, risposta2;
    printf ("Inserisci il tuo nickname\n");
    scanf (" %s", &nick);

    printf("Domanda numero 1:\n");
    printf("Quante dita ci sono in una mano\n");
    printf("A >> 3\nB >> 2\nC >> 5\n");
    scanf(" %c", &risposta1);

    if (risposta1 == 'C')
        {
            punteggio++;
        }

    printf("Domanda numero 2:\n");
    printf("Qual'è la capitale dell'italia?\n");
    printf("A >> Milano \nB >> Roma \nC >> Napoli \n");
    scanf(" %c", risposta2);

    if (risposta2 == 'B');
    {
        punteggio++;
    }
    printf ("Partita finita, hai totalizzato un punteggio di %s:%d\n", nick, punteggio);

    return 0;
}
int main (){
    print_menu();
    gioca_partita();
    return 0;
}
