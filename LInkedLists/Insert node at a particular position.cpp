#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

node* head=NULL;
void insert(int new_data)
{
    node* temp=new node;
    temp->data=new_data;
    temp->next=NULL;

    if(head==NULL)
    {
        head=temp;
    }
    else{
            node* current=head;
            while(current->next!=NULL)
                current=current->next;
            current->next=temp;
    }
}

void insertat(int value,int position)
{
    node* temp2=head;
    int flag=0;

    node* nodeinsertion=new node;
    nodeinsertion->data=value;
    nodeinsertion->next=NULL;

    int count=1;
    while(temp2->next!=NULL)
    {
        
        if(count==position-1)
        {
            nodeinsertion->next=temp2->next;
            temp2->next=nodeinsertion;
            flag=1;  
            break;
        }
        temp2=temp2->next;
        count++;
    }

    if(temp2->next==NULL && flag==0)
    {
        temp2->next=nodeinsertion;
    }
}

void display()
{
    node *temp1=head;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
}
   
int main()
{
    insert(4);
    insert(6);
    insert(8);
    insertat(2,2);
    insertat(5,3);
    display();  
    return 0;
}
