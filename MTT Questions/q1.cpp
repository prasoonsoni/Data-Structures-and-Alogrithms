// Singly linked list

#include<iostream>
using namespace std;

int i, j, choice, count = 0;

struct node{
    int data;
    struct node* next;
};

void display();
void insertAtBegin();
void insertAtEnd();
void insertAtLocation();
void countPositiveNegative();

struct node* head = NULL;

int main(){

    cout<<"1. DISPLAY THE LIST"<<endl;
    cout<<"2. INSERT AT BEGGINING"<<endl;
    cout<<"3. INSERT AT END"<<endl;
    cout<<"4. INSERT AT PARTICULAR POSITION"<<endl;
    cout<<"5. COUNT POSITIVE AND NEGATIVE ELEMENTS"<<endl;
    cout<<"6. NUMBER OF ELEMENTS IN LINKED LIST"<<endl;
    cout<<"7. EXIT"<<endl;

    while(choice!=7){
        cout<<"Enter your choice ? "<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                display();
                break;
            case 2:
                insertAtBegin();
                break;
            case 3:
                insertAtEnd();
                break;
            case 4:
                insertAtLocation();
                break;
            case 5:
                countPositiveNegative();
                break;
            case 6:
                cout<<"Number of elements in Linked List: "<<count<<endl;
                break;
            case 7:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid input"<<endl;
        }   
    }
    return 0;
}

void display(){
    struct node* p;
    p = head;
    if(p==NULL){
        cout<<"Linked List is empty"<<endl;
    } else {
        cout<<"<--Printing Linked List Elements-->"<<endl;
        while(p!=NULL){
            cout<<"\t";
            cout<<p->data<<endl;
            p = p->next;
        }
    }
}

void countPositiveNegative(){
    int positive = 0;
    int negative = 0;
    struct node* p;
    p = head;
    if (head==NULL){
        cout<<"Linked List is empty"<<endl;
    } else {
        while(p!=NULL){
            if(p->data>=0){
                positive+=1;
            } else {
                negative+=1;
            }
            p = p->next;
        }
    }
    cout<<"Number of Positive elements: "<<positive<<endl;
    cout<<"Number of Negative elements: "<<negative<<endl;
}


void insertAtBegin(){
    struct node *temp = new(struct node);
    int num;
    cout<<"Enter data to be inserted: "<<endl;
    cin>>num;
    temp->data = num;
    if(head==NULL){
        temp->next = NULL;
        head = temp;
        cout<<"Node Inserted at Beginning"<<endl;
        count+=1;
    } else {
        temp->next = head;
        head = temp;
        cout<<"Node Inserted at Beginning"<<endl;
        count+=1;
    }
}

void insertAtEnd(){
    struct node *temp,*r;
    temp = new(struct node);
    r = head;
    int num;
    cout<<"Enter data to be inserted: "<<endl;
    cin>>num;
    temp->data = num;
    if(head==NULL){
        temp->next = NULL;
        head = temp;
        cout<<"Node Inserted at Ending"<<endl;
        count+=1;
    } else {
        while(r->next!=NULL){
            r = r->next;
        }
        temp->next = NULL;
        r->next = temp;
        cout<<"Node Inserted at Ending"<<endl;
        count+=1;
    }

}

void insertAtLocation(){
    int pos;
    int num;
    cout<<"Enter the position at which you want to insert Node: "<<endl;
    cin>>pos;
    struct node *temp,*r, *t;
    r = head;
    if(pos==1){
        insertAtBegin();
    } else if (pos==count+1){
        insertAtEnd();
    } else if(pos>count+1){
        cout<<"There are less than "<<pos<<" Elements in linked list!!"<<endl;
    } else {
        for(i=1;i<pos;i++){
            t = r;
            r = r->next;
        }
        cout<<"Enter data to be inserted: "<<endl;
        cin>>num;
        temp = new(struct node);
        temp->data = num;
        t->next = temp;
        temp->next = r;
        cout<<"Node inserted at postion: "<<pos<<endl;
        count+=1;
    }
}

