#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float a,b,c,d,e,f,g,h,i,j,k,l,X,Y,Z;
    int choix;
    do{
        printf("=== Menu ===\n\n");
        printf("1:Systeme d'equation a deux inconnues.\n");
        printf("2:Systeme d'equation a trois inconnues.\n");
        printf("3:Equation du premier degre.\n");
        printf("4:Equation du second degre.\n");
        printf("5:Verification de la racine d'un polynome.\n");
        printf("\nTaper 0 pour quitter\n");
        scanf("%d",&choix);

        switch (choix){
            case 1:
                printf("Vous avez choisi pour la resolution du systeme d'equations à deux inconnues.\n\n");
                printf("aX+bY=c\n");
                printf("dX+eY=f\n");
                printf("Entrer les valeurs de:\n");
                printf("a=");scanf("%f",&a);
                printf("b=");scanf("%f",&b);

                printf("c=");scanf("%f",&c);
                printf("d=");scanf("%f",&d);

                printf("e=");scanf("%f",&e);
                printf("f=");scanf("%f",&f);

                Y=(a*f-d*c)/(a*e-d*b);
                X=(c-b*Y)/a;

                printf("la solution de ce systeme est le couplesuivant");
                printf("(%.2f;%.2f).\n\n", X,Y);

            break;

            case 2:
                printf("Vous avez choisi pour la resolution du systeme d'equations a trois inconnues.\n\n");
                printf("aX+bY+cZ=d\n");
                printf("eX+fY+gZ=h\n");
                printf("iX+jY+kZ=l\n");
                printf("Entrer les valeurs de:\n");
                printf("a=");scanf("%f" ,&a);
                printf("b=");scanf("%f",&b);

                printf("c=");scanf("%f",&c);
                printf("d=");scanf("%f",&d);

                printf("e=");scanf("%f",&e);
                printf("f=");scanf("%f",&f);

                printf("g=");scanf("%f",&g);
                printf("h=");scanf("%f",&h);

                printf("i=");scanf("%f",&i);
                printf("j=");scanf("%f",&j);

                printf("k=");scanf("%f",&k);
                printf("l=");scanf("%f",&l);

                Z=((a*l-i*d)*(a*f-b*e)+(b*i-a*j)*(a*h-e*d))/((a*j-b*i)*(e*c-a*g)+(a*k-i*c)*(a*f-b*e));
                Y=((a*h-e*d)+(e*c-a*g)*Z)/((a*f-b*e));
                X=(d-b*Y-c*Z)/a;

                printf("la solution de ce systeme est le couple suivant");
                printf("(%.2f;%.2f;%.2f).\n\n", X,Y,Z);

            break;

            case 3:
                printf("Vous avez choisi pour la resolution d'une equation du premier degre.\n\n");
                printf("aX+b=0\n");
                printf("a=");scanf("%f",&a);
                printf("b=");scanf("%f",&b);

                printf("La solution est X=%.0f/%.0f",-b,a);

                X=(-b)/a;
                printf("=%.2f\n\n",X);

            break;

            case 4:
                printf("Vous avez choisi pour la resolution d'une equation du second degre.\n\n");
                float delta,Rdelta,X1,X2,Xo;

                printf("ax2+by+c=0\n");
                printf("Entrer les valeur de\n");

                printf("a=");scanf("%f",&a);
                printf("b=");scanf("%f",&b);
                printf("c=");scanf("%f",&c);

                delta=b*b - 4*a*c;
                printf("le discriminant vaut %.0f\n",delta);

                if (delta<0){
                    printf("==le discriminat est negatif==\n");
                    printf("Donc impossible dans R!\n\n");
                }
                else if (delta>0){
                    Rdelta= sqrt (delta);
                    printf("==la racine carree du discriminaant est %.2f!==\n",Rdelta);

                    X1=(-b-Rdelta)/ (2*a);
                    X2=(-b+Rdelta)/(2*a);

                    printf("La premiere racine est X1=%.2f\nLa deuxieme racine est X2=%.2f.\n\n", X1,X2);

                }
                else{
                    Xo=-b/(2*a);
                    printf("nous avons une racine double: %.2f.\n\n",Xo);
                }

            break;

            case 5:
                printf("Vous avez choisi pour la verification de la racine d'un polynome.\n");
                float Poly,X;

                do{//verification polynome
                    printf("==MENU==\n\n");
                    printf("1. Second degre.\n");
                    printf("2. Troisieme degre.\n");
                    printf("3. Quatrieme degre.\n");
                    printf("4. Cinquieme degre.\n");
                    printf("\nVotre choix ?");
                    scanf("%d", &choix);

                    switch(choix){
                        case 1:
                            printf("verification de la racine d'un polynome du second degre.\n");
                            printf("P(X)=aX^2+bX+c=0\n");
                            printf("Entrer les valeurs de:\n");
                            printf("a=");scanf("%f",&a);
                            printf("b=");scanf("%f",&b);
                            printf("c=");scanf("%f",&c);

                            printf("la racine a verifier:");
                            scanf("%f",&X);
                            Poly=a*X*X + b*X + c;

                            if(Poly==0){
                                printf("P(%.2f)=0 donc %.2f est une racine dupolynome de P(X).\n",X,X);
                            }
                            else{
                                printf("P(%.2f)= %.2f donc %.2f n'est pas une racine de P(X).\n",X,Poly,X);
                            }

                        break ;

                        case 2:
                            printf("verification de la racine d'un polynome du troisieme degre.\n");
                            printf("P(X)=aX^3+bX^2+cX+d=0\n");
                            printf("Entrer les valeurs de:\n");
                            printf("a=");scanf("%f",&a);
                            printf("b=");scanf("%f",&b);
                            printf("c=");scanf("%f",&c);
                            printf("d=");scanf("%f",&d);

                            printf("la racine a verifier:");
                            scanf("%f",&X);
                            Poly=a*X*X*X + b*X*X + c*X + d;

                            if(Poly==0){
                                printf("P(%.2f)=0 donc %.2f est une racine du polynome de P(X).\n",X,X);
                            }
                            else{
                                printf("P(%.2f)= %.2f donc %.2f n'est pas une racine de P(X).\n",X,Poly,X);
                            }

                        break;

                        case 3:
                            printf("verification de la racine d'un polynome du quatrieme degre.\n");
                            printf("P(X)=aX^4+bX^3+cX^2+dX'+e=0\n");
                            printf("Entrer les valeurs de:\n");
                            printf("a=");scanf("%f",&a);
                            printf("b=");scanf("%f",&b);
                            printf("c=");scanf("%f",&c);
                            printf("d=");scanf("%f",&d);
                            printf("d=");scanf("%f",&d);
                            printf("e="); scanf("%f",&e);

                            printf("la racine a verifier:");
                            scanf("%f",&X);
                            Poly=a*X*X*X*X + b*X*X*X + c*X*X + d*X +e;

                            if(Poly==0){
                                printf("P(%.2f)=0 donc %.2f est une racine du polynome de P(X)\n",X,X);
                            }
                            else{
                                printf("P(%.2f)= %.2f donc %.2f n'est pas une racine de P(X)\n",X,Poly,X);
                            }

                        break;

                        case 4:
                            printf("verification de la racine d'un polynome du cinquieme degre.\n");
                            printf("P(X)=aX^5+bX^4+cX^3+dX^2+eX+f=0\n");
                            printf("Entrer les valeurs de:\n");
                            printf("a=");scanf("%f",&a);
                            printf("b=");scanf("%f",&b);
                            printf("c=");scanf("%f",&c);
                            printf("d=");scanf("%f",&d);
                            printf("e=");scanf("%f",&e);
                            printf("f="); scanf("%f",&f);

                            printf("la racine a verifier:");
                            scanf("%f",&X);
                            Poly=a*X*X*X*X*X + b*X*X*X*X + c*X*X*X + d*X*X + e*X + f;

                            if(Poly==0){
                                printf("P(%.2f)=0 donc %.2f est une racine du polynome de P(X)\n",X,X);
                            }
                            else{
                                printf("P(%.2f)= %.2f donc %.2f n'est pas une racine de P(X)\n",X,Poly,X);
                            }
                        break;

                        default:
                            printf("*Veillez verifier votre choix!\n\n");
                        break;
                        }
            }while(choix !=0);//fin verification polynome

            break;

            default:
                printf("*Veiller verifier votre choix!\n\n");
            break;
            }
    }while(choix !=0);

    return 0;
}
//Idrissa Nabile Sall 1er du nom.
