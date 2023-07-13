
#include<stdio.h>
#include<stdlib.h>
void append(void);
void display(void);
int length(void);
void addBegin(void);
void addSpecifiedPosition(void);
void deleteele(void);
struct node{
int data;
struct node* link;


};
struct node* root=NULL;
int main(){
int l;
append();
append();
append();
addBegin();
addSpecifiedPosition();
l=length();
printf("Length is %d",l);
deleteele();
display();

}
void append(){

struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));

printf("Enter a data\n");
scanf("%d",&temp->data);

temp->link=NULL;

if(root==NULL){

    root=temp;
}
else{


    struct node* p;
    p=root;

    while(p->link!=NULL){

        p=p->link;
    }
    p->link=temp;
}

}
int length(){

struct node* temp;
int count=0;
temp=root;

while(temp!=NULL){

    count++;
    temp=temp->link;
}
return count;

}
void display(){

struct node* temp;

temp=root;
if(temp==NULL){

    printf("No node in the list\n");
}

while(temp!=NULL){

    printf("%d",temp->data);
    temp=temp->link;
}

}
void addBegin(){

struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));

printf("Enter a data\n");
scanf("%d",&temp->data);

temp->link=NULL;

if(root==NULL){

    root=temp;
}
else{

temp->link=root;
root=temp;

}
}
void addSpecifiedPosition(){

struct node* temp,*p;
int i=1,loc,len;

printf("Enter a loc\n");
scanf("%d",&loc);
len=length();
if(len<loc){

    printf("Invalid postion");
    exit(-1);
}


temp=(struct node*)malloc(sizeof(struct node));

printf("Enter a data\n");
scanf("%d",&temp->data);

temp->link=NULL;

if(root==NULL){

    root=temp;
}
else{


    p=root;
    while(i<loc){

        p=p->link;
        i++;
    }
    temp->link=p->link;
    p->link=temp;
}

}

void deleteele(){

struct node *temp;
int loc;
printf("Enter a loc\n");
scanf("%d",&loc);

int len=length();

if(loc>len){

    printf("Invalid location");

}
else if(loc==1){

temp=root;
    root=temp->link;
    temp->link=NULL;
    free(temp);
}
else{

    struct node *p=root;
    struct node *q;
    int i=1;
while(i<loc-1){

    p=p->link;
    i++;
}
q=p->link;
p->link=q->link;
q->link=NULL;
free(q);
}
}

