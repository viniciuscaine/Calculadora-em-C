#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

void imprimir_menu();
void sub_menu1();
void sub_menu2();
double graus_para_radianos(double grau);


int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int opcao_do_usuario;
	int opcao_do_usuario2;
	int opcao_do_usuario3;
	
	printf("------------------------CALCULADORA----------------------------");

	do
	{
		imprimir_menu();
		printf("\nInforme a opera��o desejada: ");
		scanf("%d", &opcao_do_usuario);

		switch(opcao_do_usuario)
		{
			case 1:
				
				do
				{
				sub_menu1();
				printf("\n\nInforme a opera��o desejada: ");
				scanf("%d", &opcao_do_usuario2);
				
				switch(opcao_do_usuario2)
				{
					case 1: 
					
					float aa,bb,soma;
				
					printf ("\nDigite o valor de a: ");
	           		scanf ("%f", &aa);
	           		printf ("Digite o valor de b: ");
		        	scanf ("%f", &bb);
					
					soma=aa+bb;
				
					printf ("\nO resultado �= %f\n", soma);
				
					Sleep(2000);
					break;
					
					case 2:
						
					float cc,dd,sub;
				
					printf ("\nDigite o valor de a: ");
	           		scanf ("%f", &cc);
	           		printf ("Digite o valor de b: ");
		        	scanf ("%f", &dd);
					
					sub=cc-dd;
				
					printf ("\nO resultado �= %f\n", sub);
				
					Sleep(2000);
					break;
						
					case 3:
						
					float ee,ff,multi;
				
					printf ("\nDigite o valor de a: ");
	           		scanf ("%f", &ee);
	           		printf ("Digite o valor de b: ");
		        	scanf ("%f", &ff);
					
					multi=ee*ff;
				
					printf ("\nO resultado �= %f\n", multi);
				
					Sleep(2000);
					break;
						
					case 4: 
					
					float gg,hh,div;
				
					printf ("\nDigite o valor de a: ");
	           		scanf ("%f", &gg);
	           		printf ("Digite o valor de b: ");
		        	scanf ("%f", &hh);
					
					div=gg/hh;
				
					printf ("\nO resultado �= %f\n", div);
				
					Sleep(2000);
					break;
					
					case 5:
					
					printf("\nVoltando ao menu anterior...");
					
					Sleep(2000);
					break;
					
					defaut: 
					
					printf("Op��o inv�lida");
					break;
					}
					
				}while(opcao_do_usuario2 != 5);
				break;
				
			case 2:
					
				do
				{
				sub_menu2();
				printf("\n\nInforme a opera��o desejada: ");
				scanf("%d", &opcao_do_usuario3);
				
				switch(opcao_do_usuario3)
				{
					case 1: 
					
					float b,c,ar;
				
					printf ("\nDigite o valor da largura: ");
	           		scanf ("%f", &b);
	           		printf ("Digite o valor do comprimento: ");
		        	scanf ("%f", &c);
					
					ar=b*c;
				
					printf ("\nO resultado �= %f", ar);
				
					Sleep(2000);
					break;
					
					case 2:
						
					float ba,co,h,vpa;
				
					printf ("\nDigite o valor da largura: ");
	           		scanf ("%f", &ba);
	           		printf ("Digite o valor do comprimento: ");
		        	scanf ("%f", &co);
		        	printf ("Digite o valor da altura: ");
		        	scanf("%f",&h);
					
					vpa=ba*co*h;
				
					printf ("\nO resultado �= %f", vpa);
				
					Sleep(2000);
					break;
						
					case 3:
						
					float base,aq;
				
					printf ("\nDigite o valor de um dos lados: ");
	           		scanf ("%f", &base);
	           							
					aq=base*base;
				
					printf ("\nO resultado �= %f", aq);
				
					Sleep(2000);
					break;
						
					case 4: 
					
					float bc, vc;
				
					printf ("\nDigite o valor do lado: ");
	           		scanf ("%f", &bc);
	           						
					vc=bc*bc*bc;
				
					printf ("\nO resultado �= %f", vc);
				
					Sleep(2000);
					break;
					
					case 5: 
					
					float at,bt,ht;
				
					printf ("\nDigite o valor da base do tri�ngulo: ");
	           		scanf ("%f",&bt);
	           		printf ("Digite o valor da altura do tri�ngulo: ");
		        	scanf ("%f",&ht);
					
					at=(bt*ht)/2;
				
					printf ("\nO resultado �= %f", at);
				
					Sleep(2000);
					break;
					
					case 6: 
					
					float lp,hp,vp;
				
					printf ("\nDigite o valor da �rea da base: ");
	           		scanf ("%f",&lp);
		        	printf("Digite o valor da altura: ");
		        	scanf("%f",&hp);
					
					vp=(lp*hp)/3;
				
					printf ("\nO resultado �= %f", vp);
				
					Sleep(2000);
					break;
					
					case 7: 
					
					float ra,ac;
				
					printf ("\nDigite o valor do raio: ");
	           		scanf ("%f", &ra);
	           							
					ac=M_PI*(ra*ra);
									
					printf ("\nO resultado �= %f", ac);
				
					Sleep(2000);
					break;
					
					case 8: 
					
					float ve,re, vesfera;
				
					printf ("\nDigite o valor do raio: ");
	           		scanf ("%f", &re);
	    					
					vesfera=(4*M_PI*(re*re*re))/3;
				
					printf ("\nO resultado �= %f", vesfera);
				
					Sleep(2000);
					break;
					
					case 9: 
					
					float rci,hci,vci;
				
					printf ("\nDigite o valor do raio: ");
	           		scanf ("%f", &rci);
	           		printf ("Digite o valor da altura: ");
		        	scanf ("%f", &hci);
		        	
					vci=M_PI*(rci*rci)*hci;
				
					printf ("\nO resultado �= %f", vci);
				
					Sleep(2000);
					break;
					
					case 10:
					
					printf("\nVoltando ao menu anterior...");
					Sleep(2000);
					break;
								
					}
					
				}while(opcao_do_usuario3 !=10);
				break;
				
     		case 3:
				float a,b,c,x1,x2,delta;
	
            	printf ("\nDigite o valor de a: ");
            	scanf ("%f", &a);
             	printf ("Digite o valor de b: ");
	            scanf ("%f", &b);
             	printf ("Digite o valor de c: ");
             	scanf ("%f", &c);
	
             	delta=(b*b)-4*a*c;
	
              	x1 = (-b + sqrt(delta))/(2*a);
              	x2 = (-b - sqrt(delta))/(2*a);
	
            	if(delta==0)
              	{
                	printf ("\nAmbas as raizes s�o: %f",x1);
                }
	            else if(delta<0)
	           	{
	                printf ("\nN�o existe raiz real");
                }
            	else
            	{
              	printf ("\nO valor de x1= %f",x1);
            	printf ("\nO valor de x2= %f",x2);
                }  
                
	         	Sleep(2000);
	
				break;

			case 4:
			    int base,exp,pot; 
	            
	            printf("\nDigite a base: ");
	            scanf("%d",&base);
	            printf("Digite o expoente: " );
	            scanf("%d",&exp);
	            pot=pow (base,exp);
	            printf("\nA pot�ncia �= %d\n",pot); 
	            Sleep(2000);
				break;

			case 5:
				int raizquadrada;
		       
	            printf("\nDigite um n�mero: ");
	            scanf("%d",&raizquadrada);
	            printf("\nA raiz quadrada de %d � %f\n\n", raizquadrada, sqrt(raizquadrada));
	            Sleep(2000);
				break;

			case 6:
				int raizcubica;
		        
	            printf("\nDigite um n�mero: ");
	            scanf("%d",&raizcubica);
	            printf("\nA raiz c�bica de %d � %f\n\n", raizcubica, cbrt(raizcubica));
	            Sleep(2000);
				break;

			case 7:
				double angulo, logaritmo_numero;
		       
	         	printf("\nInforme o valor desejado: ");
	        	scanf("%lf", &logaritmo_numero);
	         	printf("\nO logaritmo de %lf na base %d �: %.8lf", logaritmo_numero, 10, log10(logaritmo_numero));
				Sleep(2000); 
				break;
				
			case 8:
				int fat, n;
			
				printf("\nDigite um valor para ser calculado: ");
				scanf("%d", &n) ;
				
				for(fat = 1; n > 1; n = n - 1)
				  {
				      fat = fat * n;
				      printf("%i, ",fat);
				  }
				printf("\n\nO valor do fatorial �= %d ", fat);
				Sleep(2000); 
				break;
				
			case 9:
				printf("\nInforme o �ngulo: ");
				scanf("%lf", &angulo);
				printf("\nO seno de %8lf �: %.8lf", angulo, sin(graus_para_radianos(angulo)));
				Sleep(2000);
				break;

			case 10:
				printf("\nInforme o �ngulo: ");
				scanf("%lf", &angulo);
				printf("\nO cosseno de %8lf �: %.8lf", angulo, cos(graus_para_radianos(angulo)));
				Sleep(2000);
				break;

			case 11:
				printf("\nInforme o �ngulo: ");
				scanf("%lf", &angulo);
				printf("\nA tangente de %8lf �: %.8lf", angulo, tan(graus_para_radianos(angulo)));
				Sleep(2000);
				break;

			case 12:
				printf("\nEncerrando o programa...");
				break;

			default:
				printf("\nOp��o inv�lida");
				Sleep(2000);
				break;


		}
	}while(opcao_do_usuario != 12);


	printf("\n\n");
	return 0;
}


