#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int isfull(struct stack *p)
{
    if (p->top == p->size - 1)
    {
        return 1;
    }
    return 0;
}

int isempty(struct stack *p)
{
    if (p->top == -1)
    {
        return 1;
    }
    return 0;
}

char push(struct stack *p, char val)
{
    p->top++;
    p->arr[p->top] = val;
    return p->arr[p->top];
}

char pop(struct stack *p)
{
    return p->arr[p->top--];
}

int match(char a, char b)
{
    if (a == '(' && b == ')' || a == '{' && b == '}' || a == '[' && b == ']')
    {
        return 1;
    }
    return 0;
}

int parenthesis(char str[], int length)
{
    struct stack m;
    struct stack *p = &m;
    p->size = length;
    p->top = -1;
    p->arr = (char *)malloc(sizeof(char) * length);

    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            if (!isfull(p))
            {
                push(p, str[i]);
                continue;
            }
            return 0;
        }
        if (str[i] == '}' || str[i] == '}' || str[i] == ']')
        {
            if (!isempty(p))
            {
                char c = pop(p);
                if (!match(c, str[i]))
                {
                    return 0;
                }
                return 1;
            }
            return 0;
        }
        i++;
    }
}

int main()
{
    char arr[] = "(5+4)";
    int l = sizeof(arr) / sizeof(char);
    printf("%d\n",parenthesis(arr,l));
    if (parenthesis(arr, l))
    {
        printf("balanced");
    }
    else
    {
        printf("Not balanced");
    }
}