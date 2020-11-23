#include <stdio.h>
#include <stdlib.h>

int crescente(void const *a, void const b ){
    return ((int*)a - (int)b );
}

int decrescente(void const *a, void const b ){
    return ((int*)b - (int)a );
}

int main(){
    int n, i, num, par = 0, impar = 0;

    scanf("%d", &n);
    int npar[n];
    int nimp[n];

    for(i = 0; i < n; i++){
        scanf("%d", &num);
        if(num%2 == 0){
            npar[par] = num;
            par++;
        }else{
            nimp[impar] = num;
            impar++;
        }
    }
    qsort(npar, par, sizeof(int), crescente);
    qsort(nimp, impar, sizeof(int), decrescente);
    for(i = 0; i < par; i++){
        printf("%d\n",npar[i]);
    }
    for(i = 0; i < impar; i++){
        printf("%d\n",nimp[i]);
    }

    return 0;
}
