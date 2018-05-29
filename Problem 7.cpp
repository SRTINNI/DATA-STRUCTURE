/*Linked list creation and store data*/
#include<stdio.h>
#include<iostream>
#include <stdlib.h>

using namespace std;

typedef struct node
{
    int data;
    struct node *next_node;
}Node, *nodeptr;

nodeptr makeNode(int n)
{
    nodeptr np = (nodeptr) malloc(sizeof(Node));
    np->data = n;
    np->next_node = NULL;

    return np;
}

void traverseList(nodeptr start)
{
    cout<<"\nThe output is: ";

    if(start == NULL){
        cout<<"Empty\n";
        return;
    }

    while(start != NULL)
    {
        cout<<start->data<<" ";
        start = start->next_node;
    }
    cout<<endl;
}

int main()
{
    int n;
    nodeptr np, start, current;
    start = NULL;

    cout<<"Enter a number (-1) to finish: \n";
    while(cin>>n)
    {
        if(n == -1)
            break;

        np = makeNode(n);

        if(start == NULL)
            start = np;
        else
            current->next_node = np;
        current = np;
    }

    traverseList(start);

    return 0;
}

