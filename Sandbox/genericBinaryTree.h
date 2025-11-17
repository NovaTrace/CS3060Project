#ifndef GENERICBINARYTREE_H
#define GENERICBINARYTREE_H
#include <iostream>

using namespace std;

template <typename T>
class GenericBinaryTree
{
private:
	struct Node
	{
		T value;
		Node* left;
		Node* right;

		Node(const T& val) : value(val), left(nullptr), right(nullptr) {}
	};

	Node* root;

	void insert(Node*& rootPtr, Node*& newNode)
	{
		if(rootPtr == nullptr)
			rootPtr = newNode;
		else if (newNode->value < rootPtr->value)
			insert(rootPtr->left, newNode);
		else
			insert(rootPtr->right, newNode);
	}

	void destroySubTree(Node*& current)
	{
		if (current)
		{
			if(current->left)
				destroySubTree(current->left);
			if (current->right)
				destroySubTree(current->right);
			delete current;
		}
	}
	void deleteNode(Node*& current, T value)
	{
		if (current == nullptr)
		{
			cout << "Value not found in the tree.\n";
			return;
		}
		else if (value < current->value)
			deleteNode(current->left, value);
		else if (value > current->value)
			deleteNode(current->right, value);
		else
			makeDeletion(current);
	}

	void makeDeletion(Node*& current)
	{
		Node* tempNodePtr = nullptr;

		if (current->right == nullptr)
		{
			tempNodePtr = current;
			current = current->left;
			delete tempNodePtr;
		}
		else if (current->left == nullptr)
		{
			tempNodePtr = current;
			current = current->right;
			delete tempNodePtr;
		}
		else
		{
			tempNodePtr = current->right;
			while (tempNodePtr->left)
				tempNodePtr = tempNodePtr->left;
			tempNodePtr->left = current->left;
			tempNodePtr = current;
			current = current->right;
			delete tempNodePtr;
		}
	}

	void displayInOrder(Node* current) const
		{
			if (current)
			{
				displayInOrder(current->left);
				cout << current->value << " ";
				displayInOrder(current->right);
			}
		}
	

	void displayPreOrder(Node* current) const
	{
		if (current)
		{
			cout << current->value << " ";
			displayPreOrder(current->left);
			displayPreOrder(current->right);
		}
	}

	void displayPostOrder(Node* current) const
	{
		if (current)
		{
			displayPostOrder(current->left);
			displayPostOrder(current->right);
			cout << current->value << " ";
		}
	}

public:

	// Constructor and Destructor
	GenericBinaryTree() { root = nullptr; };
	~GenericBinaryTree() { destroySubTree(root); };

	void insertNode(T value)
	{
		Node* newNode = new Node(value);
		insert(root, newNode);
	}

	bool searchNode(T value)
	{
		Node* current = root;
		while (current)
		{
			if (current->value == value)
				return true;
			else if (value < current->value)
				current = current->left;
			else
				current = current->right;
		}
		return false;
	}

	void remove(T value) { deleteNode(root, value); }
	void displayInOrder() { displayInOrder(root); }
	void displayPreOrder() { displayPreOrder(root); }
	void displayPostOrder() { displayPostOrder(root); }
};

#endif