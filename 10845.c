#include<stdio.h>
#include<string.h>

void push(int queue[], int *back, int *value){
    
    queue[*back] = *value;
    *back = *back + 1;

}
void pop(int queue[], int *front, int *back){
    if(*front == *back){
        printf("-1\n");
    }
    else{
        printf("%d\n", queue[*front]);
        *front = *front + 1;
    }
    
}

void size(int queue[],int front,int back){

    printf("%d\n",back - front);

}

void empty(int queue[],int front,int back){

    if(front == back) printf("1\n");
    else printf("0\n");

}

void frontf(int queue[],int front,int back){
    if(front == back) printf("-1\n");
    else printf("%d\n",queue[front]);

}

void backf(int queue[],int front,int back){
    if(front == back) printf("-1\n");
    else printf("%d\n",queue[back-1]);
}

int main(){

    int queue[10000];

    int front = 0;
    int back = 0;

    int value = 0;
    char ch[10] = {"0"};
    int tn = 0;
    scanf("%d",&tn);

    for(int j = 0 ; j < tn ; j++){
        scanf("%s",ch);
        if(strcmp(ch,"push")==0) scanf("%d",&value);
        if(strcmp(ch,"push")==0) push(queue,&back,&value);
        else if(strcmp(ch,"pop")==0) pop(queue,&front,&back);
        else if(strcmp(ch,"size")==0) size(queue,front,back);
        else if(strcmp(ch,"front")==0) frontf(queue,front,back);
        else if(strcmp(ch,"back")==0) backf(queue,front,back);
        else if(strcmp(ch,"empty")==0) empty(queue,front,back);
    }

    return 0;
}