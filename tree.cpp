//c++ pregram to demonstrate tree data 
//structure in c++
//it is done using struct

#include<iostream>
using namespace std;
//creating a tree nod
struct Node{
    int data;
    struct Node* left;
    struct Node* right;

     Node(int val)
    {
        data = val;
 
        // Left and right child for node
        // will be initialized to null
        left = NULL;
        right = NULL;
    }

};
/*
def sum_values(root):
    if (root == None):
        return 0
    return root.data + sum_values(root.left) + sum_values(root.right)
    */
int  sum_values(Node* root){
    if (root == NULL){
        return 0;
    }
    cout<<"root->left"<<root->left<<endl;

    cout<<"root->right"<<root->right<<endl;

    cout << "i am getting it";

    return root->data + sum_values(root->left) + sum_values(root->right);

}



int main(){
    //creating root
    struct Node* root = new Node(1);
    //following is the tree after the 
    //above statement
    root->left = new Node(2);
    root->right = new Node(3);
    cout<<sum_values(root);
    return 0;

}