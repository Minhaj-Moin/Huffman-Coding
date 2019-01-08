#include <stdio.h>
#include <iostream>


// class HuffNode
// {
// 	HuffNode();
// 	int frequency;
// 	char character;
// 	HuffNode right;
// 	HuffNode left;
// };
// class HuffTree
// {
// public:
// 	HuffTree();
// 	~HuffTree();
// 	HuffNode root;
// 	void addNode();
// 	void removeNode();

// };

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
		std::cout << chars[j] << " , " << (char)j << " , " << j << std::endl;
	}
}

int main()
{
	runHuffman("Minhaj Ahmed Moin is my name");
	return 1;
}
