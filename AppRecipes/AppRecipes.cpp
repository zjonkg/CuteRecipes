

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <windows.h>   
#include "../SearchRecipes/SearchRecipes.h"
#include "../SearchRecipes/print.h"
#include "../SearchRecipes/Color.h"
#include <locale>
#include <direct.h>

using namespace std;

int main() {

	locale::global(locale("es_US.utf8"));

	vector<string> recetas = {
		"Pasta carbonara:pasta, panceta, huevo, queso parmesano, pimienta",
		"Pizza Margarita:masa de pizza, tomate, mozzarella, albahaca",
		"Sandwich pollo: pollo, pan, lechuga, tomate, mayonesa",
		"Hamburguesa clasica:carne, pan, lechuga, tomate, cebolla, queso, ketchup, mostaza",
		"Pastel zanahoria:zanahoria, harina, azúcar, huevo, aceite vegetal, nueces, queso",
	};



	vector<string> ingredientesBuscados = {};

	cout << yellow << Print::title_blackjack() << def << "\n";

	Sleep(3000);

	system("cls");

	cout << lightBlue << Print::instructions() << def << "\n";
	int option = 0;
	string stopAskingIngredients;

	cin >> option;

	if (option == 1) {

		bool enoughIngredients = true;
		string ingrediente;

		while (enoughIngredients) {
			system("cls");
			cout << lightBlue << Print::insert_recipe() << def << "\n";
			cin >> ingrediente;
			ingredientesBuscados.push_back(ingrediente);

			system("cls");

			cout << lightBlue << Print::keep_asking_for_recipe() << def << "\n";
			cin >> stopAskingIngredients;

			if (!(stopAskingIngredients == "y")) {
				enoughIngredients = false;
			}
		}
	

		system("cls");

		vector<string> recetasEncontradas = SearchRecipe::FoundRecipe::searchRecipe(ingredientesBuscados, recetas);

		if (recetasEncontradas.empty()) {
			cout << "No se encontró la receta con los ingredientes especificados." << endl;
		}
		else {

			cout << green << Print::searched_recipes() << def << "\n";
			if (recetasEncontradas.size() == 1) {
				for (string& receta : recetasEncontradas) {


					int pos = receta.find(":");
					if (pos != string::npos) {
						string recetaValidate = receta.substr(0, pos);

						size_t pos = recetaValidate.find(' ');

						if (pos != string::npos) {
							recetaValidate.erase(pos, 1);
						}
						
						if (SearchRecipe::FoundRecipe::abrirReceta(recetaValidate) != 0) {
							cout << red << Print::show_error() << def << "\n";
						}

					}
				}
			}
			else {
				for (int i = 0; i < recetasEncontradas.size(); ++i) {
					size_t pos = recetasEncontradas[i].find(":");
					if (pos != string::npos) {
						cout << i << ". " << recetasEncontradas[i].substr(0, pos) << endl;
					}
				}

				Sleep(1000);
				int selectOption = -1;
				cout << lightBlue << Print::select_recipe() << def << "\n";
				cin >> selectOption;
				if (selectOption >= 0 && selectOption <= (recetasEncontradas.size()-1)) {
					
					size_t pos = recetasEncontradas[selectOption].find(":");
					if (pos != string::npos) {
						pos = recetasEncontradas[selectOption].find(":");
						string recetaValidate = recetasEncontradas[selectOption].substr(0, pos);

						pos = recetaValidate.find(' ');

						if (pos != string::npos) {
							recetaValidate.erase(pos, 1);
						}

						if (SearchRecipe::FoundRecipe::abrirReceta(recetaValidate) != 0) {
							cout << red << Print::show_error() << def << "\n";
						}
					}
				}
				else {
					cout << red << Print::show_error() << def << "\n";
				}

			}

			


		}
	}
	else
	{
		cout << red << Print::show_error() << def << "\n";
	}
}
