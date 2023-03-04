#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Phonebook {
    int id;
    char name[64];
    char number[12];
};

int show_contacts();
int add_contacts();
int del_contacts();

int i = 0;
struct Phonebook contacts[100];

int main()
{
    int resp1;

    printf("Welcome to the Phonebook App! (v 1.0.0.1)\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
    printf("What would you like to do?\n");
    printf("Enter corresponding number!\n");
    printf("1.\tAdd contact to Phonebook\n");
    printf("2.\tSearch Phonebook\n");
    printf("3.\tDelete contact from Phonebook\n");
    printf("Enter your input here: ");
    scanf("%d", &resp1);

    switch (resp1) {
        case 1:
            add_contacts();
            break;
        case 2:
            show_contacts();
            break;
        case 3:
            del_contacts();
            break;
    }
    return 0;
}

int add_contacts()
{
    char nameHolder[64];
    char numberHolder[12];

    printf("Contact ID: %03d.\n", i + 1);
    printf("Enter contact name: ");
    scanf("%s", nameHolder);
    printf("Enter contact number: ");
    scanf("%s", numberHolder);

    contacts[i].id = i + 1;
    strcpy(contacts[i].name, nameHolder);
    strcpy(contacts[i].number, numberHolder);

    printf("\nPhonebook\n");
    printf("ID\tName\t\t\tNumber\n");
    printf("%d\t%s\t%s\n", contacts[i].id, contacts[i].name, contacts[i].number);

    i++;

    return 0;
}


int show_contacts()
{
    printf("\nPhonebook\n");
    printf("ID\tName\t\t\tNumber\n");
    for (int j = 0; j < i; j++) {
        printf("%d\t%c\t%s\n", contacts[j].id, contacts[j].name[0], contacts[j].number);
    }
    return 0;
}

int del_contacts()
{
    return 0;
}
