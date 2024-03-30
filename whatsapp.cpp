#include<iostream>
using namespace std;
struct node{
    int data1;
    int data2;
    node*next;
    node (int data1,int data2){
        this->data1=data1;
        this->data2=data2;
        this->next=NULL;
    }
};
class poly{
    public:
    node*head;
    poly(){
        this->head=NULL;
    }
};
void insertion(int data1,int data2,node*head){
    node*temp=new node(data1,data2);
    node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=temp;
}
void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<" + ";
        cout<<temp->data1<<"x^"<<temp->data2;
        temp=temp->next;
    }
    cout<<endl;
}
void addpoly(node*head1,node*head2){
    node*temp1=head1;
    node*temp2=head2;
    node*temp3=NULL;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data2==temp2->data2){
            insertion(temp1->data1+temp2->data1,temp1->data2,temp3);
            temp1=temp1->next;
            temp2=temp2->next;
        }
        if(temp1->data2 > temp2->data2){
            temp1=temp1->next;
        }
        if(temp1->data2 < temp2->data2){
            temp2=temp2->next;
        }
    }
    while (temp1 != NULL) {
        insertion(temp1->data1, temp1->data2, temp3);
        temp1 = temp1->next;
    }
    while (temp2 != NULL) {
        insertion(temp2->data1, temp2->data2, temp3);
        temp2 = temp2->next;
    }
    print(temp3);
}
int main(){
    node*f1=new node(2,2);
    insertion(-3,1,f1);
    insertion(1,0,f1);
    print(f1);
    node*f2=new node(3,2);
    insertion(4,1,f2);
    insertion(2,0,f2);
    print(f2);
    addpoly(f1,f2);
    print(f2);
}