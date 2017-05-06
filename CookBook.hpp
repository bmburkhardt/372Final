// Bryan Burkhardt
// 05 May 2017
// CookBook.hpp
// Header file for classes RealRecipe and Recipe

#ifndef CookBook_hpp
#define CookBook_hpp

#include <vector>
#include <string>

class RealRecipe
{
    int recipeID;

public:
    RealRecipe(int i);
    ~RealRecipe();
    void print();
};

class Recipe
{
    RealRecipe *_recipe;
    int recipeID;
    static int s_next;

public:
    Recipe();
    ~Recipe();
    void print();
};

#endif /* CookBook_hpp */
