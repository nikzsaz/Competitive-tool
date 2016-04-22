#include <stdio.h>
#include <stdlib.h>
// I am Niraj Sazzie
//[left][num][right] this is node
struct node{
    int key;
    struct node *left;
    struct node *right;
};
// this is for creating the node of particaular value
struct node *newNode(int num){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->key=num;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
//For inserting the value in the root according to the bst rule
struct node *insert(struct node *temp,int key){
    if(temp==NULL)
    return newNode(key);
    if(temp->key>key)
    temp->left=insert(temp->left,key);
    else if(temp->key<key)
    temp->right=insert(temp->right,key);// using recursion to read at the desired node
                                        // where i can insert the key :)
    return temp;
}
// this is the algorithm for the printing the value in preorder
void preorder(struct node *r){
    if(r!=NULL){
        printf(" %d ",r->key);
        preorder(r->left);
        preorder(r->right);
    }
}
// this is algorithm for printing value in the inorder
void inorder(struct node *r){
    if(r!=NULL){
        preorder(r->left);
         printf(" %d ",r->key);
        preorder(r->right);
    }
}
struct node* search(struct node* temp,int match){
    if(temp==NULL || temp->key==match)
    return temp;
    if(temp->key>match)
    return search(temp->left,match);
    return search(temp->right,match);
}
int main(void) {
	struct node *root=NULL;
	root=insert(root,50);// creating the root node and then adding the subsequent values to that node
	insert(root,30);
	insert(root,450);
	insert(root,40);
	insert(root,23);
	// this is for the traversal
	inorder(root);
	// This is for searching the key
	struct node *val=search(root,140);
	if(val==NULL){
	    printf("Sorry No match");
	}else{
	printf("  %d  ",val->key);
	}
	return 0;
}

