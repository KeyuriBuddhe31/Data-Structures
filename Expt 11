#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *left, *right;
};


struct Node* newNode(int val) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = val;
    temp->left = temp->right = NULL;
    return temp;
}


struct Node* insert(struct Node* root, int key) {
    if (root == NULL) return newNode(key);
    
    if (key < root->data)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);
        
    return root;
}


void printRange(struct Node* root, int low, int high) {
    if (root == NULL) return;

 
    if (root->data > low) {
        printRange(root->left, low, high);
    }


    if (root->data >= low && root->data <= high) {
        printf("%d ", root->data);
    }

 
    if (root->data < high) {
        printRange(root->right, low, high);
    }
}

int main() {

    struct Node* root1 = NULL;
    int arr1[] = {17, 4, 18, 2, 9};
    for(int i = 0; i < 5; i++) root1 = insert(root1, arr1[i]);
    
    printf("Example 1 Output (Range 4-24): ");
    printRange(root1, 4, 24);
    printf("\n");


    struct Node* root2 = NULL;
    int arr2[] = {16, 7, 20, 1, 10};
    for(int i = 0; i < 5; i++) root2 = insert(root2, arr2[i]);
    
    printf("Example 2 Output (Range 13-23): ");
    printRange(root2, 13, 23);
    printf("\n");

    return 0;
}
