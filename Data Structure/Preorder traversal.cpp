#include<bits/stdc++.h>
using namespace std;
int Count=0;
struct Treenode
{
    int data;
    struct Treenode *leftchild;
    struct Treenode *rightchild;
};
typedef struct Treenode Treenode;
void PreOrder(Treenode *root);
Treenode* CreateTree()
{
    Treenode *root;
    cout<<"Enter the value of the node(-1 for no data)"<<endl;
    int nodevalue;
    cin>>nodevalue;
    if(nodevalue==-1)
        return NULL;
    root=(Treenode*)malloc(sizeof(Treenode));
    root->data=nodevalue;
    cout<<"Enter the leftchild of "<<nodevalue<<endl;
    root->leftchild=CreateTree();
    cout<<"Enter the rightchild of "<<nodevalue<<endl;
    root->rightchild=CreateTree();
    return root;
}
int main()
{
    Treenode *mainroot;
    mainroot=CreateTree();

    cout<<"The preorder traversal of the tree is : "<<endl;
    PreOrder(mainroot);
    cout<<"The number of leaves is : "<<endl;
    cout<<Count/2<<endl;
}
void PreOrder(Treenode *root)
{
    if(root==NULL)
        Count++;
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        PreOrder(root->leftchild);
        PreOrder(root->rightchild);
    }
}
