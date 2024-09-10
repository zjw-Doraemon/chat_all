#include "login_dialog.h"
#include "ui_login_dialog.h"

login_Dialog::login_Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::login_Dialog)


{
    ui->setupUi(this);
    connect(ui->reg_but,&QPushButton::clicked,this,&login_Dialog::switch_register);

}

login_Dialog::~login_Dialog()
{
    delete ui;
}

