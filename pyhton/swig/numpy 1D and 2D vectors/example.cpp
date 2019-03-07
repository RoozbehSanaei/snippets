/* File example.cpp */
#include "example.h"
#include <iostream>




std::vector<double> test1_in(std::vector<double> mat){
	std::vector<double> ret (4);
		for (size_t j = 0; j < mat.size(); ++j){
			std::cout << 2 * mat[j] << " ";
		std::cout << "\n";    
	}
	return ret;
	mat[0] = 2;
}



std::vector<std::vector<double> > test2_d(const std::vector<std::vector<double> >& mat){
	std::vector<std::vector<double> > ret (4, std::vector<double>(4,0.25));
	for (size_t i = 0; i < mat.size(); ++i){
		for (size_t j = 0; j < mat[i].size(); ++j){
			std::cout <<  2 * mat[i][j] << " ";
		}
		std::cout << "\n";    
	}
	return ret;
}



std::vector<std::vector<int> > test2_i(const std::vector<std::vector<int> >& mat){
	std::vector<std::vector<int> > ret;
	for (size_t i = 0; i < mat.size(); ++i){
		for (size_t j = 0; j < mat[i].size(); ++j){
			std::cout << 2 * mat[i][j] << " ";
		}
		std::cout << "\n";    
	}
	return ret;
}