#include <iostream>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *insert(TreeNode *node, int val)
{
    if (node == NULL)
    {
        return new TreeNode(val);
    }

    if (val < node->val)
    {
        node->left = insert(node->left, val);
    }
    else
    {
        node->right = insert(node->right, val);
    }

    return node;
}

void inorderDisplay(TreeNode *node)
{
    if (node == NULL)
    {
        return;
    }

    inorderDisplay(node->left);
    cout << node->val << " ";
    inorderDisplay(node->right);
}

int main()
{
    TreeNode *root = NULL;
    int val;

    while (true)
    {
        cout << "Enter a value to insert (or -1 to stop): ";
        cin >> val;

        if (val == -1)
        {
            break;
        }

        root = insert(root, val);
    }

    inorderDisplay(root);

    return 0;
}