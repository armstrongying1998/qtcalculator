#include "widget.h"
#include "ui_widget.h"
#include <iostream>
using namespace std;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("计算器1.0");
}

Widget::~Widget()
{
    delete ui;
}
void Widget::on_button_1_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
       ui->textEdit->insertPlainText("1");
}

void Widget::on_button_2_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
       ui->textEdit->insertPlainText("2");
}

void Widget::on_button_3_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
       ui->textEdit->insertPlainText("3");
}

void Widget::on_button_4_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
       ui->textEdit->insertPlainText("4");
}

void Widget::on_button_5_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
       ui->textEdit->insertPlainText("5");
}

void Widget::on_button_6_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
       ui->textEdit->insertPlainText("6");
}

void Widget::on_button_sub_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
       ui->textEdit->insertPlainText("-");
}

void Widget::on_button_7_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
       ui->textEdit->insertPlainText("7");
}

void Widget::on_button_8_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
       ui->textEdit->insertPlainText("8");
}

void Widget::on_button_9_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
       ui->textEdit->insertPlainText("9");
}

void Widget::on_button_mult_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
       ui->textEdit->insertPlainText("*");
}
void Widget::on_button_add_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
       ui->textEdit->insertPlainText("+");
}

void Widget::on_button_clear_clicked()
{
 ui->textEdit->setText("");
}

void Widget::on_button_0_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
       ui->textEdit->insertPlainText("0");
}
void Widget::on_button_div_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
       ui->textEdit->insertPlainText("/");
}

void Widget::on_button_equal_clicked()
{
    ui->textEdit->moveCursor(QTextCursor::End);
       ui->textEdit->insertPlainText("=");
       QString text = ui->textEdit->toPlainText();
       string text1=text.toStdString();
       //cout<<text1<<endl;
       //cout<<text1[1]<<endl;
       int len=text1.size();
       const char * text2=text1.c_str();
       cout<<text2;
       int flag=0;
       num1=0;
       num2=0;
       op=0;
       result=0;
       for(int i=0;i<len;i++){
       if(text2[i]>='0'&&text2[i]<='9'){
       if(flag==0){
           num1=num1*10+text2[i]-'0';
       }
       if(flag==1){
           num2=num2*10+text2[i]-'0';
       }
       }else if(text2[i]=='+'){
           flag=1;
           op=1;
           cout<<"+++"<<endl;
       }
       else if(text2[i]=='-'){
           flag=1;
           op=2;
       }
       else if(text2[i]=='*'){
           flag=1;
           op=3;
       }
       else if(text2[i]=='/'){
           flag=1;
           op=4;
       }
       else if(text2[i]=='='){
           if(op==1){
               result=num1+num2;
               cout<<num1<<endl;
               cout<<num2<<endl;
           }
           if(op==2){
               result=num1-num2;
           }
           if(op==3){
               result=num1*num2;
           }
           if(op==4){
               result=(num1*1.00)/num2;
           }

              ui->textEdit->moveCursor(QTextCursor::End);
              ui->textEdit->insertPlainText(QString::number(result));
       }
       }

}

