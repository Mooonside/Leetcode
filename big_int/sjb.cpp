#include <iostream>
#include<cstdio>
using namespace std;
 
struct node
{
    int data;
    node* next;
    node* prev;
    node(int x,node* p1=NULL,node* p2=NULL):data(x),next(p1),prev(p2){};
    node(node* p1=NULL,node* p2=NULL):next(p1),prev(p2){};
    ~node(){};
};
 
 
class linklist                  //因为要比较大小所以要使用双链表
{
    private:
        node* head;
        node* tail;
        int length;
    public:
        linklist(){head=new node;tail=new node;head->next=tail;tail->prev=head;length=0;};
        void tail_add(const int &x)
        {
            node* temp;
            temp=new node(x,tail,tail->prev);
            tail->prev->next=temp;
            tail->prev=temp;
            length++;
        }
        bool is_empty()
        {
            return head->next==tail;
        }
        int tail_pop()
        {
            if(!is_empty())
            {
                node* temp=tail->prev;
                int j=temp->data;
                tail->prev->prev->next=tail;
                tail->prev=tail->prev->prev;
                length--;
                delete temp;
                return j;
            }
        }
 
        int head_pop()
        {
            node* temp=head->next;
            int j=temp->data;
            head->next->next->prev=head;
            head->next=head->next->next;
            length--;
            delete temp;
            return j;
        }
        void head_add(const int &x)
        {
            node* temp;
            temp=new node(x,head->next,head);
            head->next->prev=temp;
            head->next=temp;
            length++;
        }
 
 
        bool bigger_than(const linklist& l)
        {
            node* t1=head->next;node* t2=l.head->next;
            for(int i=0;i<length;i++)
            {
                if(t1->data < t2->data) {return false;}
                if(t1->data > t2->data) {return true;}
                t1=t1->next;t2=t2->next;
            }
            return true;
        }
        void complete(linklist& l)
        {
            while(length<l.length)
            {
                head_add(0);
            }
            while(length>l.length)
            {
                l.head_add(0);
            }
        }
 
        void sub(linklist& l,linklist &r)
        {
            node* t1=tail->prev;
            node* t2=l.tail->prev;
            int carry=0;
            int n3;
            while(t1!=head)
            {
                int n1=t1->data,n2=t2->data;
                if(n1-carry >= n2){n3 = n1-carry-n2;r.head_add(n3); carry=0;}
                else{ n3=n1-carry+10-n2;r.head_add(n3);carry=1;}
                t1=t1->prev;t2=t2->prev;
            }
 
        }
 
        void simplify()
        {
            while(length>1)
            {
                node* temp=head->next;
                if(temp->data==0) head_pop();
                else{break;}
                temp=temp->next;
            }
        }
 
        void clear()
        {
            while(!is_empty())
            {
                tail_pop();
            }
        }
 
        void display()
        {
            node* temp=head->next;
            while(temp!=tail)
            {
                cout<<temp->data;
                temp=temp->next;
            }
        }
 
        ~linklist(){}
};
 
 
int main()
{
    linklist num1;
    linklist num2;
    linklist num3;
 
    string str;
    cin>>str;
    int i=0;
    while(str[i]!='\0')
    {
        num1.tail_add(str[i]-'0'+0);
        i++;
    }
 
    cin>>str;
    i=0;
    while(str[i]!='\0')
    {
        num2.tail_add(str[i]-'0'+0);
        i++;
    }
 
    num1.complete(num2);
 
 
    bool positive;
    positive=num1.bigger_than(num2);
 
    if(positive)
        {num1.sub(num2,num3);}
    else
        {num2.sub(num1,num3);}
 
    if(!positive) cout<<'-';
 
    num3.simplify();
 
    num3.display();
 
}