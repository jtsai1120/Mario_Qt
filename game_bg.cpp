#include "game_bg.h"

Game_bg::Game_bg() {
    game_bg.load(":/Dataset/image/background.png");
    game_bg = game_bg.scaled(1400, 618, Qt::IgnoreAspectRatio);
    game_bg_item = new QGraphicsPixmapItem(game_bg);
}
