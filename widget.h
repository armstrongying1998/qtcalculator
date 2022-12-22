#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    int num1;
    int num2;
    double result;
    int op;
private slots:
    void on_button_1_clicked();

    void on_button_2_clicked();

    void on_button_3_clicked();

    void on_button_add_clicked();

    void on_button_4_clicked();

    void on_button_5_clicked();

    void on_button_6_clicked();

    void on_button_sub_clicked();

    void on_button_7_clicked();

    void on_button_8_clicked();

    void on_button_9_clicked();

    void on_button_mult_clicked();

    void on_button_clear_clicked();

    void on_button_0_clicked();

    void on_button_equal_clicked();

    void on_button_div_clicked();
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
