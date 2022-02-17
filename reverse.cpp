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
    last->next=temp;
    last = temp;
    }

}
void reverse(){
    struct Node *p;
    struct Node *q;
    struct Node *r;
    p = first;
    q = NULL;
    r = NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next = r;
    }
    first = q;
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
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    struct Node arr;
    create(A, 10);
    reverse();
    display();
    return 0;

}
