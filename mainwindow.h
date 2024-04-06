#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ButtonItem.h"
#include <vector>
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPixmap>
#include <QPushButton>
#include <QLabel>

class MainWindow : public QMainWindow {
    Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);

    private slots:
        void update_frame(); // 畫面更新

        void on_start_button_clicked();

    private:
        int game_status; // 0:開始畫面, 1:遊戲中, 2:結束畫面

        void start_init();
        void game_init();
        //void end_init();

        QGraphicsView *view = new QGraphicsView;

        QGraphicsScene *cur_scene;
        QGraphicsScene start_scene, game_scene, end_scene;

        QPixmap start_bg;
        QGraphicsPixmapItem *start_bg_item;
        QPushButton *start_button = new QPushButton;
        QPixmap start_button_pic;
        ButtonItem *start_button_item;

        QPixmap game_bg;
        QGraphicsPixmapItem *game_bg_item;
        QPixmap floor_brick;
        std::vector<QGraphicsPixmapItem*> floor_brick_items;

        QPixmap Mario_pic;
        QGraphicsItem *Mario;

        QTimer *refreshing_timer;

        //void game_frame();

};
#endif // MAINWINDOW_H
