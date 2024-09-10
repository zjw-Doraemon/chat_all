#ifndef RESGISTER_DIALOG_H
#define RESGISTER_DIALOG_H

#include <QDialog>

namespace Ui {
class resgister_Dialog;
}

class resgister_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit resgister_Dialog(QWidget *parent = nullptr);
    ~resgister_Dialog();

private:
    Ui::resgister_Dialog *ui;
};

#endif // RESGISTER_DIALOG_H
