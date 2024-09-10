#ifndef LOGIN_DIALOG_H
#define LOGIN_DIALOG_H

#include <QDialog>


namespace Ui {
class login_Dialog;  //前向声明
}

class login_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit login_Dialog(QWidget *parent = nullptr);
    ~login_Dialog();


signals:
    void switch_register();

private:
    Ui::login_Dialog *ui;

};

#endif // LOGIN_DIALOG_H
