#include<stdio.h>
#include<stdlib.h>

struct node
{
    int item;
    struct node* left;
    struct node* right;
    
};

void inorder(struct node* root){
    if(root == NULL){
      //  printf(" No elements in a tree to display ");
        return;
    }
    inorder(root->left);
    printf("%d -> ", root->item);
    inorder(root->right);
}

void preorder(struct node* root){
    if(root == NULL){
      //  printf(" No elements in a tree to display ");
        return;
    }
    printf("%d -> ", root->item);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node* root){
    if(root == NULL){
      //  printf(" No elements in a tree to display ");
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d -> ", root->item);

}

//create a new node

struct node* createnode(value){
    struct node* newNode = malloc(sizeof(struct node));
    newNode -> item = value;
    newNode -> left = NULL;
    newNode -> right = NULL;

    return newNode;
}

//insetion 

struct node* insertleft(struct node* root, int value){
    root->left = createnode(value);
    return root->left;
}

struct node* insertright(struct node* root, int value){
    root->right = createnode(value);
    return root->right;
}

int main(){
    struct node* root = createnode(1);
    insertleft(root,12);
    insertright(root,9);

    insertleft(root->right,5);
    insertright(root->left,6);

    printf("Inorder tarversal \n");
    inorder(root);

    printf(" \npreorder tarversal \n");
    preorder(root);

    printf(" \npostorder tarversal \n");
    postorder(root);

}
