#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "soapCalculatorSoapProxy.h"
#include "CalculatorSoap.nsmap"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
      , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("WebSoapCalculate");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pButtonAdd_clicked()
{
    CalculatorSoapProxy client;
    _tempuri__Add  elem;
    _tempuri__AddResponse res;

    QString strFirstValue = ui->lEFirstValue->text();
    QString strSecondValue = ui->lESecondValue->text();

    elem.intA = strFirstValue.toInt();
    elem.intB = strSecondValue.toInt();

    if (client.Add("http://localhost/cgi-bin/calcserver++","",&elem, res) == SOAP_OK){
        qDebug() << "The sum of: " << strFirstValue
                 <<" and "<< strSecondValue
                 << " is: "<< QString::number(res.AddResult) << endl;
        ui->lEResult->setText(QString::number(res.AddResult));
    }else
        client.soap_stream_fault(std::cerr);
    client.destroy(); // dealloc serialization and temp data
}

void MainWindow::on_pButtonSub_clicked()
{
    CalculatorSoapProxy client;
    _tempuri__Subtract  elem;
    _tempuri__SubtractResponse res;

    QString strFirstValue = ui->lEFirstValue->text();
    QString strSecondValue = ui->lESecondValue->text();

    elem.intA = strFirstValue.toInt();
    elem.intB = strSecondValue.toInt();

    if (client.Subtract("http://localhost/cgi-bin/calcserver++","",&elem, res) == SOAP_OK){
        qDebug() << "The sum of: " << strFirstValue
                 <<" and "<< strSecondValue
                 << " is: "<< QString::number(res.SubtractResult) << endl;
        ui->lEResult->setText(QString::number(res.SubtractResult));
    }else
        client.soap_stream_fault(std::cerr);
    client.destroy(); // dealloc serialization and temp data
}

void MainWindow::on_pButtonMul_clicked()
{
    CalculatorSoapProxy client;
    _tempuri__Multiply  elem;
    _tempuri__MultiplyResponse res;

    QString strFirstValue = ui->lEFirstValue->text();
    QString strSecondValue = ui->lESecondValue->text();

    elem.intA = strFirstValue.toInt();
    elem.intB = strSecondValue.toInt();

    if (client.Multiply("http://localhost/cgi-bin/calcserver++","",&elem, res) == SOAP_OK){
        qDebug() << "The sum of: " << strFirstValue
                 <<" and "<< strSecondValue
                 << " is: "<< QString::number(res.MultiplyResult) << endl;
        ui->lEResult->setText(QString::number(res.MultiplyResult));
    }else
        client.soap_stream_fault(std::cerr);
    client.destroy(); // dealloc serialization and temp data
}

void MainWindow::on_pButtonDiv_clicked()
{
    CalculatorSoapProxy client;
    _tempuri__Divide  elem;
    _tempuri__DivideResponse res;

    QString strFirstValue = ui->lEFirstValue->text();
    QString strSecondValue = ui->lESecondValue->text();

    elem.intA = strFirstValue.toInt();
    elem.intB = strSecondValue.toInt();

    if (client.Divide("http://localhost/cgi-bin/calcserver++","",&elem, res) == SOAP_OK){
        qDebug() << "The sum of: " << strFirstValue
                 <<" and "<< strSecondValue
                 << " is: "<< QString::number(res.DivideResult) << endl;
        ui->lEResult->setText(QString::number(res.DivideResult));
    }else
        client.soap_stream_fault(std::cerr);
    client.destroy(); // dealloc serialization and temp data
}
