#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    /* data */
    int value;
    struct node * next;
};

typedef struct node* p_node;

p_node CreateNode(int value);
p_node InsertAtBeginning(p_node head, int value);
p_node InsertAtEnd(p_node head, int value);
p_node InsertAtPosition(p_node head, int value, int position);
p_node DeleteFromPosition(p_node head, int position);
void UpdateNode(p_node head, int value, int position);
void Search(p_node head, int value);
void Display(p_node head);


int main(){

    int choice = 0;
    int in_value, pos;
    p_node head = NULL;

    while(choice != 8){
        printf("1 - Insert node at the beginning\n");
        printf("2 - Insert node at the end\n");
        printf("3 - Insert node at a specific position\n");
        printf("4 - Delete node from any position\n");
        printf("5 - Update node value\n");
        printf("6 - Search element in the linked list\n");
        printf("7 - Display list\n");
        printf("8 - Exit\n");
        printf("------------------\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to insert: ");
            scanf("%d",&in_value);
            head = InsertAtBeginning(head, in_value);

            break;
        
        case 2:
            printf("Enter the value to insert: ");
            scanf("%d",&in_value);
            head = InsertAtEnd(head, in_value);

            break;
        
        case 3:
            printf("Enter the value to insert: ");
            scanf("%d",&in_value);
            printf("Enter the position where insert: ");
            scanf("%d",&pos);
            head = InsertAtPosition(head, in_value, pos);

            break;

        case 4:
            printf("Enter the position where delete: ");
            scanf("%d",&pos);
            head = DeleteFromPosition(head, pos);

            break;

        case 5:
            printf("Enter the position where update the node: ");
            scanf("%d",&pos);
            printf("Enter the value to update: ");
            scanf("%d",&in_value);
            UpdateNode(head, in_value, pos);
            
            break;

        case 6:
            printf("Enter the value of the node/s to search: ");
            scanf("%d",&pos);
            Search(head, pos);

            break;

        case 7:
            Display(head);

            break;

        case 8:
            /* code */
            break;

        default:
            break;
        }

    };

    return 0;
}

p_node CreateNode(int value){
    p_node new_node = malloc(sizeof(p_node));
    new_node->value = value;
    new_node->next = NULL;
    return new_node; 
}
p_node InsertAtBeginning(p_node head, int value){
    p_node node = CreateNode(value);
    node->next=head;
    
    return node;
}
p_node InsertAtEnd(p_node head, int value){
    p_node node = CreateNode(value);

    if(head != NULL){

        p_node temp = head;

        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = node;

        return head;
    }else{
        return node;
    }
}
p_node InsertAtPosition(p_node head, int value, int position){
    p_node node = CreateNode(value);

    if(head != NULL){
        if(position > 0){
            p_node temp = head;
            for (int i = 0; i < position - 1; i++)
            {
                if (temp->next != NULL)
                {
                    temp = temp->next;
                }
            }
            p_node t_link;
            t_link = temp->next;
            temp->next = node;
            node->next = t_link;

            return head;
        }else{
            node->next = head;
            return node;
        }
    }else{
        return node;
    }
}
p_node DeleteFromPosition(p_node head, int position){
    if(head != NULL){
        if(position > 0){
            p_node temp = head;
            for (int i = 0; i < position - 1; i++)
            {
                if (temp->next->next != NULL)
                {
                    temp = temp->next;
                }else{
                    break;
                }
            }
            if (temp->next->next != NULL){
                p_node t_link;
                t_link = temp->next;
                temp->next = t_link->next;
                free(t_link);
            }else{
                p_node t_link;
                t_link = temp->next->next;
                temp->next = NULL;
                free(t_link);
            }
        }else{
            p_node t_link;
            t_link = head;
            head = t_link->next;
            free(t_link);
        }
    }else{
    }
    return head;
}
void UpdateNode(p_node head, int value, int position){
    if(head != NULL){
        if(position > 0){
            int i;
            p_node temp = head;
            for (i = 0; i < position; i++)
            {
                if (temp->next != NULL)
                {
                    temp = temp->next;
                }else{
                    break;
                }
            }
            if (temp->next != NULL){
                temp->value = value;
                printf("Node updated\n");
            }
            if (temp->next == NULL && i == position){
                temp->value = value;
                printf("Node updated\n");
            }
            if(temp->next == NULL && i != position){
                printf("Impossible to update - position not present in list\n");
            }
        }else{
            head->value = value;
            printf("Node updated\n");
        }
    }else{
        printf("Impossible to update - list is empty\n");
    }
}
void Search(p_node head, int value){
    if(head != NULL){
        p_node temp = head;
        int i = 0, found = 0;
        while(temp->next != NULL)
        {
            if(temp->value == value){
                printf("Node found at position %d\n", i);
                found = 1;
            }
            i++;
            temp = temp->next;
        }

        if(temp->value == value){
            printf("Node found at position %d\n", i);
            found = 1;
        }
        if (found == 0){
            printf("Value does not exist in the list\n");
        }
    }else{
        printf("Value does not exist in the list\n");
    }
}
void Display(p_node head){
    printf("******LIST*******\n");
    if(head != NULL){
        p_node temp = head;
        // if (temp->next != NULL){
        //     printf("%d -> ", temp->value);  
        // }
        while (temp->next != NULL)
        {
            
            if(temp->next != NULL)
                printf("%d -> ", temp->value);
            temp = temp->next;
        }
        printf("%d\n", temp->value);  
    }
    printf("*****************\n");
}