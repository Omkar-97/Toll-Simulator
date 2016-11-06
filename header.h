#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include<stdio.h>
#include<conio.h>

struct vehicle
{
    int v_id;
    int v_no;
    int v_type;
    struct vehicle *next;
};

struct vehicle *Create_Vehicle(int id,int no,int type);
void Insert_Vehicle(struct vehicle *head,int id,int no,int type);
void Display(struct vehicle *head);
float pay(struct vehicle *head,int type);
void process_toll(struct vehicle *head);
void Delete_Vehicle(struct vehicle *head,struct vehicle *temp);


#endif // HEADER_H_INCLUDED
