#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Nom[20], Prenom[20], Sex;
    int Age, Tell;



    printf("Entrer votre Nom: ");
    scanf ("%s", &Nom);

    printf("Entrer votre Prenom: ");
    scanf ("%s", &Prenom);

    printf("Entrer votre Sex: ");
    scanf (" %c", &Sex);

    printf("Entrer votre Tell: ");
    scanf ("%d", &Tell);

    printf("Entrer votre Age: ");
    scanf ("%d", &Age);

    printf("Bonjour %s %s \n", Prenom, Nom);

    printf("Sex: %c \n", Sex);

    printf("Tell: %d \n", Tell);

    printf("Age: %d \n", Age);

    return 0;
}
