#include<stdio.h>
#include<stdlib.h>

int main(){

    int k = 0, n = 0;

    scanf("%d %d",&k,&n);

    int *ka = (int*)malloc(k*sizeof(int));
    int *na = (int*)malloc(k*sizeof(int));

    int nidx = 0;
    int nt=1;

    for(int i = 0; i < k; i++){
        *(ka+i)=i+1;
    }

    int j = 0;
    while(nidx < k){
        if(j == k) j = 0;
        if(*(ka+j) != 0){
            if(nt == n ){
                *(na+nidx) = *(ka+j);
                *(ka+j) = 0;
                nidx++;
                nt = 0;
            }
            nt++;
        }
        j++;


    }

    printf("<");
    for(int i = 0;i < k; i++){
        printf("%d",*(na+i));
        if(i != k-1) printf(", ");
    }
    printf(">");
    free(ka);
    free(na);

    return 0;

}