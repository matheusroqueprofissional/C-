#include<stdio.h>
#include<stdlib.h>
#include<iostream>

struct tree{
    struct tree *lptr;
    struct tree *rptr;
    int data;
};

typedef struct tree TREENODE;
typedef TREENODE *TREENODEPTR;
void adicionar(TREENODEPTR *, int );
void adicionar(TREENODEPTR *treenodeptr,int valor){
    if(*treenodeptr==NULL){
        *treenodeptr = (TREENODEPTR)malloc(sizeof(TREENODE));
        if(*treenodeptr!=NULL)
        {
            (*treenodeptr)->data = valor;
            (*treenodeptr)->lptr = NULL;
            (*treenodeptr)->rptr = NULL;
        }
        else
            printf("sem memoria");
    }
    else{
    if(valor<(*treenodeptr)->data)
        adicionar(&((*treenodeptr)->lptr),valor);
    else{
    if(valor>(*treenodeptr)->data)
        adicionar(&((*treenodeptr)->rptr),valor);
        else
            printf("dup");}
    }
    

}

void inorder(TREENODEPTR treenodeptr){
    if(treenodeptr!=NULL){
        inorder(treenodeptr->lptr);
        printf("%3d",treenodeptr->data);
        inorder(treenodeptr->rptr);
    }
}

int main(){
 TREENODEPTR root;
 root = NULL;
 int item = 10;
 adicionar(&root,item);
 printf("item adicionado: %d\n",item);
 item = 20;
 adicionar(&root,item);
 
 printf("item adicionado: %d\n",item);
 inorder(root);
}