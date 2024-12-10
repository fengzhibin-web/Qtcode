#include "loginview.h"
#include "ui_loginview.h"
#include "idatabase.h"

LoginView::LoginView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginView)
{
    ui->setupUi(this);
}

LoginView::~LoginView()
{
    delete ui;
}

void LoginView::on_btSignin_clicked()
{
    QString status = IDatabase::getInstance().userLogin(ui->inputUserName->text(),
                     ui->inputUserPassord->text());
    if (status == "loginOK")
        emit loginSuccess();
}

