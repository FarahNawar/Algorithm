#include<stdio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node node;
node* create();
void preorder(node *t);
int main()
{
 node *root;
root=create();
printf("the preorder traversal of the tree is:\n\n");
preorder(root);
}

node* create()
{
    node *p;
    int x;
    printf("enter data(-1 for no data):\n");
    scanf("%d",&x);
    if(x==-1)
        return NULL;
        p=(node*)malloc(sizeof(node));
        p->data=x;
    printf("enter the left chile of %d\n",x);
    p->left=create();
    printf("enter the right child of %d\n",x);
    p->right=create();
    return p;
}
void preorder(node *t)
{
    if(t!=NULL)
    {
        printf("\n%d",t->data);
        preorder(t->left);
        preorder(t->right);
    }
}
