#include <stdio.h>
#include <iostream>

struct Node
{
	int frequency = 0;
};

struct LeafNode: public Node
{
	LeafNode(char _character, int _frequency){
		this->frequency = _frequency;
		this->character = _character;
	}
	char character;
};

struct HuffNode: public Node
{
	HuffNode(int _frequency)
	{
		this->frequency = _frequency;
	}
	Node* right;
	Node* left;
};

class HuffTree
{
public:
	HuffTree()
	{
		root = new LeafNode();
	}
	~HuffTree();
	LeafNode* root;
	void addNode()
	{
		// This requires getting the sum and merging of subtrees. Work has to be don here.
	}
	void removeNode();

};

void runHuffman(std::string inputstr, char* arr1, int* arr2)
{
	int len = inputstr.length();
	for (int i = 0; i < inputstr.length() ; i++)
	{
		arr1[i] = inputstr[i];
		arr2[i]++;
	}
	sort(arr1,arr2);
	HuffNode
	if (arr2[len-1] + arr2)

}

int main()
{
	runHuffman("Minhaj Ahmed Moin is my name");
	return 1;
}
