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
	HuffNode right;
	HuffNode left;
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

void runHuffman(std::string inputstr)
{

	std::cout << inputstr << std::endl;
	int chars[128] = {0};
	for (int i = 0; i < inputstr.length() ; i++)
	{
		chars[(int)inputstr[i]]++;
	}
	for (int j = 0; j<128 ; j++)
	{
		std::cout << '(' << chars[j] << " , " << (char)j << " , " << j  << ')' << '\t';
	}


}

int main()
{
	runHuffman("Minhaj Ahmed Moin is my name");
	return 1;
}
