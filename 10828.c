#include<stdio.h>
#include<string.h>

void push(int n[], int x, int *top){
    n[++(*top)] = x;
}

void pop(int n[], int *top){
    if(*top == -1){
        printf("-1\n");
    }else{
        printf("%d\n", n[(*top)--]);
    }
}

void size(int n[], int *top){
    printf("%d\n", *top+1);
}

void empty(int n[], int *top){
    if(*top == -1){
        printf("1\n");
    }else{
        printf("0\n");
    }
}

void ftop(int n[], int *top){
    if(*top == -1){
        printf("-1\n");
    }else{
        printf("%d\n", n[*top]);
    }
}

int main(){

    int n[10000];
    int top = -1;
    int x = 0;

    int num = 0;
    scanf("%d",&num);

    char ic[10] = {'\0',};

    for(int i = 0 ; i < num ; i++){
        scanf("%s", &ic);
        if(strcmp(ic, "push") == 0){
            scanf("%d", &x);
            push(n, x, &top);
        }
        else if(strcmp(ic, "pop") == 0){
            pop(n, &top);
        }
        else if(strcmp(ic, "size") == 0){
            size(n, &top);
        }
        else if(strcmp(ic, "empty") == 0){
            empty(n, &top);
        }
        else if(strcmp(ic, "top") == 0){
            ftop(n, &top);
        }
    }
    return 0;

}