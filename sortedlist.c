#include<stdio.h>
#include<stdlib.h>
typedef struct queue{
    int val;
    struct queue *next;
}node;
void display (node *hd)
{
    int c=1;
    node *p;
    p = hd;
    while(p!=NULL)
    {
        printf("\t Node %d: %d\n",c,p->val);
        c++;
        p=p->next;
    }
    printf("\n");
}
void insert_sorted(node **head,node *element)
{
    node *h ;
    
    h = *head;
    
    while(h!=NULL)
    {
        if((h->val < element->val) || (h!=NULL))
            {h->val=element->val;
            h->next=NULL;
            return;}
        else
            h->next=(struct queue*)malloc(sizeof(struct queue));
            h=h->next;
    }
    if(h->next==NULL)
        {h->val=element->val;
        h->next=NULL;
        return;}
    h->next=NULL;
    return;
}
int main()
{
    int n;
    node *head = (struct queue*)malloc(sizeof(struct queue));
    head->next=NULL;
    //head = create();
    node *w=(struct queue*)malloc(sizeof(struct queue));
    printf("Enter number of inputs\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    printf("Enter value to sorted queue\n");
    scanf("%d",&w->val);
    insert_sorted(&head, w);
    display(head);

    }
    return 0;
    
}