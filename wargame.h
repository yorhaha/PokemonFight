#ifndef WARGAME_H
#define WARGAME_H

#include "gamemodel.h"
#include "nextlevel.h"
#include <QMainWindow>
#include <QMessageBox>
#include <QCloseEvent>
#include <QDesktopWidget>
#include <QStackedWidget>
#include <QGraphicsView>

namespace Ui {
class WarGame;
}

class WarGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit WarGame(QWidget *parent = nullptr);
    void closeEvent(QCloseEvent *event);
    ~WarGame();
    void initUi();
    void initCityStage();
    void initBridgeStage();
    void initForestStage();
    void initGrassStage();
    void initIceStage();
    void initSnowStage();
public slots:
    void win_stage();
    void defeat_stage();
    void restart_stage();
    void next_stage();
    void pause_stage();
    void resume_stage();
    void quit_to_main();

private slots:
    void on_startButton_clicked();
    void on_helpButton_clicked();


private:
    Ui::WarGame *ui;
    GameModel* stage;
    NextLevel* next;
    int current_stage;
};

#endif // WARGAME_H
