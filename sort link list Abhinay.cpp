#include <iostream>
#include <cstdlib>

using namespace std;

struct link
{
    int data;
    struct link *next;
};

struct link *start = NULL;
struct link *node;
struct link *current;
int n;

void create()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        node = ((struct link *)malloc(sizeof(struct link)));

        cin >> node->data;

        node->next = NULL;
        if (start == NULL)
        {
            start = node;
            current = node;
        }
        else
        {
            current->next = node;
            current = node;
        }
    }
}

void sort1()
{
    for (int i = 0; i < n; i++)
    {
        struct link *pointer = start;
        current = pointer->next;
        while (current != NULL)
        {
            if (current->data < pointer->data)
            {
                swap(pointer->data, current->data);
            }
            pointer = pointer->next;
            current = current->next;
        }
    }
}

void display()
{
    struct link *ptr = start;

    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main()
{
    create();
    sort1();
    display();

    return 0;
}
