#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtNetwork/QtNetwork>
#include <QMainWindow>
#include <QTcpSocket>
#include "chatserver.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_startStopButton_clicked();

private slots:
    void logMessage(const QString &msg);

private:
    Ui::MainWindow *ui;

    ChatServer *m_chatServer;


};
#endif // MAINWINDOW_H
