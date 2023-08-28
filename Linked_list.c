#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

int display();


int main()
{
    struct node * node1;
    struct node * node2;
    struct node * node3;

    node1 = (struct node*)malloc(sizeof(struct node));
    node2 = (struct node*)malloc(sizeof(struct node));
    node3 = (struct node*)malloc(sizeof(struct node));

    node1->data=1;
    node1->next=node2;

    node2->data=2;
    node2->next=node3;

    node3->data=3;
    node3->next=NULL;

    display(node1);
    

}

int display(struct node *n)
{
    while(n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
    }
}