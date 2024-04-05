#pragma once

#include <vector>
#include <string>

using namespace std;

namespace SearchRecipe
{
    class FoundRecipe
    {
    public:
        static vector<string> searchRecipe(vector<string>& ingredientes, vector<string>& recetas);
        static int abrirReceta(string& recetaValidate);
    };
}

