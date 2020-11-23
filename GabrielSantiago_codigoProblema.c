#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

#define MIN(x, y) ((x) < (y) ?  (x) : (y))
#define MAX(x, y) ((x) > (y) ?  (x) : (y))
#define ABS(x)  ((x) <  0  ? -(x) : (x))
#define IMPAR(x) ((x)&1)
#define CTOI(x)  ((x) - '0')
#define ITOC(x)  ((x) + '0')

#define TRUE 1
#define FALSE 0

int main()
{
    int N, i, dm, encontrou, x;
    char l[1001];
 
 #ifdef DEBUG
  double tI = clock();
 #endif
 
    scanf("%d", &N);
 
 while(N--)
 {
  scanf(" %s", l);

  encontrou = 1;
  dm = 0;

  while(encontrou)
  {
   x = 0;
   encontrou = 0;

   for(i = 0; l[i] != '\0'; i++)
   {
    if(l[i] == '<' && x == 0)
    {
     x = 1;
     l[i] = '.';
    }

    if(l[i] == '>' && x)
    {
     x = 0;
     encontrou = 1;
     dm++;
     l[i] = '.';
    }
   }
  }

  printf("%d\n", dm);
 }
 
 #ifdef DEBUG
  printf("Tempo: %.1lf %.1lf\n", clock() - tI, (clock() - tI_) / CLK_TCK);
 #endif
 
 return 0;
}
