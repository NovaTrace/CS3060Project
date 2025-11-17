//Quinn Hackenberg
//CS 3060
//CPP 21.1

#include<iostream>
#include<string>
#include "genericBinaryTree.h"
using namespace std;

int main()
{

	// Testing insertNode
	cout << "Generating int and string trees...\n";
	GenericBinaryTree<int> intTree;
	cout << "Inserting nodes into int tree: 16, 58, 2, 36, 404, 45, 7\n";
	intTree.insertNode(16);
	intTree.insertNode(58);
	intTree.insertNode(2);
	intTree.insertNode(36);
	intTree.insertNode(404);
	intTree.insertNode(45);
	intTree.insertNode(7);

	GenericBinaryTree<string> stringTree;
	cout << "Inserting nodes into string tree: Test, Curly, Brace, Error, Pixel, End, Robot\n";
	stringTree.insertNode("Test");
	stringTree.insertNode("Curly");
	stringTree.insertNode("Brace");
	stringTree.insertNode("Error");
	stringTree.insertNode("Pixel");
	stringTree.insertNode("End");
	stringTree.insertNode("Robot");

	// Testing display orders
	cout << "\nInt tree In-Order Display: ";
	intTree.displayInOrder();
	cout << "\nInt tree Pre-Order Display: ";
	intTree.displayPreOrder();
	cout << "\nInt tree Post-Order Display: ";
	intTree.displayPostOrder();
	cout << "\n\nString tree In-Order Display: ";
	stringTree.displayInOrder();
	cout << "\nString tree Pre-Order Display: ";
	stringTree.displayPreOrder();
	cout << "\nString tree Post-Order Display: ";
	stringTree.displayPostOrder();

	// Testing searchNode
	cout << "\n\nSearching for 36 in int tree: " << intTree.searchNode(36);
	cout << "\nSearching for 303 in int tree: " << intTree.searchNode(303);
	cout << "\nSearching for 2 in int tree: " << intTree.searchNode(2);
	cout << "\nSearching for 'Pixel' in string tree: " << stringTree.searchNode("Pixel");
	cout << "\nSearching for 'Quote' in string tree: " << stringTree.searchNode("Quote");
	cout << "\nSearching for 'Text' in string tree: " << stringTree.searchNode("Text");

	// Testing remove
	cout << "\n\nRemoving 36 from int tree.";
	intTree.remove(36);
	cout << "\nInt tree In-Order Display after removal: ";
	intTree.displayInOrder();

	cout << "\n\nRemoving 'Pixel' from string tree.";
	stringTree.remove("Pixel");
	cout << "\nString tree In-Order Display after removal: ";
	stringTree.displayInOrder();

	cout << endl;
	return 0;
}