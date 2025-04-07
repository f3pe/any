// Versão em C++ do código para obter todos os sub conjuntos de um conjunto X
#include <iostream>
#include <vector>

void getSubSets(int index, std::vector<int> subset, std::vector<int> original, std::vector<std::vector<int>>& subsets){
    // Como todo bom código recursivo, começe com o caso base    
    if (index == original.size()){
            subsets.push_back(subset);
            return;    
    }
    subset.push_back(original[index]);    
    getSubSets(index + 1, subset, original, subsets);    
    subset.pop_back();    
    getSubSets(index + 1, subset, original, subsets);
}
int main(){    
		std::vector<int> set = {1, 2, 3, 4};
    std::vector<std::vector<int>> result;
    getSubSets(0, {}, set, result);
    for (auto subset : result){        
				    std::cout << "[ ";
				    for (auto x : subset){
				                std::cout << x << " ";        
				    }        
				    std::cout << "]" << std::endl;
		}
	  return 0;
}
