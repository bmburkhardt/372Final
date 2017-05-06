// Bryan Burkhardt
// 05 May 2017
// CookBook.cpp
// Source file for CookBook.hpp

#include "CookBook.hpp"
#include <iostream>

// ****** Constructors and functions for class RealRecipe ****** //
RealRecipe::RealRecipe(int i) : recipeID(i) {
    std::cout << "   $$ ctor: " << recipeID << "\n";
}
RealRecipe::~RealRecipe() {
    std::cout << "   dtor: " << recipeID << "\n";
}
void RealRecipe::print() {
    std::cout << "   printing recipe " << recipeID << "\n";
}




// ****** Constructors and functions for class Recipe ****** //
int Recipe::s_next = 1;

Recipe::Recipe() : recipeID(s_next++), _recipe(0) {}

Recipe::~Recipe() {
    delete _recipe;
}
void Recipe::print() {
    if (!_recipe)
        _recipe = new RealRecipe(recipeID);
    _recipe->print();
}

