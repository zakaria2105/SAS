#include<stdio.h>
int main()

{
    //D�claration
    int a, b , c,somme ,sous ,multi,div,rest;

    //Affectation
    c=5;

    //Demander � l'utilisateur les datas
    printf("donne a : ");
    scanf("%d", &a );
    printf("donne b : ");
    scanf("%d", &b );

    //Addition
    somme= a+b+c;
    printf("somme = %d \n",somme);

    //Soustraction
    sous = a-b;
    printf("sous = %d \n",sous);

    //Multiplication
    multi = a*b;
    printf("multi = %d \n",multi);

    //Division
    if(b==0){
        printf("error\n");
    }
    else{
        div = a/b;
        printf("div a/b = %d\n",div);
    }

    //Modulo
    if(b==0){
        printf("error");
    }
    else{
        rest=a%b;
        printf("div a/b = %d \n",rest);
    }
    return 0;
}
