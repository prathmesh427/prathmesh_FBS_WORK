//3. Admin (id, name, salary, allowance)
#include <stdio.h>

struct admin 
{
    int id;
    char name[30];
    double salary;
    double allowance;
};
void store(struct admin adm[], int n);
void display(struct admin adm[], int n);

int main() 
{
    struct admin A[1];
    store(A, 1);
    display(A, 1);
    return 0;
}
void store(struct admin adm[], int n) 
{
    printf("--> Enter Admin Details <--\n");
    for (int i = 0; i < n; i++) 
	{
        printf("\n--> Enter Admin Details %d <--\n", i + 1);
        printf("Enter Admin ID: ");
        scanf("%d", &adm[i].id);

        printf("Enter Admin Name: ");
        scanf("%s", adm[i].name);

        printf("Enter Salary: ");
        scanf("%lf", &adm[i].salary);

        printf("Enter Allowance: ");
        scanf("%lf", &adm[i].allowance);
    }
}
void display(struct admin adm[], int n) 
{
    printf("\n\n--> Display Admin Details <--\n");
    for (int i = 0; i < n; i++) 
	{
        printf("\n--> Admin %d Details <--\n", i + 1);
        printf("Admin ID: %d\n", adm[i].id);
        printf("Admin Name: %s\n", adm[i].name);
        printf("Admin Salary: %.2lf\n", adm[i].salary);
        printf("Admin Allowance: %.2lf\n", adm[i].allowance);
    }
}
