#include <stdio.h>

int main ()

{
    char operador;
    double n1,n2;
    printf("Ingrese un operador: \n");
    scanf("%c",&operador);
    printf("Ingrese dos valores a calcular: \n");
    scanf("%If %If\n",&n1,&n2);

      switch (operador)
      {
        case ´+´:
        printf("%.1If + %.1If = %.1If\n",n1,n2,n1+n2);
        break;

        case ´-´:
        printf("%.1If - %.1If = %.1If\n",n1,n2,n1-n2);
        break;

        case ´*´:
        printf("%.1If * %.1If = %.1If\n",n1,n2,n1*n2);
        break;

        case ´/´:
        printf("%.1If / %.1If = %.1If\n",n1,n2,n1/n2);
        break;

        default:
        printf("Error\n");
      }

      return 0;
}
