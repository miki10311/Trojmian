/*  kompilacja: Sun C: cc -Xc trojmian.c -lm
                GNU C: gcc -pedantic -Wall trojmian.c -lm*/
#include <stdio.h>
#include <math.h>

int main()
{
  float a,b,c,delta;

  printf("Program oblicza pierwiastki rownania w postaci\n");
  printf("     2\n");
  printf("  a x + b x +c =0\n");
  printf("Podaj wartosc a:"); /* brak litery 'f' w słowie printf */
  scanf("%f",&a);
  printf("Podaj wartosc b:");
  scanf("%f",&b);
  printf("Podaj wartosc c:");
  scanf("%f",&c);
  
  if (a==0.0) /* był jeden znak równości zamiast dwóch */   /*przypadek rownania liniowego */ 
    {
    if (b!=0.0)  /*na wszelki wypadek dopisałem .0 w kilku miejscach, aby nie było problemu z zmiennymi zmiennoprzecinkowymi*/
      printf("Jest to równanie liniowe o rozwiazaniu x=%f\n",-c/b);    /* brak średnika */
    else  if (c==0.0)  /* oraz a==b==0.0 */
      printf("Rozwiazaniem jest dowolne x\n");
    else              /* a==b==0.0 != c  */
      printf("Brak rozwiazan\n");
    }
  else {   /*przypadek rownania kwadratowego */
    delta=pow(b,2)-4.0*a*c;



  if (delta<0.0)
      printf("Brak rozwiazan rzeczywistych\n");
    else if (delta>0.0)           /* delta>=0 */
	    printf("Rozwiazaniem sa x1=%f i x2=%f\n",(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
    else
      printf("Rozwiazaniem sa x1=x2=%f\n",-b/(2*a));

  }

    return 0; /* brak return 0; pomimo tego braku program kompiluje się i działa poprawnie*/
}