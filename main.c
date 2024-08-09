#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *pNext;
}*ptop;
void push(int data);

int pop();
int peek();

struct node* pReader;
int main()
{



    push(1);
    push(2);
    push(3);
    push(4);

pop();
    for(pReader = ptop; pReader!= NULL; pReader = pReader ->pNext)
        printf("\n Data = %d\n", pReader->data);
    //printf("Count = %d", getCount());

    return 0;
}
void push(int data){
struct node* pnode=(struct node *) malloc (sizeof(struct node));
if(pnode!=NULL){
    pnode->pNext=ptop;
    pnode->data=data;
    ptop=pnode;
}

}
int pop(){
   if (ptop!=NULL)
    {
        struct node*pcur=ptop;
    ptop = pcur-> pNext;
    data= pcur-> data;
    free(pcur);
   }
   else {
    printf("the stake is empty");

   }
   return data;
}



}
struct spinning
{
    int data;
    struct node *pNext;
}*pcur;
