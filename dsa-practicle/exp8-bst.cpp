#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

class BinarySearchTree
{
public:
    Node *root;

    BinarySearchTree() : root(nullptr) {}

    void insert(int value)
    {
        root = insertRecursive(root, value);
    }

    Node *insertRecursive(Node *root, int value)
    {
        if (root == nullptr)
        {
            root = new Node{value, nullptr, nullptr};
        }
        else if (value < root->data)
        {
            root->left = insertRecursive(root->left, value);
        }
        else
        {
            root->right = insertRecursive(root->right, value);
        }
        return root;
    }

    int longestPath()
    {
        return height(root);
    }

    int findMin()
    {
        return findMinRecursive(root);
    }

    int findMinRecursive(Node *root)
    {
        if (root->left == nullptr)
        {
            return root->data;
        }
        return findMinRecursive(root->left);
    }

    void mirror()
    {
        root = mirrorRecursive(root);
    }

    Node *mirrorRecursive(Node *root)
    {
        if (root == nullptr)
        {
            return root;
        }
        Node *temp = root->left;
        root->left = mirrorRecursive(root->right);
        root->right = mirrorRecursive(temp);
        return root;
    }

    void inorderTraversal()
    {
        inorderTraversalRecursive(root);
    }

    void inorderTraversalRecursive(Node *root)
    {
        if (root != nullptr)
        {
            inorderTraversalRecursive(root->left);
            cout << root->data << ' ';
            inorderTraversalRecursive(root->right);
        }
    }

    void preorderTraversal()
    {
        preorderTraversalRecursive(root);
    }

    void preorderTraversalRecursive(Node *root)
    {
        if (root != nullptr)
        {
            cout << root->data << ' ';
            preorderTraversalRecursive(root->left);
            preorderTraversalRecursive(root->right);
        }
    }

    void postorderTraversal()
    {
        postorderTraversalRecursive(root);
    }

    void postorderTraversalRecursive(Node *root)
    {
        if (root != nullptr)
        {
            postorderTraversalRecursive(root->left);
            postorderTraversalRecursive(root->right);
            cout << root->data << ' ';
        }
    }

    bool search(int key)
    {
        return searchRecursive(root, key);
    }

    bool searchRecursive(Node *root, int key)
    {
        if (root == nullptr)
        {
            return false;
        }
        if (root->data == key)
        {
            return true;
        }
        if (key < root->data)
        {
            return searchRecursive(root->left, key);
        }
        return searchRecursive(root->right, key);
    }

    int height(Node *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return max(leftHeight, rightHeight) + 1;
    }
};

int main()
{
    BinarySearchTree tree;

    char ans;

    do
    {
        cout << "1) Insert 2) Longest Path 3) Minimum 4) Mirror 5) Search 6) Inorder 7) Preorder 8) Postorder: ";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            int value;
            cout << "Enter value to insert: ";
            cin >> value;
            tree.insert(value);
            break;
        case 2:
            cout << "Longest Path: " << tree.longestPath() << endl;
            break;
        case 3:
            cout << "Minimum: " << tree.findMin() << endl;
            break;
        case 4:
            tree.mirror();
            cout << "Tree mirrored." << endl;
            break;
        case 5:
            int key;
            cout << "Enter key to search: ";
            cin >> key;
            if (tree.search(key))
            {
                cout << "Key found." << endl;
            }
            else
            {
                cout << "Key not found." << endl;
            }
            break;
        case 6:
            cout << "Inorder Traversal: ";
            tree.inorderTraversal();
            cout << endl;
            break;
        case 7:
            cout << "Preorder Traversal: ";
            tree.preorderTraversal();
            cout << endl;
            break;
        case 8:
            cout << "Postorder Traversal: ";
            tree.postorderTraversal();
            cout << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
        }

        cout << "Do you want to continue (y/n): ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');

    return 0;
}