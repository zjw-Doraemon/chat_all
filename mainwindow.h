#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <login_dialog.h>
#include <register_dialog.h>
#include <test.h>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow; //前向声明
                /*前向声明: 前向声明（如 class MainWindow;）是在不包含完整类定义的情况下声明类的存在。
                 * 这在头文件中很常见，用于避免头文件之间的循环依赖和减少编译时间。
                 * 前向声明告诉编译器有一个名为 MainWindow 的类，但不需要知道它的完整定义。*/
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void slot_switch_reg();

private:
    Ui::MainWindow *ui;
    login_Dialog* _login_dig;
    register_Dialog*  _reg_dig;
    test* _test;


};
#endif // MAINWINDOW_H
