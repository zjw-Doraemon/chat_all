#include "resgister_dialog.h"
#include "ui_resgister_dialog.h"

resgister_Dialog::resgister_Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::resgister_Dialog)
{
    ui->setupUi(this);
}

resgister_Dialog::~resgister_Dialog()
{
    delete ui;
}
