#include<iostream>
using namespace std;
void display();
void pop();
void push(int item);
#define MAX 10
int mystack[MAX];
int top=-1;
int main()
{

    while(2)
    {
        cout<<"stack menu :\n1.push\n2.pop\n3.display\n4.exit\n"<<endl;
        cout<<"Enter your choice : "<<endl;
        int choice;
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter the element you want to push "<<endl;
            int item;
            cin>>item;
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        }
        if(choice==4)
            break;
    }


}
void push(int item)
{
    if(top>=MAX-1)
    {
        cout<<"The stack is full "<<endl;
    }
    else
    {
        top++;
        mystack[top]=item;
        cout<<item<<"is successfully pushed "<<endl;
    }


}
void pop()
{
    int item;
    if(top<0)
    {
        cout<<"the stack is Empty"<<endl;

    }
    else
    {
        item=mystack[top];
        top--;
        cout<<item<<"is successfully poped"<<endl;
    }

}
void display()
{
    cout<<" the stack is : "<<endl;
    for(int i=top; i>=0; i--)
        cout<<mystack[i]<<endl;
}
