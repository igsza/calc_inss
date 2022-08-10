int main (int argc, char** argv) {

    float salario, inss, sal_liquido;

    printf("DIGITE SEU SALARIO: ");
    scanf("%f", &salario);

    if (salario <=1693.72)
    {
        inss =salario * 0.08;
    }
    else
    if(salario >= 1693.73 && salario <= 2822.90)
    {
        inss = salario * 0.09;
    }

    sal_liquido = (salario - inss);

    printf ("\n DESCONTO INSS: %f\n", inss);

    printf("\n Salario liquido %2.f\n", sal_liquido);

    return 0;

}