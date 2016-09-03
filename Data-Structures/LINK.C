#include<stdio.h>
#include<conio.h>
struct student
{
int rollno;
char name[40];
int mark;
struct student *next;
};
struct student *ins_at_beg(struct student *s)
{
struct student *temp;
if(s==NULL)
{
printf("\nlist is empty");
}
temp=(struct student *)calloc(1,sizeof(struct student));
printf("\n enter student details:\n");
printf("\n enter roll no:");
scanf("%d",&temp->rollno);
printf("\n enter name:");
gets(temp->name);
printf("\n enter marks:");
scanf("%d",&temp->mark);
temp->next=s;
return temp;
}
void ins_at_end(struct student *s)
{
struct student *temp,*cur;
if(s==NULL)
{
printf("\n list is empty");
}
else
{
temp=(struct student *)calloc(1,sizeof(struct student));
printf("\n enter student details:\n");
printf("\n enter roll no:");
scanf("%d",&temp->rollno);
printf("\n enter name:");
gets(temp->name);
printf("\n enter marks:");
scanf("%d",&temp->mark);
cur=s;
while(cur->next!=NULL)
{
cur=cur->next;
}
cur->next=temp;
}
}
void display(struct student *s)
{
struct student *temp,*cur;
if(s==NULL)
{
printf("\n list is empty");
}
else
{
while(cur!=NULL)
{
printf("\nstudent details:\n");
printf("\nroll no:%d",cur->rollno);
printf("\nname:%s",cur->name);
printf("\nmarks:%d",cur->mark);
cur=cur->next;
}
}
}
struct student *del_at_beg(struct student *s)
{
struct student *temp;
if(s==NULL)
{
printf("\nlist is empty");
}
else
{
temp=s;
s=temp->next;
free(temp);
printf("\n first node deleted");
}
return s;
}
void del_at_end(struct student *s)
{
struct student *prev,*cur;
if(s==NULL)
{
printf("\n list is empty");
}
else
{
cur=s;
while(cur->next!=NULL)
{
prev=cur;
cur=cur->next;
}
prev->next=NULL;
free(cur);
}
}
void ins_in_btw(struct student *s)
{
int rn;
struct student *temp,*cur;
if(s==NULL)
{
printf("\nlist is empty");
}
else
{
printf("enter roll number to be searched for:");
scanf("%d",&rn);
cur=s;
while(cur!=NULL)
{
if(cur->rollno==rn)
{
temp=(struct student *)calloc(1,sizeof(struct student));
printf("\nenter roll no.:");
scanf("%d",&temp->rollno);
printf("\nenter name:");
gets(temp->name);
temp->next=cur->next;
cur->next=temp;
break;
}
else
cur=cur->next;
}
}
if(cur==NULL)
{
printf("\n roll no. not found");
}
}
void del_in_btw(struct student *s)
{
int rn;
struct student *temp,*cur;
if(s==NULL)
{
printf("\nlist is empty");
}
else
{
printf("enter roll number to be searched for:");
scanf("%d",&rn);
cur=s;
while(cur!=NULL)
{
if(cur->rollno==rn)
{

temp->next=cur->next;
free(cur);
break;
}
else
{
	temp = cur;
cur=cur->next;
}
}
}
}
if(cur==NULL)
{
printf("\n roll no. not found");
}
}
void search(struct student *s)
{
int rn;
struct student *cur;
if(s==NULL)
{
printf("\n list is empty");
}
else
{
printf("\n enter roll no. to be searched for");
scanf("%d",&rn);
cur=s;
while(cur!=NULL)
{
if(cur->rollno==rn)
{
printf("\nstudent details:\n");
printf("\nroll no:%d",cur->rollno);
printf("\nname:%s",cur->name);
printf("\nmarks:%d",cur->mark);
}
cur=cur->next;
}
if(cur==NULL)
{
printf("\n roll no. not found");
}
}
}
void main()
{
int ch;
struct student *start=NULL;
clrscr();
do
{
printf("\nenter:");
printf("\n1. insertion in beginning ");
printf("\n2. insertion at end");
printf("\n3. insertion in between");
printf("\n4. display");
printf("\n5. deletion in beginning");
printf("\n6. deletion in end");
printf("\n7. deletion in between");
printf("\n8. search");
scanf("%d",&ch);
switch(ch)
{
case 1: start=ins_at_beg(start);
		break;
case 2: ins_at_end(start);
		break;
case 3: ins_in_btw(start);
		break;
case 4: display(start);
		break;
case 5: start=del_at_beg(start);
		break;
case 6: del_at_end(start);
		break;
case 7: del_in_btw(start);
		break;
case 8: search(start);
		break;
}
}while(ch<8);
getch();
}
