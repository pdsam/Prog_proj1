// projeto.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//vetor de teste
string mystrings[] = { "help", "I", "Have", "cripling", "depression" };
vector<string> words (mystrings,mystrings+8);


//based on the quick sort algorithm
void sortVecString(vector <string> lista, int left, int right){
	int i = left, j = right;

	int tmp;

	int pivot = lista.size / 2;



}
//not implemented
void removeDuplicates() 
{

}


int main()
{
    return 0;
}

