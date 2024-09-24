#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(pushButton_close, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::close));
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clean_clicked()
{
    ui->plainTextEdit->clear();
}


void Dialog::on_checkBox_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setUnderline(checked);
    ui->plainTextEdit->setFont(font);
}


void Dialog::on_checkBox_2_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setItalic(checked);
    ui->plainTextEdit->setFont(font);
}


void Dialog::on_checkBox_3_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setBold(checked);
    ui->plainTextEdit->setFont(font);
}

void Dialog::do_FontColors()
{
    QPalette plet = ui->plainTextEdit->palette();
    if (ui->radioButton_black->isChecked())
        plet.setColor(QPalette::Text, Qt::black);
    if (ui->radioButton_blue->isChecked())
        plet.setColor(QPalette::Text, Qt::blue);
    if (ui->radioButton_red->isChecked())
        plet.setColor(QPalette::Text, Qt::red);

    ui->plainTextEdit->setPalette(plet);
}

