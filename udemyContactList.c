#include <stdio.h>
#include <string.h>

// Define a structure to represent a contact
struct Contact {
    char name[50];
    char phone[20];
};

// Function prototypes
void addContact(struct Contact contacts[], int *numContacts);
void searchContact(struct Contact contacts[], int numContacts);
void deleteContact(struct Contact contacts[], int *numContacts);

int main() {
    struct Contact contacts[100]; // Array to store contacts
    int numContacts = 0; // Number of contacts currently stored

    int choice;

    do {
        // Display menu options
        printf("\n--- Contact List Menu ---\n");
        printf("1. Add Contact\n");
        printf("2. Search Contact\n");
        printf("3. Delete Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact(contacts, &numContacts);
                break;
            case 2:
                searchContact(contacts, numContacts);
                break;
            case 3:
                deleteContact(contacts, &numContacts);
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}

// Function to add a contact
void addContact(struct Contact contacts[], int *numContacts) {
    if (*numContacts == 100) {
        printf("Contact list is full. Cannot add more contacts.\n");
        return;
    }

    printf("Enter name: ");
    scanf("%s", contacts[*numContacts].name);

    printf("Enter phone number: ");
    scanf("%s", contacts[*numContacts].phone);

    (*numContacts)++;
    printf("Contact added successfully.\n");
}

// Function to search for a contact by name
void searchContact(struct Contact contacts[], int numContacts) {
    char searchName[50];
    int found = 0;

    printf("Enter name to search: ");
    scanf("%s", searchName);

    printf("Search Results:\n");
    for (int i = 0; i < numContacts; i++) {
        if (strcmp(contacts[i].name, searchName) == 0) {
            printf("Name: %s, Phone: %s\n", contacts[i].name, contacts[i].phone);
            found = 1;
        }
    }

    if (!found) {
        printf("Contact not found.\n");
    }
}

// Function to delete a contact by name
void deleteContact(struct Contact contacts[], int *numContacts) {
    char deleteName[50];
    int foundIndex = -1;

    printf("Enter name to delete: ");
    scanf("%s", deleteName);

    // Find the index of the contact to delete
    for (int i = 0; i < *numContacts; i++) {
        if (strcmp(contacts[i].name, deleteName) == 0) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        // Shift contacts to the left to remove the deleted contact
        for (int i = foundIndex; i < *numContacts - 1; i++) {
            strcpy(contacts[i].name, contacts[i + 1].name);
            strcpy(contacts[i].phone, contacts[i + 1].phone);
        }

        (*numContacts)--;
        printf("Contact deleted successfully.\n");
    } else {
        printf("Contact not found.\n");
    }
}