#include "print.h"
#include <iostream>
#include <sstream>

std::string Print::title_blackjack() {
	constexpr auto title_blackjack = R"(
                        $$$$$$$\  $$$$$$$$\  $$$$$$\  $$$$$$\ $$$$$$$\  $$$$$$$$\  $$$$$$\  
                        $$  __$$\ $$  _____|$$  __$$\ \_$$  _|$$  __$$\ $$  _____|$$  __$$\ 
                        $$ |  $$ |$$ |      $$ /  \__|  $$ |  $$ |  $$ |$$ |      $$ /  \__|
                        $$$$$$$  |$$$$$\    $$ |        $$ |  $$$$$$$  |$$$$$\    \$$$$$$\  
                        $$  __$$< $$  __|   $$ |        $$ |  $$  ____/ $$  __|    \____$$\ 
                        $$ |  $$ |$$ |      $$ |  $$\   $$ |  $$ |      $$ |      $$\   $$ |
                        $$ |  $$ |$$$$$$$$\ \$$$$$$  |$$$$$$\ $$ |      $$$$$$$$\ \$$$$$$  |
                        \__|  \__|\________| \______/ \______|\__|      \________| \______/
    )";

	std::ostringstream toReturn;
	toReturn << title_blackjack;
	return toReturn.str();
}

