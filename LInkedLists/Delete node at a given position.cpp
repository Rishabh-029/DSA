#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* link;
};

node* head=NULL;
void insert(int new_data)
{
    node* temp=new node;
    temp->data=new_data;
    temp->link=NULL;

    if(head==NULL)
    {
        head=temp;
    }
    else{
            node* current=head;

            while(current->link!=NULL)
                current=current->link;
            current->link=temp;
    }
}


void insertat(int value,int position)
{
    node* temp2=head;
    int flag=0;
    node* nodeinsertion=new node;
    nodeinsertion->data=value;
    nodeinsertion->link=NULL;

    int count=1;
    while(temp2->link!=NULL)
    {      
        if(count==position-1)
        {
            nodeinsertion->link=temp2->link;
            temp2->link=nodeinsertion;
            flag=1;  
            break;
        }
        temp2=temp2->link;
        count++;
    }

    if(temp2->link==NULL && flag==0)
    {
        temp2->link=nodeinsertion;
    }
}

void deleteat(int position)
{

  node* current=head;

    if(position==1)
    {
        head=head->link;
    }
    else
    {
        int count=1;
       while(count<position-1)
       {
        current=current->link;
        count++;
       }
       current->link=current->link->link;
    }

}

void display()
{
    node *temp1=head;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1=temp1->link;
    }
}
   
int main()
{
    insert(4);
    insert(6);
    insert(8);
    insertat(2,2);
    insertat(5,3);
    deleteat(1);
    display();
    return 0;
}
