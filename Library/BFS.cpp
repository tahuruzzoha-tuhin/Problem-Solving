#include <bits/stdc++.h>
using namespace std;


int distancePath= 0;

struct Node
{
	int data;
	Node *left, *right;
};


Node *newNode(int item)
{
	Node *temp = new Node;
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}

int findDistance(Node *root, int x)
{

	if (root == NULL)
	return -1;


	int dist = -1;

	if ((root->data == x) || (dist = findDistance(root->left, x)) >= 0 || (dist = findDistance(root->right, x)) >= 0)
        {
            int p = dist + 1;
            cout << p << "-->";
            distancePath = p;
            return p;
        }
	return dist;
}

//          A
//        /    \
//      B       C
//     / \     /  \
//    D   E   F    G
//         \
//          H


int main()
{
    int Ar[8];
    cout << "Enter 8 Different Value: ";
    for(int i=0; i<8; i++){
        cin >> Ar[i];
    }

    cout << "Here the graph: " << endl;
    cout << endl;

    cout <<"     A          "<< endl;
    cout <<"   /   \\        "<< endl;
    cout <<"  B     C      "<< endl;
    cout <<" / \\   / \\     "<< endl;
    cout <<" D  E  F   G    "<< endl;
    cout <<"     \\          "<< endl;
    cout <<"      H         "<< endl;
    cout << endl;

	Node *root = newNode(Ar[0]);
	root->left = newNode(Ar[1]);
	root->right = newNode(Ar[2]);
	root->left->left = newNode(Ar[3]);
	root->left->right = newNode(Ar[4]);
	root->left->right->right = newNode(Ar[5]);
	root->right->left = newNode(Ar[6]);
	root->right->right = newNode(Ar[7]);

	for(int i=0; i<8; i++){
        cout << "Path:" << findDistance(root, Ar[i]) << "     " << "Distance: " << distancePath << endl;
        cout << endl;
	}
	return 0;
}
