#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = 0, rear = -1;

void enqueue(int value)
{
    if(rear == MAX-1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        rear++;
        queue[rear] = value;
    }
}

void dequeue()
{
    if(front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Deleted element = %d\n", queue[front]);
        front++;
    }
}

void display()
{
    int i;
    if(front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements are: ");
        for(i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    int n, i, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value: ");
        scanf("%d", &value);
        enqueue(value);
    }

    display();

    dequeue();

    display();

    return 0;
}