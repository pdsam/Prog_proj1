// projeto.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

//vetor de teste
string mystrings[] = { "ANA", "BANANA", "ERNESTO", "DARIO", "CARLA","FLAVIO"};
vector<string> words (mystrings,mystrings + 6);


//based on the quick sort algorithm
void sortVecString(vector <string> lista){
	sort(words.begin(), words.end());
	for (const auto& str : words) cout << str << ' ';
	cout << '\n';

}
//not implemented
void removeDuplicates() 
{

}


int main()
{
	sortVecString(words);

    return 0;
}