std::string Print::instructions() {
	constexpr auto instructions = R"(
                .-"-._,-'_`-._,-'_`-._,-'_`-._,-'_`-,_,-'_`-,_,-'_`-,_,-'_`-,_,-'_`-,_,-'_`-,.
                (  ,-'_,-<.>-'_,-<.>-'_,-<.>-'_,-<.>-'_,-<.>-'_,-<.>-'_,-<.>-'_,-<.>-'_,-~-} ;.
                \ \.'_>-._`-<_>-._`-<_>-._`-<_>-._`-<_>-._`-<_>-._`-<_>-._`-<_>-._`-._~--. \ .
                /\ \/ ,-' `-._,-' `-._,-' `-._,-' `-._,-' `-._,-' `-._,-' `-._,-' `-._`./ \ \ .
                ( (`/ /                                                              `/ /.) ) .
                \ \ / \      _     _                                                  \ \ / \ 
                \ \') )     | |   | |               _                                  / / \ / 
                \ \ / \     | |__ | | ___  _ _ _   | |_  ___     _   _  ___  ____      ( (,\ \ .
                \ \ / \     |  __)| |/ _ \| | | |  |  _)/ _ \   | | | |/___)/ _  )     ( (,\ \ 
                ( (`/ /     | |   | | |_| | | | |  | |_| |_| |  | |_| |___ ( (/ /      \ / \ \ .
                / / \ /     |_|   |_|\___/ \____|   \___)___/    \____(___/ \____)    / / \ / .
                \ \') )                                                               ( (,\ \ .
                / \ / /                                                               \ / \ \ .
                \ \') )                                                               ( (,\ \ . 
                / \ / /  1. You must write the ingredients you have now, be careful    \ / \ \ . 
                ( (`/ /     in writing the name properly in other way the program     / /.) ) . 
                \ \ / \     should not work right                                     / / \ / . 
                \ \') )                                                               \ / \ \ .
                \ \') )  2. The program will displayed the recipes that you can make  ( (,\ \ . 
                / \ / /                                                               \ / \ \ .
                ( ( / /  3. There will be some recipes options, you should pick one    / /.) ) .
                \ \ / \     by writing the name of the recipe                         / / \ /. 
                \ \') )                                                               ( (,\ \ . 
                / \ / /  4. The program will open the recipe throught a pdf          \ / \ \ .
                ( ( / /                                                                / /.) ) . 
                \ \ / \  5. FOLLOW THE INSTRUCTIONS OF THE RECIPE                     / / \ / .
                \ \') )                                                               ( (,\ \ . 
                / \ / /  6. IF YOU'VE DONE IT RIGHT                                   \ / \ \ .
                ( ( / /     THAT WILL BE THE BEST FOOD YOU'VE EVER HAD                \ / \ \ .
                ( ( / /                                                                / /.) ) .
                \ \ / \       _       _       (Press 1 to continue)        _       _   / / \ /.
                \ `.\ `-._,-'_`-._,-'_`-._,-'_`-._,-'_`-._,-'_`-._,-'_`-._-'_`-._,-'_/,\ \ . 
                ( `. `,~-._`-<,>-._`-<,>-._`-<,>-._`-<,>-._`-<,>-._`-<,>-._`-<,>-._`-=,' ,\ \ .
                `. `'_,-<_>-'_,-<_>-'_,-<_>-'_,-<_>-'_,-<_>-'_,-<_>-'_,-<_>-'_,-<_>-'_,"-' ; .
                    `-' `-._,-' `-._,-' `-._,-' `-._,-' `-._,-' `-._,-' `-._,-' `-._,-' `-.-' .
    )";

	std::ostringstream toReturn;
	toReturn << instructions;
	return toReturn.str();
}

std::string Print::insert_recipe() {
	constexpr auto insert_recipe = R"(

  ___      _     _   _                          _ _            _       
 / _ \    | |   | | (_)                        | (_)          | |      
/ /_\ \ __| | __| |  _ _ __   __ _ _ __ ___  __| |_  ___ _ __ | |_ ___ 
|  _  |/ _` |/ _` | | | '_ \ / _` | '__/ _ \/ _` | |/ _ \ '_ \| __/ __|
| | | | (_| | (_| | | | | | | (_| | | |  __/ (_| | |  __/ | | | |_\__ \
\_| |_/\__,_|\__,_| |_|_| |_|\__, |_|  \___|\__,_|_|\___|_| |_|\__|___/
                              __/ |                                    
                             |___/
                     
    )";

	std::ostringstream toReturn;
	toReturn << insert_recipe;
	return toReturn.str();
}

std::string Print::keep_asking_for_recipe() {
	constexpr auto keep_asking_for_recipe = R"(

  ___      _     _                              _                          _ _            _      ___  
 / _ \    | |   | |                            (_)                        | (_)          | |    |__ \ 
/ /_\ \ __| | __| |  _ __ ___   ___  _ __ ___   _ _ __   __ _ _ __ ___  __| |_  ___ _ __ | |_ ___  ) |
|  _  |/ _` |/ _` | | '_ ` _ \ / _ \| '__/ _ \ | | '_ \ / _` | '__/ _ \/ _` | |/ _ \ '_ \| __/ __|/ / 
| | | | (_| | (_| | | | | | | | (_) | | |  __/ | | | | | (_| | | |  __/ (_| | |  __/ | | | |_\__ \_|  
\_| |_/\__,_|\__,_| |_| |_| |_|\___/|_|  \___| |_|_| |_|\__, |_|  \___|\__,_|_|\___|_| |_|\__|___(_)  
                                                         __/ |                                        
                                                        |___/

                                       (Press y if you want) 
    )";

	std::ostringstream toReturn;
	toReturn << keep_asking_for_recipe;
	return toReturn.str();
}

std::string Print::searched_recipes() {
    constexpr auto searched_recipes = R"(

 _____                     _              _  ______          _                 
/  ___|                   | |            | | | ___ \        (_)                
\ `--.  ___  __ _ _ __ ___| |__   ___  __| | | |_/ /___  ___ _ _ __   ___  ___ 
 `--. \/ _ \/ _` | '__/ __| '_ \ / _ \/ _` | |    // _ \/ __| | '_ \ / _ \/ __|
/\__/ /  __/ (_| | | | (__| | | |  __/ (_| | | |\ \  __/ (__| | |_) |  __/\__ \
\____/ \___|\__,_|_|  \___|_| |_|\___|\__,_| \_| \_\___|\___|_| .__/ \___||___/
                                                              | |              
                                                              |_|
    )";

    std::ostringstream toReturn;
    toReturn << searched_recipes;
    return toReturn.str();
}

std::string Print::select_recipe() {
    constexpr auto select_recipe = R"(
 _____      _           _                   _            
/  ___|    | |         | |                 (_)           
\ `--.  ___| | ___  ___| |_   _ __ ___  ___ _ _ __   ___ 
 `--. \/ _ \ |/ _ \/ __| __| | '__/ _ \/ __| | '_ \ / _ \
/\__/ /  __/ |  __/ (__| |_  | | |  __/ (__| | |_) |  __/
\____/ \___|_|\___|\___|\__| |_|  \___|\___|_| .__/ \___|
                                             | |         
                                             |_|
    )";

    std::ostringstream toReturn;
    toReturn << select_recipe;
    return toReturn.str();
}
std::string Print::show_error() {
    constexpr auto show_error = R"(
      (    (        )   (     
      )\ ) )\ )  ( /(   )\ )  
 (   (()/((()/(  )\()) (()/(  
 )\   /(_))/(_))((_)\   /(_)) 
((_) (_)) (_))    ((_) (_))   
| __|| _ \| _ \  / _ \ | _ \  
| _| |   /|   / | (_) ||   /  
|___||_|_\|_|_\  \___/ |_|_\
    )";

    std::ostringstream toReturn;
    toReturn << show_error;
    return toReturn.str();
}

