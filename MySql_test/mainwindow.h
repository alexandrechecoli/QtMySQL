#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlError>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_data_base_conn_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase m_db_test;
};

#endif // MAINWINDOW_H
