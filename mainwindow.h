#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

    void calculation();
    void calculation2();
    void calculation3();
    void calculation4();
    void calculation5();

private slots:

    void on_pb_page_clicked();

    void on_pb_page_2_clicked();

    // void on_le_percent_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
