#include <iostream>
#include <vector>
#include <string>
#include "SearchRecipes.h"
#include <direct.h>

using namespace std;

namespace SearchRecipe
{
    vector<string> FoundRecipe::searchRecipe(vector<string>& ingredients, vector<string>& recipes) {
        vector<string> foundedRecipes;

        for (string& recipe : recipes) {
            bool allIngredientsFound = true;
            for (string& ingredient : ingredients) {
                if (recipe.find(ingredient) == string::npos) {
                    allIngredientsFound = false;
                    break; 
                }
            }
            if (allIngredientsFound) {
                foundedRecipes.push_back(recipe);
            }
        }
        return foundedRecipes;
    }

    int FoundRecipe::abrirReceta(string& recetaValidate) {
        char buffer[_MAX_PATH]; // Cambio FILENAME_MAX por _MAX_PATH
        if (_getcwd(buffer, _MAX_PATH) != NULL) {
            string directorioActual(buffer);
            string ruta = directorioActual + "\\Recetas\\" + recetaValidate + ".pdf";
            string comando = "start " + ruta;

            system(comando.c_str());
            return 0; // Éxito
        }
        else {
            cerr << "Error al obtener el directorio actual." << endl;
            return 1; // Error
        }
    }



    
}
