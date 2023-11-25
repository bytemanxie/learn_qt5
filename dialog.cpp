#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_countBtn_clicked()
{
    //计算圆的面积
    QString rStr = ui->radiusLineEdit->text();
    double area = rStr.toDouble() * rStr.toDouble() * 3.14;
    ui->area_l2->setText(QString::number(area));
}

void Dialog::on_radiusLineEdit_textChanged(const QString &arg1)
{
    //计算圆的面积
    QString rStr = ui->radiusLineEdit->text();
    double area = rStr.toDouble() * rStr.toDouble() * 3.14;
    ui->area_l2->setText(QString::number(area));
    
}
