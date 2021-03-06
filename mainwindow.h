#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsPathItem>

namespace Ui {
class MainWindow;
}

class SceneWidget;
class GraphNodeScene;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    bool eventFilter(QObject *watched, QEvent *event);

    ~MainWindow();

private:
    Ui::MainWindow *ui;
    GraphNodeScene* scene;
    SceneWidget* sceneWidget;
};
#endif // MAINWINDOW_H
