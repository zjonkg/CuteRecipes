#pragma once
#ifndef PRINT_HPP
#define PRINT_HPP

#include <string>

struct Print {

    static std::string title_blackjack();
    static std::string instructions();
    static std::string insert_recipe();
    static std::string keep_asking_for_recipe();
    static std::string searched_recipes();
    static std::string select_recipe();
    static std::string show_error();

};

#endif