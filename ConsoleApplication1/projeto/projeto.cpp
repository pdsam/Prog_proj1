// projeto.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

//vetor de teste
string mystrings[] = { "ANA", "BANANA", "ERNESTO", "BANANA", "CARLA","FLAVIO"};
vector<string> words (mystrings,mystrings + 6);


//based on the quick sort algorithm
void sortVecString(vector <string> lista){
	sort(lista.begin(), lista.end());
	for (const auto& str : lista) cout << str << ' '; //rescreve o vetor
	cout << '\n';

}
//check every if one element of the vector and the one next to it are equal
void removeDuplicates(vector <string> lista) 
//not tested 
{
	int i = 0;
	 while ( i <= lista.size()) {
		if (lista.at(i) == lista.at(i + 1))
		{
			lista.erase(lista.begin()+i);
		}
		else i++;
		
	}


}


int main()
{
	sortVecString(words);

    return 0;
}

