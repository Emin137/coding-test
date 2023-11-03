#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
    char data;
    struct node *left;
    struct node *right;
}node;

void creat(node *root, char a, char b, char c)
{
    if(!root)
        return;
    else
    {
        if(root->data == a)
        {
            if(b!='.')
            {
                root->left = (node*)malloc(sizeof(node));
                root->left->data = b;
            }

            if(c!='.')
            {
                root->right = (node*)malloc(sizeof(node));
                root->right->data = c;
            }

        }
        else
        {
            creat(root->left, a, b, c);
            creat(root->right, a, b, c);
        }
    }
}

void preorder(node *root)
{
    if(!root)
        return;
    printf("%c", root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root)
{
    if(!root)
        return;
    inorder(root->left);
    printf("%c", root->data);
    inorder(root->right);
}

void postorder(node *root)
{
    if(!root)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%c", root->data);
}
int main()
{
   int n;
   cin >> n;
   char a,b,c;
   cin >> a >> b >> c;
   node *root = (node *)malloc(sizeof(node));
   root->data = a;
    if(b!='.')
    {
        root->left = (node*)malloc(sizeof(node));
        root->left->data = b;
    }

    if(c!='.')
    {
        root->right = (node*)malloc(sizeof(node));
        root->right->data = c;
    }
   for(int i=0; i<n-1; i++)
   {
       cin >> a >> b >> c;
        creat(root, a, b, c);
   }

    preorder(root); printf("\n");
    inorder(root); printf("\n");
    postorder(root); printf("\n");
}