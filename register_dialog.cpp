#include "register_dialog.h"
#include "ui_register_dialog.h"

register_Dialog::register_Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::register_Dialog)
{
    ui->setupUi(this);
}

register_Dialog::~register_Dialog()
{
    delete ui;
}
