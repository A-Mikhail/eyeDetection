#include "popupwindow.h"
#include "ui_popupwindow.h"

#include "stdafx.h"

popupWindow::popupWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popupWindow)
{
    ui->setupUi(this);
}

popupWindow::~popupWindow()
{
    delete ui;
}

void popupWindow::on_pushButton_clicked()
{
    QString profileName = ui->lineEdit->text();

    // Создание файла user.dat с добавлением текста из lineEdit
    QFile file("user.dat");
    file.open(QIODevice::WriteOnly);
    QDataStream out(&file);
    out << QString(profileName);

    this->close();
}
