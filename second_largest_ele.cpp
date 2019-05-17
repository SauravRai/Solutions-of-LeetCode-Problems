/*******************************************************************
@author: Saurav Rai
C++ program for finding the second largest element in a binary tree

Assumption: The inputs are integers
Approach: Recursive,  Dynamic allocation of nodes in the tree, Base case are also handled
Time Complexity: O(h) where h is the height of the tree
********************************************************************/
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
    {
      int data;
      Node *left;
      Node *right;
    };

class Tree
    {
      public:
      Node *root = nullptr;

      Node *newNode(Node *root,int element)
        {
            Node *temp;
            temp = new Node(); //dynamic allocation of Node
            temp->data = element;
            temp->left = NULL;
            temp->right = NULL;
            return(temp);
        }

      Node *insert_node(Node *root, int element)
        {
            if(root == nullptr)
              {
                  return newNode(root,element);
              }

            if(element<root->data)
              {
                   root->left = insert_node(root->left,element);
              }
            else
              {
                   root->right = insert_node(root->right,element);
              }
        }
      void inorder_traversal(Node *root)
         {
             if(root == NULL) //Base case: very important
                 return;
             inorder_traversal(root->left);
             cout<<root->data<<" ";
             inorder_traversal(root->right);
         }

      void second_largest_element(Node *root , int &c)
         {
            //Base cases
            if(root == nullptr || c >= 2)
              {
                 return;
              }
            //follow reverse inorder traversal so that the largest element is visited first
            second_largest_element(root->right, c);
            c++;
            if(c==2)
                 cout<<"The second largest element is: "<<root->data;
            second_largest_element(root->left,c);

         }

    };

    int main()
      {
          Tree tree;
          int size_tree;
          int element;
          int a = 0;
          cout<<"Enter the size of the tree"<<endl;
          cin>>size_tree;
          for(int i=0;i<size_tree;i++)
            {
                cout<<"Enter the element in the tree"<<endl;
                cin>>element;
                tree.root = tree.insert_node(tree.root,element);
            }

          tree.inorder_traversal(tree.root);
          cout<<endl;
          tree.second_largest_element(tree.root,a);

        return 0;
      }


