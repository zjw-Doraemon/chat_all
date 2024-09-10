#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDialog"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , _login_dig(new login_Dialog)
    , _reg_dig(new register_Dialog)
    , _test(new test)


{
    ui->setupUi(this);
    setCentralWidget(_login_dig);

    //链接注册界面的信号与槽

    //信号连接信号视频做法
    connect(_login_dig,&login_Dialog::switch_register,this,&MainWindow::slot_switch_reg);
    _test->show();


}

MainWindow::~MainWindow()
{
    delete ui;
    if(_login_dig){
        delete _login_dig;
        _login_dig = nullptr;
    }
    if(_reg_dig){
        delete _reg_dig;
        _reg_dig = nullptr;
    }
}
void MainWindow::slot_switch_reg(){
    setCentralWidget(_reg_dig);

}
