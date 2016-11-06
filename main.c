#include "header.h"
#include "function.c"

int main()
{
    struct vehicle *head;
    head = Create_Vehicle(0,0,0);
    int id,type,ch;
    int no;
    //no=(char*)malloc(101*sizeof(char));

    printf("Toll Processing System\n");
    printf("\nVehicle\t\tType\nTwo-Wheeler\t[1]\nFour-Wheeler\t[2]\nMulti-Axle\t[3]\n");
    do
    {
        printf("\n1.Insert\n2.Process Toll\n3.Display\n4.Exit\n\nEnter Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\nEnter Vehicle id    : ");scanf("%d",&id);
                    printf("Enter Vehicle Number: ");scanf("%d",&no);
                    printf("Enter Vehicle Type  : ");scanf("%d",&type);
                    Insert_Vehicle(head,id,no,type);
                    break;

            case 2: process_toll(head);
                    break;

            case 3: Display(head);
                    break;

            case 4: exit(0);
        }

    }while(1);
}
