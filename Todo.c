#include <stdio.h>
#include <stdlib.h>
struct node
{
    char str[100];
    struct node *next;
};
struct node *head = NULL, *ptr, *temp, *prev, *next;
int count = 0;
struct node *createNode()
{
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter Todo Item\n");
    scanf("%s", ptr->str);
    ptr->next = NULL;
    // count += 1;
    return ptr;
}
void insertNode()
{
    ptr = createNode();
    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        ptr->next = head;
        head = ptr;
    }
}
void delete()
{
    int pos;
    int i = 1;
    printf("Enter Position\n");
    scanf("%d", &pos);
    if (head == NULL)
    {
        printf("Empty\n");
    }
    else if (pos == 1)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
            count += 1;
        }
        if (pos > count)
        {
            printf("Limit Exceed\n");
        }
        else
        {

            next = head;
            while (i < pos)
            {
                prev = next;
                next = next->next;
                i++;
            }
            prev->next = next->next;
        }
    }
}
void display()
{
    if (head == NULL)
    {
        printf("Empty\n");
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("%s\n", temp->str);
            temp = temp->next;
        }
    }
}
int main()
{
    int ch;
    do
    {
        printf("1.Create New\n");
        printf("2.Delete Position\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insertNode();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting\n");
            break;

        default:
            break;
        }

    } while (ch != 4);

    return 0;
}