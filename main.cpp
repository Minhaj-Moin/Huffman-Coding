#include <stdio.h>
#include <iostream>


struct HuffNode
{
	HuffNode(char _character, int _frequency){
		this->frequency = _frequency;
		this->character = _character;
	}
	HuffNode()
	{
		this->frequency = 0;
		this->character = '\0';
	}
	int frequency;
	char character;
	HuffNode* right;
	HuffNode* left;
};

class HuffTree
{
public:
	HuffTree()
	{
		root = new HuffNode();
	}
	~HuffTree();
	HuffNode* root;
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
	

}

int main()
{
	runHuffman("Minhaj Ahmed Moin is my name");
	return 1;
}
