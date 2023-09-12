#include <iostream>
#include <ostream>
#include <stdlib.h>
struct Node
{
	int data;
	Node* right;
	Node* left;
	Node(int data, Node* left = nullptr, Node* right = nullptr) :
		data(data), left(left), right(right) {}
};
class BTree
{
private:
	Node* root;

	void Insert(Node*& root, Node* node)
	{
		if (root == nullptr)
		{
			root = node;
			return;
		}
		if (root->data > node->data)
		{
			return Insert(root->left, node);
		}
		if (root->data < node->data)
		{
			return Insert(root->right, node);
		}
		if (root->data == node->data)
		{
			return;
		}
	}

	void Print(std::ostream& stream, Node*& root, int depth = 0)
	{
		if (root == nullptr)
		{
			return;
		}
		Print(stream, root->left, depth + 1);
		for (int i = 0; i < depth; ++i)
		{
			std::cout << "\t";
		}
		stream << root->data << std::endl;
		Print(stream, root->right, depth + 1);
	}

	/*Node*& GetNode(Node*& root, int element)
	{
		if (root == nullptr || root->data == element)
		{
			return root;
		}
		if (root->data > element)
		{
			return GetNode(root->left, element);
		}
		if (root->data < element)
		{
			return GetNode(root->right, element);
		}
	}*/
	Node* seekReplacement(Node*& root)
	{
		Node* temp = root->left;
		while (temp->right != nullptr)
		{
			temp = temp->right;
		}
		return temp;
	}
	Node* Extract(Node*& root)
	{
		if (root->left == nullptr && root->right == nullptr)
		{
			if (seekPrev(root)->data > root->data)
			{
				seekPrev(root)->left = nullptr;
			}
			if (seekPrev(root)->data < root->data)
			{
				seekPrev(root)->right = nullptr;
			}
		}
		else if (root->left == nullptr)
		{
			if (seekPrev(root)->data > root->data)
			{
				seekPrev(root)->left = root->right;
			}
			if (seekPrev(root)->data < root->data)
			{
				seekPrev(root)->right = root->right;
			}
		}
		else if (root->right == nullptr)
		{
			if (seekPrev(root)->data > root->data)
			{
				seekPrev(root)->left = root->left;
			}
			if (seekPrev(root)->data < root->data)
			{
				seekPrev(root)->right = root->left;
			}
		}
		else
		{
			if (seekPrev(root)->data > root->data)
			{
				seekPrev(seekReplacement(root))->right = nullptr;
				seekPrev(root)->left = seekReplacement(root);
				seekReplacement(root)->left = root->left;
				seekReplacement(root)->right = root->right;
			}
			if (seekPrev(root)->data < root->data)
			{
				seekPrev(seekReplacement(root))->right = nullptr;
				seekPrev(root)->right = seekReplacement(root);
				seekReplacement(root)->left = root->left;
				seekReplacement(root)->right = root->right;
			}
		}
		return root;
	}
	Node* seekRoot()
	{
		return root;
	}
	Node* seekPrev(Node* node)
	{
		Node* temp = this->root;
		if (node->data < temp->left->data)
		{
			temp = temp->left;
		}
		else if (node->data > temp->left->data && node->data < temp->right->data)
		{
			temp = temp->left;
		}
		else if (node->data > temp->right->data)
		{
			temp = temp->right;
		}
		else if (node->data < temp->right->data && node->data > temp->left->data)
		{
			temp = temp->right;
		}
		else if (node->data == temp->left->data || node->data == temp->right->data)
		{
			return temp;
		}
	}
public:
	Node*& GetNode(Node*& root, int element)
	{
		if (root == nullptr || root->data == element)
		{
			return root;
		}
		if (root->data > element)
		{
			return GetNode(root->left, element);
		}
		if (root->data < element)
		{
			return GetNode(root->right, element);
		}
	}
	BTree() : root(nullptr) {}

	void Add(int data)
	{
		Insert(root, new Node(data));
	}

	void Remove(int data)
	{
		Node*& node = GetNode(root, data);
		if (node != nullptr)
		{
			Node* extracted = Extract(node);
			delete extracted;
		}
	}

	bool Contains(int data)
	{
		return (GetNode(root, data) != nullptr);
	}

	friend std::ostream& operator<<(std::ostream& stream, BTree& tree)
	{
		stream << "__________________" << std::endl;
		if (tree.root == nullptr)
		{
			stream << "EMPTY" << std::endl;
		}
		else
		{
			tree.Print(stream, tree.root);
		}
		stream << "__________________" << std::endl;
		return stream;
	}
	int seekDepth(Node* l = nullptr ,int m = 0)
	{
		int max1 = m;
		if (root == nullptr)
		{
			return max1;
		}
		return std::max(seekDepth(root->left, m + 1), seekDepth(root->right, m + 1));
	}

};


int main(int argc, char* argv[])
{
	BTree tree;
	tree.Add(8);
	tree.Add(4);
	tree.Add(12);
	tree.Add(2);
	tree.Add(6);
	tree.Add(10);
	tree.Add(14);
	tree.Add(1);
	tree.Add(3);
	tree.Add(5);
	tree.Add(7);
	tree.Add(9);
	tree.Add(11);
	tree.Add(13);
	tree.Add(15);
	std::cout << tree;
	//tree.Remove(14);
	std::cout << tree.seekDepth();
	std::cout << tree;
	return EXIT_SUCCESS;
}