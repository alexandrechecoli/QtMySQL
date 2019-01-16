#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_db_test = QSqlDatabase::addDatabase("QMYSQL");
    m_db_test.setPort(3306);
    m_db_test.setHostName("127.0.0.1");
    m_db_test.setUserName("root");
    m_db_test.setPassword("alexandrechecoli");
    m_db_test.setDatabaseName("teste");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_data_base_conn_clicked()
{
        m_db_test.open();
        if(m_db_test.isOpen())
        {
            QMessageBox::warning(this, "Connection accepted", "Connection done");
        }else
        {
            QMessageBox::warning(this, "Connection not accepted", m_db_test.lastError().text());
        }
        m_db_test.close();
}


