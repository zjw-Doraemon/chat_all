#ifndef TEST_DIALOG_H
#define TEST_DIALOG_H

#include <QDialog>
#include "ui_test_dialog.h"
namespace Ui {
class test_Dialog;
}

class test_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit test_Dialog(QWidget *parent = nullptr);
    ~test_Dialog();

private:
    Ui::test_Dialog *ui;
};

#endif // TEST_DIALOG_H
