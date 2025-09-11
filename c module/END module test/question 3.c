//create a programm to mange a to do list. implement a structure to store task details(task id,description, and status),
//write a menu driven programm to add, update, and display tasks. use function for each operation.

#include <stdio.h>
#include <string.h>

typedef struct td {
    int taskid;
    char description[20];
    char status[20];
} td;

void add(td* t, int *count);
void update(td* t, int count);
void display(td* , int count);

int main() 
{
    td t[50];  
    int count=0; 
    int choice;

    while (1) 
	{
        printf("\n--- Task Manager ---\n");
        printf("1. Add Task\n");
        printf("2. Update Task\n");
        printf("3. Display Tasks\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice==1) 
		{
            add(t, &count);
        } 
        else if (choice==2) 
		{
            update(t, count);
        } 
        else if (choice==3) 
		{
            display(t, count);
        } 
        else if (choice==4) 
		{
            printf("Exiting...\n");
            break;
        } 
        else 
		{
            printf("Invalid choice\n");
        }
    }

}

void add(td* t, int *count) 
{
    printf("Enter task id: ");
    scanf("%d",&t[*count].taskid);
    printf("Enter task description: ");
    scanf("%s",t[*count].description);
    printf("Enter task status: ");
    scanf("%s",t[*count].status);
    (*count)++;
    printf("Task added successfully\n");
}

void update(td* t, int count) 
{
    int id,found=0;
    printf("Enter task id to update: ");
    scanf("%d",&id);

    for (int i=0;i<count;i++) 
	{
        if (t[i].taskid==id) 
		{
            printf("Enter new description: ");
            scanf("%s", t[i].description);
            printf("Enter new status: ");
            scanf("%s", t[i].status);
            found = 1;
            break;
        }
    }
    if (!found) 
	{
        printf("Task not found!\n");
    }
}

void display(td* t, int count) 
{
    if (count==0) 
	{
        printf("No tasks available\n");
    }

    printf("\n--- Task List ---\n");
    for (int i=0;i<count;i++) 
	{
        printf("ID: %d \nDescription: %s \nStatus: %s\n",
               t[i].taskid, t[i].description, t[i].status);
    }
}