void imprimir_menu()
{
	printf("\n\nDigite o n�mero referente as fun��es desejadas:\n");
	printf("\n1 - C�lculos simples");
	printf("\n2 - C�lculos de �rea e volume");
	printf("\n3 - C�lculo para resolu��o de equa��o do segundo grau (Bhaskara)");
	printf("\n4 - C�lculo para resolu��o de pot�ncia");
	printf("\n5 - C�lculo para resolu��o de raiz quadrada");
	printf("\n6 - C�lculo para resolu��o de raiz c�bica");
	printf("\n7 - Calcular o logaritmo de um n�mero na base 10");
	printf("\n8 - C�lculo de fatorial");
	printf("\n9 - C�lculo de seno");
	printf("\n10 - C�lculo de coseno");
	printf("\n11 - C�lculo de tangente");
	printf("\n\n12 - Sair do Programa\n");
}

void sub_menu1()
{
	printf("\n1 - C�lculo simples de adi��o");
	printf("\n2 - C�lculo simples de subtra��o");
	printf("\n3 - C�lculo simples de multiplica��o");
	printf("\n4 - C�lculo simples de divis�o");
	
	printf("\n\n5 - Voltar ao menu anterior");
}

void sub_menu2()
{
	printf("\n\n1 - �rea do Ret�ngulo");
	printf("\n2 - Volume do Paralelep�pedo");
	
	printf("\n          3 - �rea do Quadrado");
	printf("\n          4 - Volume do Cubo");
	
	printf("\n                    5 - �rea do Tri�ngulo");
	printf("\n                    6 - Volume da Pir�mide");
	
	printf("\n                              7 - �rea do C�rculo");
	printf("\n                              8 - Volume da Esfera");
	printf("\n                              9 - Volume do Cilindro");
	
	printf("\n\n10 - Voltar ao menu anterior");
}
double graus_para_radianos(double grau)
{
	return grau/180.0 * M_PI;
}
