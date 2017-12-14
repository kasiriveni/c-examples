/*
 * C Program to Update Details of Employee using Files
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct emp
{
    int empid;
    char *name;
};

int count = 0;
void add_rec(char *a);
void display(char *a);
void update_rec(char *a);

void main(int argc, char *argv[])
{
    int choice;
    while (1)
    {
        printf("MENU:\n");
        printf("1.Add a record\n");
        printf("2.Display the file\n");
        printf("3.Update the record\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            add_rec(argv[1]);
            break;
        case 2:
            display(argv[1]);
            break;
        case 3:
            update_rec(argv[1]);
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong choice!!!\nEnter the correct choice\n");
        }
    }
}

void add_rec(char *a)
{
    FILE *fp;
    fp = fopen(a, "a+");
    struct emp *temp = (struct emp *)malloc(sizeof(struct emp));
    temp->name = (char *)malloc(50*sizeof(char));
    if (fp == NULL)
        printf("Error!!!");
    else
    {
        printf("Enter the employee id\n");
        scanf("%d", &temp->empid);
        fwrite(&temp->empid, sizeof(int), 1, fp);
        printf("enter the employee name\n");
        scanf(" %[^\n]s", temp->name);
        fwrite(temp->name, 50, 1, fp);
        count++;
    }
    fclose(fp);
    free(temp);
    free(temp->name);
}

void display(char *a)
{
    FILE *fp;
    char ch;
    int rec = count;
    fp = fopen(a, "r");
    struct emp *temp = (struct emp *)malloc(sizeof(struct emp));
    temp->name = (char *)malloc(50*sizeof(char));
    if (fp == NULL)
        printf("Error!!");
    else
    {
        while (rec)
        {
            fread(&temp->empid, sizeof(int), 1, fp);
            printf("%d", temp->empid);
            fread(temp->name, 50, 1, fp);
            printf(" %s\n", temp->name);
            rec--;
        }
    }
    fclose(fp);
    free(temp);
    free(temp->name);
}

void update_rec(char *a)
{
    FILE *fp;
    char ch, name[5];
    int rec, id, c;
    fp = fopen(a, "r+");
    struct emp *temp = (struct emp *)malloc(sizeof(struct emp));
    temp->name = (char *)malloc(50*sizeof(char));
    printf("Enter the employee id to update:\n");
    scanf("%d", &id);
    fseek(fp, 0, 0);
    rec = count;
    while (rec)
    {
        fread(&temp->empid, sizeof(int), 1, fp);
        printf("%d", temp->empid);
        if (id == temp->empid)
        {
            printf("Enter the employee name to be updated");
            scanf(" %[^\n]s", name);
            c = fwrite(name, 50, 1, fp);
            break;
        }
        fread(temp->name, 50, 1, fp);
        rec--;
    }
    if (c == 1)
        printf("Record updated\n");
    else
        printf("Update not successful\n");
    fclose(fp);
    free(temp);
    free(temp->name);
}
