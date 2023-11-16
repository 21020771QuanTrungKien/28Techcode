#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    node *next;
}
//tao mot node moi co data la x va tra ve node do 
node *makeNode(int x){
    node *newNode = new node;
    newNode->date = x;
    newNode->next = NULL;
    return newNode;
}
int main(){
    node *X = makeNode(5)
    return 0;
}