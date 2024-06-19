#include<iostream>
using namespace std;
struct node{

    int data;
    struct node *next;
};

struct node *top=0;
void push(int x){
    struct node *Newnode;
    Newnode=new(node);

    Newnode->data=x;
    Newnode->next=top;
    top=Newnode;
    cout<<"New node added";
}
void pop(){
    struct node*temp;
    temp=top;
    if(top==0){
        cout<<"stack is empty.";

    }
    else{
        cout<<"popped element is"<<" "<<top->data;
        top=temp->next;

    }
}
void view(){
     struct node*temp;
    temp=top;
    cout<<"HEAD ->";
    if(top==0){
        cout<<"stack is empty.";

    }
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;

    }
    cout<<"NULL";

}
int main(){

    int item,choice;
    while(1){
        cout<<"\n\n\n";
        cout<<"Stack using linked list"<<"\n\n";
        cout<<"1-> Push"<<" "<<"2-> Pop"<<" "<<"3-> View"<<" "<<"4-> Exit\n\n";
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter label for new node:";
            cin>>item;
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            view();
            break;
        case 4:exit(0);

        default:
            break;
        }






    }
}