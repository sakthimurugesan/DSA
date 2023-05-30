#include <iostream>
#include <queue>

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
void depth(TreeNode *root)
{
    int d=0;
    queue<TreeNode *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        TreeNode *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            d++;
        }
        if (temp != NULL)
        {
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
    cout<<d+1;
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

    //inorderDisplay(root);
    depth(root);
    return 0;
}