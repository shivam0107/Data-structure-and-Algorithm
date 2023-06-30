#include <stdio.h>
#include <stdlib.h>

void create();
void insert();
void Delete();
void display();

struct node
{
    int data;
    struct node *add;
};

struct node *start = NULL;
struct node *new, *temp, *next, *prev;

int main()
{
    int ch;
    do
    {
        printf("\n\n--------Linked list-----\n");
        printf("press 1 for create operation. \n");
        printf("press 2 for insert operation. \n");
        printf("press 3 for delete operation. \n");
        printf("press 4 for display operation.\n");
        printf("press 5 for Exit.\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            insert();
            break;
        case 3:
            Delete();
            break;
        case 4:
            display();
            break;
        case 5:
            break;
        default:
            printf("\nInvalid choice, please try again\n");
        }
    } while (ch != 1);

    return 0;
}

void create()
{
    int n;
    char ch;

    if (start == NULL)
    {
        printf("\nEnter a value: ");
        scanf("%d", &n);

        start = (struct node *)malloc(sizeof(struct node));
        start->data = n;
        start->add = NULL;
        temp = start;

        printf("\nTo add more element, Press 'Y' : ");
        scanf("%c", &ch);

        while (ch == 'y' || ch == 'Y')
        {
            printf("\nEnter next value: ");
            scanf("%d", &n);
            new = (struct node *)malloc(sizeof(struct node));
            new->data = n;
            new->add = NULL;
            temp->add = new;
            temp = new;

            printf("\nTo add more elements, Press 'Y' : ");
            scanf("%c", &ch);
        }
    }
}

void insert()
{
}

void Delete()
{
}

void display()
{
}
