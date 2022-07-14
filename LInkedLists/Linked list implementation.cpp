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
    display();

    return 0;
}
