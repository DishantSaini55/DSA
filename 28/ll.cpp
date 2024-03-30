// Online C++ compiler to run C++ program online
#include <iostream>//linekd list reversal without setting head=pre;
//
using namespace std;
class Mynode{
    public:
    int marks;
    Mynode* ptr;
    Mynode(int data){
        this->marks=data;
        this->ptr=NULL;
    }
};
void push(Mynode* &head,int data){
    Mynode* temp=new Mynode(data);
    temp->ptr=head;
    head=temp;

    

    
}

void print(Mynode* &head){
    Mynode* temp=head;
    while(temp!=NULL){
        cout<<temp->marks<<endl;
        temp=temp->ptr;
    }
    


}


void sort(Mynode* &head){
    
    Mynode* temp1=head;
    //int min=temp->marks;
    while(temp1!=NULL){
        Mynode* temp=temp1;
        int min=temp->marks;
        Mynode* temp2=temp;
        while(temp->ptr!=NULL){
            temp=temp->ptr;
            if(min>temp->marks){
                min=temp->marks;//temp2 points to min value
                temp2=temp;

            }
        }
        int a=min;
        temp2->marks=temp1->marks;
        temp1->marks=a;

        
        temp1=temp1->ptr;//temp 1 points intial valeus from left where min  element will be stored after swap
    
            
        
    }
    
    
    
    
}
void mergesortedll(Mynode* &head,Mynode* &head2){
    
    
    Mynode* temp1=head;
    Mynode* temp2=head2;
    Mynode* curr=head2;
    Mynode* curr2=head;
    Mynode* prev1=NULL;
    Mynode* prev2=NULL;
    while(curr!=NULL&&curr2!=NULL){
        
        
        
        
        if(temp1->marks>temp2->marks){
            while((temp2->marks<temp1->marks)&&(temp2->ptr!=NULL)){
                prev1=temp2;
                
                temp2=temp2->ptr;
                
            }
            temp2=prev1;
            
            
            curr=temp2->ptr;
            temp2->ptr=temp1;
            temp2=curr;
            head=head2;
            head2=curr;
            
        }
             
            
         
        else if(temp1->marks<temp2->marks){
            
            while((temp2->marks>temp1->marks)&&(temp1->ptr!=NULL)){
                prev2=temp1;
                
                
                
                
                temp1=temp1->ptr;
                
            
            }
            temp1=prev2;
            
            curr2=temp1->ptr;
            temp1->ptr=temp2;
            temp1=curr2;
            head2=head;
            head=curr2;
            
        }
             
             
            
        else if(temp1->marks=temp2->marks){
            if(temp1=head){
                curr=temp2->ptr;
                temp2->ptr=temp1;
                temp2=curr;
                head=head2;
                head2=curr;
                
            }
            else if(temp2=head2){
                curr2=temp1->ptr;
                temp1->ptr=temp2;
                temp1=curr2;
                head2=head;
                head=curr2;
            }
            else{
                
                curr2=temp1->ptr;
                temp1->ptr=temp2;
                temp1=curr2;
                head2=head;
                head=curr2;
            }
                
            
            
        }
            
        
     
                
    }
}
             
     

     
   
    
     


int main(){
    Mynode* head=NULL;
    Mynode* head2=NULL;
    


    //mynode* node1=new nodeconstr(10);
    push(head,10);
    push(head,2);
    push(head,3);
    push(head,500);
    push(head,89);
    push(head,1);
    
    push(head2,1);
    push(head2,10);
    push(head2,16);
    push(head2,9);
    cout<<"rintnig"<<endl;
    print(head2);
    cout<<"rintnig"<<endl;
    print(head);

    
    
    sort(head);
    cout<<"printing sorted linked list in ascending order"<<endl;
    print(head);//prin
    sort(head2);
    cout<<"printing sorted linked list in ascending order"<<endl;
    print(head2);//prin
    mergesortedll(head,head2);
    
    print(head);
}