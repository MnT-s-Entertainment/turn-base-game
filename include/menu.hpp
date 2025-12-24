<<<<<<< HEAD
#pragma once

#include <raylib.h>

enum class MenuState {MENU=0, PLAY = 1, GAME_OVER = 2, EXIT = 3};
extern int menuStateSelected;

=======
#pragma once

#include <raylib.h>

enum class MenuState {MENU=0, PLAY = 1, GAME_OVER = 2, EXIT = 3};
extern int menuStateSelected;

>>>>>>> 5ab3ec13addabef1b7f4a7d08eb02b2832e01ec6
void menus(Texture2D hiro,Texture2D background, Texture2D grass, Texture2D stone_1, Texture2D stone_2, Texture2D bush_1, Texture2D bush_2, Texture2D bush_3);