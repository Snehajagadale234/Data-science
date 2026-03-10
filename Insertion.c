#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;
        printf("Inserted element: %d\n", value);
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}

int main()
{
    int n, value;

    printf("How many elements you want to insert: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter value: ");
        scanf("%d", &value);
        enqueue(value);
    }

    display();

    return 0;
}