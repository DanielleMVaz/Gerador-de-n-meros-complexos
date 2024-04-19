#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (void)
{

    setlocale(LC_ALL, "portuguese");

    struct opcao
    {

        float num1;
        float num2;
        float num3;
        float num4;
        float num5;
        float num6;
        float num7;
        float num8;


    };

    struct opcao gerar;

    int menu;

    printf("\n\t***************************GERANDO NÚMEROS COMPLEXOS*******************************************\n\n");

    printf("\n\t\tFórmula do número complexo: Z = (a + bi)\n");


    printf("\nEscreva um número para a letra A - primeiro número:");
    scanf("%f",&gerar.num1);

    printf("\nEscreva um número para a letra B - segundo número:");
    scanf("%f",&gerar.num2);

    printf("\n\n\t**********O número complexo para parte real será (%.2f) e para parte imaginária (%.2fi)********\n",gerar.num1,gerar.num2);


    printf("\n\n");

    printf("\nEscreva um número para a letra A - terceiro número:");
    scanf("%f",&gerar.num3);

    printf("\nEscreva um número para a letra B - quarto número:");
    scanf("%f",&gerar.num4);

    printf("\n\t*********O número complexo para parte real será (%.2f) e para parte imaginária (%.2fi)********\n",gerar.num3,gerar.num4);


    printf("\n\n");

    struct calculo
    {

        float soma1;
        float soma2;
        float sub1;
        float sub2;
        float multi1;
        float multi2;
        float multi3;
        float multi4;
        float multi5;
        float multi6;
        float multi7;
        float div1;
        float div2;
        float div3;
        float div4;
        float div5;
        float div6;
        float div7;
        float div8;
        float div9;
        float div10;
        float div11;
        float div12;

    };

    struct calculo menu1;


    printf("\n\t*********************MENU DE OPÇÃO - NÚMEROS COMPLEXOS***************************\n\n\n");

    printf("\n\t\t Após a escolha dos números escolha uma opção a ser executada:\n");

    printf("\n\t**********************************************************************************\n\n");

    printf("\n\tDigite (1) para ==> testar se é um número real puro.\n");

    printf("\n");

    printf("\n\tDigite (2) para ==> testar se é um número imáginario puro.\n");

    printf("\n");

    printf("\n\tDigite (3) para ==> somar os números.\n");

    printf("\n");

    printf("\n\tDigite (4) para ==> subtrair os números.\n");

    printf("\n");

    printf("\n\tDigite (5) para ==> multiplicar os números.\n");

    printf("\n");

    printf("\n\tDigite (6) para ==> dividir os números.\n");

    printf("\n");

    printf("\n\tDigite (7) para ==> testar se os números são iguais.\n");

    printf("\n");

    printf("\n\tDigite (8) para ==> gerar o conjugado de números.\n");

    printf("\n");

    printf("\n\tDigite (9) para ==> calcular o módulo do número.\n");

    printf("\n\t**********************************************************************************\n\n");

    printf("\n\t**************************OPÇÃO ESCOLHIDA******************************************\n\n");
    scanf("%d",&menu);

    printf("\n\n");

    printf("\n\n\n\n\t\t**********RESPOSTA DA OPÇÃO SELECIONADA **********\n\n");

    switch (menu)
    {

    case 1:

        if (gerar.num1 != 0 && gerar.num2 == 0)
        {

            printf("\n\n\t******PRIMEIRO NÚMERO COMPLEXO******\n");

            printf("\n\tO número complexo é real puro.Re(Z) = %.2f\n",gerar.num1);
        }
        else
        {
            printf("\n\n\t******PRIMEIRO NÚMERO COMPLEXO******\n");
            printf("\n\tO número complexo não é real puro.");

        }

        if (gerar.num3 != 0 && gerar.num4 == 0)
        {

            printf("\n\n\t******SEGUNDO NÚMERO COMPLEXO******\n");

            printf("\n\tO número complexo é real puro.Re(Z) = %.2f\n\n",gerar.num3);
        }
        else
        {
            printf("\n\n\t******SEGUNDO NÚMERO COMPLEXO******\n");

            printf("\n\tO número complexo não é real puro.\n\n");

        }


        break;


    case 2:

        if (gerar.num1 == 0 && gerar.num2 != 0)
        {

            printf("\n\n\t******PRIMEIRO NÚMERO COMPLEXO******\n");

            printf("\n\tO número é imaginário puro.Im(Z) = %.2f i\n\n",gerar.num2);
        }
        else
        {
            printf("\n\n\t******PRIMEIRO NÚMERO COMPLEXO******\n");
            printf("\n\tO número complexo não é imaginário puro.\n\n");

        }

        if (gerar.num3 == 0 && gerar.num4 != 0)
        {

            printf("\n\n\t******SEGUNDO NÚMERO COMPLEXO******\n");

            printf("\n\tO número é imaginário puro.Im(Z) = %.2f i\n\n",gerar.num4);
        }
        else
        {
            printf("\n\n\t******SEGUNDO NÚMERO COMPLEXO******\n");
            printf("\n\tO número complexo não é imaginário puro.\n\n");

        }

        break;


    case 3:

        menu1.soma1 = (gerar.num1 + gerar.num3);

        menu1.soma2 = (gerar.num2 + gerar.num4);

        printf("\n\tA soma é : %.2f  +  %.2f i\n\n", menu1.soma1, menu1.soma2);
        break;


    case 4:

        menu1.sub1 = (gerar.num1 - gerar.num3);

        menu1.sub2 = (gerar.num2 - gerar.num4);

        if (menu1.soma2>0)
        {
            printf("\n\tA subtração é : %.2f + %.2f i\n\n", menu1.sub1, menu1.sub2);
        }
        else
        {
            printf("\n\tA subtração é : %.2f   %.2f i\n\n", menu1.sub1, menu1.sub2);
        }
        break;


    case 5:

        menu1.multi1 = (gerar.num1 * gerar.num3);
        menu1.multi2 = (gerar.num1 * gerar.num4);
        menu1.multi3 = (gerar.num2 * gerar.num3);
        menu1.multi4 = (gerar.num2 * gerar.num4);
        menu1.multi5 = (menu1.multi2) + (menu1.multi3);

        if(menu1.multi4>0)
        {

            menu1.multi6 = (menu1.multi1 - menu1.multi4);

            if (menu1.multi5<0)
            {

                printf("\n\tA multiplicação é : %.2f  %.2f i \n\n",menu1.multi6,menu1.multi5);
            }
            else
            {
                printf("\n\tA multiplicação é : %.2f + %.2f i \n\n",menu1.multi6,menu1.multi5);
            }
        }

        if(menu1.multi4<0)
        {

            menu1.multi7 = menu1.multi1 + menu1.multi4;

            if (menu1.multi5<0)
            {

                printf("\n\tA multiplicação é : %.2f  %.2f i \n\n",menu1.multi6,menu1.multi5);
            }
            else
            {
                printf("\n\tA multiplicação é : %.2f + %.2f i \n\n",menu1.multi6,menu1.multi5);
            }
        }


        break;


    case 6:

        menu1.div1=(gerar.num1*gerar.num3);
        menu1.div2=(gerar.num1*gerar.num4);
        menu1.div3=(gerar.num2*gerar.num3);
        menu1.div4=(gerar.num2*gerar.num4);
        menu1.div5=(gerar.num3*gerar.num3);
        menu1.div6=(gerar.num3*gerar.num4);
        menu1.div7=(gerar.num4*gerar.num3);
        menu1.div8=(gerar.num4*gerar.num4);
        menu1.div9=(menu1.div2 + menu1.div3);
        menu1.div10=(menu1.div6 + menu1.div7);

        if(menu1.div4>0 && menu1.div8>0)
        {

            menu1.div11 = (menu1.div1) - (menu1.div4);
            menu1.div12 = (menu1.div1) - (menu1.div8);

            printf("\n\tA multiplicação é : %.2f  %.2f i / %.2f  %.2f i\n\n",menu1.div11,menu1.div9,menu1.div12,menu1.div10);
        }

        if(menu1.div4<0 && menu1.div8<0)
        {

            menu1.div11 = (menu1.div1) + (menu1.div4);
            menu1.div12 = (menu1.div1) + (menu1.div8);

            printf("\n\tA multiplicação é : %.2f  +  %.2f i / %.2f  +  %.2f i\n\n",menu1.div11,menu1.div9,menu1.div12,menu1.div10);
        }





        break;


    case 7:

        if (gerar.num1==gerar.num2 && gerar.num1==gerar.num3 && gerar.num1==gerar.num4 && gerar.num2==gerar.num3 && gerar.num2==gerar.num4 && gerar.num3==gerar.num4)
        {

            printf("\n\tTodos os números são iguais.\n");
        }
        else
        {
            if (gerar.num1==gerar.num2)
            {

                printf("\n\tO primeiro número é igual ao segundo número.\n");
            }
            else
            {
                if (gerar.num2==gerar.num3)
                {

                    printf("\n\tO segundo número é igual ao terceiro número.\n");
                }
                else
                {
                    if (gerar.num3==gerar.num4)
                    {

                        printf("\n\tO terceiro número é igual ao quarto número.\n");
                    }
                    else
                    {
                        if (gerar.num1==gerar.num4)
                        {

                            printf("\n\tO primeiro número é igual ao quarta número.\n");
                        }
                        else
                        {
                            if (gerar.num1==gerar.num3)
                            {

                                printf("\n\tO primeiro número é igual ao terceiro número.\n");
                            }
                            else
                            {
                                if (gerar.num2==gerar.num4)
                                {

                                    printf("\n\tO segundo número é igual ao quarto número.\n");
                                }
                                else
                                {
                                    if (gerar.num1!=gerar.num2 && gerar.num1!=gerar.num3 && gerar.num1!=gerar.num4 && gerar.num2!=gerar.num3 && gerar.num2!=gerar.num4 && gerar.num3!=gerar.num4)
                                    {

                                        printf("\n\tOs números não são iguais.\n");
                                    }

                                }

                            }

                        }
                    }

                }

            }

        }

        break;


    case 8:
        if(gerar.num2>0)
        {

            gerar.num5= gerar.num2*-1;

            printf("\n\tO conjugado do primeiro número complexo é : Z = %.2f %.2fi", gerar.num1,gerar.num5);
        }
        else
        {
            if(gerar.num2<0)
            {
                gerar.num6 = gerar.num2*-1;

                printf("\n\tO conjugado do primeiro número complexo é : Z = %.2f + %.2fi", gerar.num1,gerar.num6);

            }



        }

        if(gerar.num4>0)
        {

            gerar.num5= gerar.num4*-1;

            printf("\n\tO conjugado do primeiro número complexo é : Z = %.2f %.2fi", gerar.num3,gerar.num5);
        }
        else
        {
            if(gerar.num4<0)
            {
                gerar.num6 = gerar.num4*-1;
                printf("\n\tO conjugado do primeiro número complexo é : Z = %.2f + %.2fi", gerar.num3,gerar.num6);

            }

            break;


        case 9:
            printf("\n\t\t*******MÓDULO DO PRIMERIO NÚMERO COMPLEXO*******\n\n");

            gerar.num7 = sqrt(pow(gerar.num1,2)+ pow(gerar.num2,2));

            printf("|Z|= %.2f ", gerar.num7);



            printf("\n\t\t*******MÓDULO DO SEGUNDO NÚMERO COMPLEXO*******\n\n");
            gerar.num8 = sqrt(pow(gerar.num3,2)+ pow(gerar.num4,2));

            printf("|Z|= %.2f ", gerar.num8);


            break;

        default:
            printf("\n\t\t**********OPÇÃO DIGITADA É INVÁLIDA***************\n\n");




        }
    }
}
