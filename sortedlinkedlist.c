#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct sorted_list
{
    int val;
    struct sorted_list *next;
}node;

node *element();
node *create();
void insert_sorted(node **, node *);
void erase(node **);
void display (node *);

int main()
{
    struct sorted_list *head;
    int c;
    do
    {
        printf("\n\t Enter 1) create new sorted list 2) display list 3) insert element in sorted list 4) erase element 100) exit\n\t");
        scanf("%d", &c);
        switch (c)
       { case 1: 
        head = create();  
        break;
        case 2: 
        display(head);
        break;
        case 3: 
        insert_sorted(&head,element());
        break;
        case 4:
        erase(&head);
        break;
        case 100:
        printf("\n\t goodbye ");
        break;
        default:
        printf("\n\t ERROR\n\t");
        break;}
        
    }while(c!=100);
    return 0;
}

node *create()
{
    int n;
    node *p, *h;
    printf("\n\t How many elements are to be entered?\n");
    scanf("%d",&n);
    printf("\n\t enter values\n");
    for (int k=0;k<n;k++)
    {
        if (k==0)
        {
            h=(node*)malloc(sizeof(node));
            p=h;
        }
        else 
        {
            p->next=(node*)malloc(sizeof(node));
            p = p->next;
        }
        scanf("\t %d", &p->val);
    }
    p->next = NULL;
    return (h);
}


void insert_sorted(node **head, node*element)
{
    struct sorted_list *h, *e;
    e= element;
    if (*head == NULL || ((*head)->val >= e->val))  //
    {
        e->next = *head;
        *head = e;
        return;
    }
    else 
    {
        h= *head;
        while (h->next != NULL && (h->next->val < e->val)) 
        {
            h = h->next;
        }
        e->next = h->next;
        h->next = e;
    }
    return;
}

void erase(node **h)
{
    int c;
    struct sorted_list *p,*q;
    printf("\n\t Insert the node to be deleted \n\t");
    scanf("%d",&c);
    p= *h;             // we're using *h because wer're passin address of head
    if (p->val==c)
    {
        p = p->next; // @ begining
        free(p);
    
    }
    else
    {
        while((p!=NULL) && (p->val!=c))
        {
            q = p;
            p = p->next;
        }

        if(p->val==c)
        {
            q->next = p->next;
            free(p);     //@ middle
        }
        else if(p==NULL)
        {
            printf("\n\t No match :: Deletion failed \n\t");
        }

        
    }
}

void display (node *head)
{
    node *temp = head;
    while (temp != NULL) {
        printf("\t %d", temp->val);
        temp = temp->next;
    }
    return;
}
node *element()
{
    node *new=(node*)malloc(sizeof(node));
    printf("enter value to be inserted in the sorted list\n");
    scanf("%d",&new->val);
    new->next=NULL;
    return new;
}