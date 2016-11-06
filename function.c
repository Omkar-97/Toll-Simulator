
#include "header.h"

struct vehicle *Create_Vehicle(int id,int no,int type)
{
    struct vehicle *temp;
    temp = malloc(sizeof(struct vehicle));
    /*char *num = no;
    num=(char*)malloc(101*sizeof(char));*/
    temp->v_id = id;
    temp->v_no = no;
    temp->v_type = type;
    temp->next = NULL;
    return (temp);
};

void Insert_Vehicle(struct vehicle *head,int id,int no,int type)
{
    struct vehicle *temp = head, *new_vehicle;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    new_vehicle = Create_Vehicle(id,no,type);
    temp->next = new_vehicle;
}

void Display(struct vehicle *head)
{
    struct vehicle *temp = head->next;
    if(temp == NULL)
    {
        printf("\nNo more vehicles\n");
    }
    while(temp!=NULL)
    {
        printf("\n#########################");
        printf("\n Vehicle id:   %d\t|",temp->v_id);
        printf("\n Vehicle no:   %d\t|",temp->v_no);
        printf("\n Vehicle type: %d\t|",temp->v_type);
        printf("\n#########################\n");
        temp=temp->next;
    }
}

float pay(struct vehicle *head,int type)
{
    struct vehicle *temp1 = head->next;
    float val = 50.00;
    if(temp1->v_type==1){
        val = val + 10;
        return val;
    }
    else if(temp1->v_type==2){
        val = val + 50;
        return val;
    }
    else{
        val = val + 100;
        return val;
    }
}

void process_toll(struct vehicle *head)
{
    struct vehicle *temp1 = head->next;
    float toll;
    if(temp1 == NULL)
    {
        printf("\nNo Vehicles to be processed\n");
        return temp1;
    }
    if(temp1->v_type == 1)
    {
        toll = pay(head,temp1->v_type);
        printf("\n#########################");
        printf("\n Vehicle id:   %d\t|",temp1->v_id);
        printf("\n Vehicle no:   %d\t|",temp1->v_no);
        printf("\n Vehicle type: %d\t|",temp1->v_type);
        printf("\n Toll Paid   : %3.2f\t|",toll);
        printf("\n#########################\n");
        printf("O                 O\n");
        Delete_Vehicle(head,temp1);
    }
    if(temp1->v_type == 2)
    {
        toll = pay(head,temp1->v_type);
        printf("\n#########################");
        printf("\n Vehicle id:   %d\t|",temp1->v_id);
        printf("\n Vehicle no:   %d\t|",temp1->v_no);
        printf("\n Vehicle type: %d\t|",temp1->v_type);
        printf("\n Toll Paid   : %3.2f\t|",toll);
        printf("\n#########################\n");
        printf("O                 O\n");
        Delete_Vehicle(head,temp1);
    }
    if(temp1->v_type == 3)
    {
        toll = pay(head,temp1->v_type);
        printf("\n#########################");
        printf("\n Vehicle id:   %d\t|",temp1->v_id);
        printf("\n Vehicle no:   %d\t|",temp1->v_no);
        printf("\n Vehicle type: %d\t|",temp1->v_type);
        printf("\n Toll Paid   : %3.2f\t|",toll);
        printf("\n#########################\n");
        printf("O                 O O\n");
        Delete_Vehicle(head,temp1);
    }
}

void Delete_Vehicle(struct vehicle *head,struct vehicle *temp)
{
    struct vehicle *temp1 = head;

    if(head->next==NULL)
    {
        printf("\nHead cannot be deleted\n");
    }
    else
    {
        temp1 = head->next;
        head->next = temp1->next;
        free(temp1);
    }
}
