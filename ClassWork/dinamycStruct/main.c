#include <stdio.h>
#include <stdlib.h>

 typedef int Data;
    typedef struct Node_
    {
        Data data;
        struct Node_ *linc;/*(<--односвязные
                            дерево-->(*left, *right, *parent)
                            двухсвязные(*next, *previous))*/
    }

    typedef struct Anything_

    {
        int x;
        struct Anything_ *s;
    } Anything;

        /*

void push (Node **top, Data data)
{  //1 этап
    Node *p = NULL;
    p = (Node *)malloc(sizeof(Node));
   //2 этап
    p -> data = data;
    p -> link = *top;
   //3 этап
   *top = p;
   p = NULL;
}

    push(&top,27);

        *//*

void pop(Node **top)
{
    if(*top)
    {
        //1 этап
        Node *p = *top;
        //2 этап
        *top = (*top) -> link;
        //3 этап
        p -> data = 0;
        p -> link = NULL;
        free(p);
        p = NULL;
    }
}

        *//*

bool onTop(Node *top, Data *data)
{
    if(!top)
        return false;
    *data = top -> data;
        return true;
}

        *//*

bool isEmpty(Node *top)
{
    return top == NULL;
}

        *//*


void clear(Node **top)
{
    while(*top)
        pop(top);
}

int main()
{


    return 0;
}

        */








  /*  typedef int Data;
    typedef struct Node_
    {
        Data data;
        struct Node_ *linc;(<--односвязные
                            дерево-->(*left, *right, *parent)
                            двухсвязные(*next, *previous))
    }

    typedef struct Anything_
    {
        int x;
        struct Anything_*s;
    } Anything;
*/
