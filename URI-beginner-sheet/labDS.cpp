#include <iostream>
using namespace std;

class BST
{
    int data;
    BST *left, *right;

public:

    BST();
    BST(int);
    BST* Insert(BST*, int);

    void Inorder(BST*);
    void Preorder(BST*);
    void Postorder(BST*);
};


BST::BST()
    : data(0)
    , left(NULL)
    , right(NULL)
{
}


BST::BST(int value)
{
    data = value;
    left = right = NULL;
}

BST* BST::Insert(BST* root, int value)
{
    if (!root)
    {
        return new BST(value);
    }

    if (value > root->data)
    {
        root->right = Insert(root->right, value);
    }
    else
    {
        root->left = Insert(root->left, value);
    }
    return root;
}

void BST::Inorder(BST* root)
{
    if (!root)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

void BST::Preorder(BST* root)
{
    if (!root)
    {
        return;
    }
    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}

void BST::Postorder(BST* root)
{
    if (!root)
    {
        return;
    }
    Preorder(root->left);
    Preorder(root->right);
    cout << root->data << " ";
}


int main()
{
    BST b, *root = NULL;

    for (int i = 0; i < 50; i++)
    {
        int n;

        cin >> n;

        if (!root)
        {
            root = b.Insert(root, n);
        }
        else
        {
            b.Insert(root, n);
        }
    }

    b.Inorder(root);
    cout << endl;
    b.Postorder(root);
    cout << endl;
    b.Preorder(root);

    return 0;
}
