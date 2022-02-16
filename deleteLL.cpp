#include <iostream>
using namespace std;

struct Node{
      int data;
      struct Node *next;
}*first;

void create(int A[], int n){
    struct Node *temp;
    struct Node *last;
    int i;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i=1; i<n; i++){
    temp = new Node;
    temp->data = A[i];
    temp->next = NULL;
    last->next = temp;
    last = temp;
    }

}
void deleteLinked(int n){
    int x;
    struct Node *p;
    struct Node *q;
    p = first;
    q = NULL;
    if(first->data == n){
         first = first->next;
         x = p->data;
         delete p;
    }
    else{
        while(p!=0){
            if(p->data == n){
             q->next = p->next;
        x = p->data;
        delete p;
        }
        else{
        q = p;
        p = p->next;
        }
            
        }
    }
    
   }

void display(){
    struct Node *p;
    p = first;
    while(p!=0){
        cout<<p->data<<endl;
        p = p->next;
    }
}

int main(){
    int n;
    int A[] = {1,2,3,4,5,7,8,9,10,12};
    struct Node arr;
    cout<<"Enter the number the which is to be deleted:"<<endl;
    cin>>n;
    create(A, 10);
    deleteLinked(n);
    display();
    return 0;

}