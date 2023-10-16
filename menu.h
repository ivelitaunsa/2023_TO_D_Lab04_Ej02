#ifndef MENU_H
#define MENU_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class menu; }
QT_END_NAMESPACE

class menu : public QMainWindow
{
    Q_OBJECT

public:
    menu(QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_ariesButton_clicked();

    void on_tauroButton_clicked();

    void on_geminisButton_clicked();

    void on_cancerButton_clicked();

    void on_leoButton_clicked();

    void on_virgoButton_clicked();

    void on_libraButton_clicked();

    void on_escorpionButton_clicked();

    void on_sagitarioButton_clicked();

    void on_capricornioButton_clicked();

    void on_acuarioButton_clicked();

    void on_piscisButton_clicked();

private:
    Ui::menu *ui;
};
#endif // MENU_H
