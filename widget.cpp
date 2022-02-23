#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QString>
#include <cmath>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}
//NO PARENTHESIS, NO CE/C SWITCH (JUST CLEAR ALL)


void Widget::on_pPushButton_clicked() //function for addition
{
    setEndOfString(1);
    QString mathOperator;
    mathOperator = "+";
    setOperator(mathOperator);
}

void Widget::on_sPushButton_clicked()
{
    setEndOfString(1);
    QString mathOperator;
    mathOperator = "-";
    setOperator(mathOperator);
}


void Widget::on_tPushButton_clicked()
{
    setEndOfString(1);
    QString mathOperator;
    mathOperator = "*";
    setOperator(mathOperator);
}

void Widget::on_dPushButton_clicked() //function for divide
{
    setEndOfString(1);
    QString mathOperator;
    mathOperator = "/";
    setOperator(mathOperator);
}


void Widget::on_pushButtonPi_clicked() //function for PI
{

        if(getEndOfString() == 0)
        {
            setOP1("3.141592653");
            ui->lineEdit->setText(getOP1());

        }
        else if(getEndOfString() == 1)
        {
            setOP2("3.141592653");
            ui->lineEdit->setText(getOP1() + " " + getOperator() + " " + getOP2());

        }
}


void Widget::on_pushButtonE_clicked() //this is the function for the letter "e"
{
        if(getEndOfString() == 0)
        {
            setOP1("2.71828");
            ui->lineEdit->setText(getOP1());

        }
        else if(getEndOfString() == 1)
        {
            setOP2("2.71828");
             ui->lineEdit->setText(getOP1() + " " + getOperator() + " " + getOP2());

        }
}


void Widget::on_pushButtonCE_clicked() //function for clearing current entry
{
    resetOP1("");
    resetOP2("");
    ui->lineEdit->setText("");
    setEndOfString(0);
    ui->lineEdit->setFocus();

}


void Widget::on_pushButtonDelete_clicked() //function for Delete
{
    ui->lineEdit->backspace();
}


void Widget::on_pushButtonSquared_clicked() //function for squaring a number
{
   setEndOfString(1);
   QString mathOperator;
   mathOperator = "sq";
   setOperator(mathOperator);
}


void Widget::on_pushButtonDivideX_clicked() //function for dividing 1 by the currently numerical input
{
    setEndOfString(1);
    QString mathOperator;
    mathOperator = "divX";
    setOperator(mathOperator);
}


void Widget::on_pushButtonAbsVal_clicked() //function for the absolute value of an integer
{
    setEndOfString(1);
    QString mathOperator;
    mathOperator = "absv";
    setOperator(mathOperator);
}


void Widget::on_pushButtonExp_clicked() //function for the "exp" button (exponential function)
{
    setEndOfString(1);
    QString mathOperator;
    mathOperator = "exp";
    setOperator(mathOperator);
}


void Widget::on_pushButtonMod_clicked() //function for the modulo button
{
    setEndOfString(1);
    QString mathOperator;
    mathOperator = "%";
    setOperator(mathOperator);
}


void Widget::on_pushButtonSqrt_clicked() //function for the square root button
{
    setEndOfString(1);
    QString mathOperator;
    mathOperator = "sqrt";
    setOperator(mathOperator);
}


void Widget::on_pushButtonBaseExp_clicked() //function for raising a number to another number power
{
    setEndOfString(1);
    QString mathOperator;
    mathOperator = "baseExp";
    setOperator(mathOperator);
}


void Widget::on_pushButtonTenToX_clicked() //function for raising 10 to an input exponent
{
    setEndOfString(1);
    QString mathOperator;
    mathOperator = "10^x";
    setOperator(mathOperator);
}


void Widget::on_pushButtonLog_clicked() //function for base 10 logarithm
{
    setEndOfString(1);
    QString mathOperator;
    mathOperator = "log";
    setOperator(mathOperator);
}


void Widget::on_pushButtonLn_clicked() //function for a base e log
{
    setEndOfString(1);
    QString mathOperator;
    mathOperator = "ln";
    setOperator(mathOperator);
}


void Widget::on_pushButtonLparenth_clicked() //function for the left parenthesis
{
    if(getEndOfString() == 0)
    {
        setOP1("(");

        ui->lineEdit->setText(getOP1());

    }
    else if(getEndOfString() == 1)
    {
        setOP2("(");

         ui->lineEdit->setText(getOP1() + " " + getOperator() + " " + getOP2());

    }
}


void Widget::on_pushButtonRparenth_clicked()//function for the right parenthesis
{
    if(getEndOfString() == 0)
    {
        setOP1(")");

        ui->lineEdit->setText(getOP1());

    }
    else if(getEndOfString() == 1)
    {
        setOP2(")");

         ui->lineEdit->setText(getOP1() + " " + getOperator() + " " + getOP2());

    }
}


void Widget::on_pushButtonFactorial_clicked() //function for factorial
{
    setEndOfString(1);
    QString mathOperator;
    mathOperator = "!";
    setOperator(mathOperator);
}


void Widget::on_pushButtonSign_clicked() //function for sign switch

{
    ui->lineEdit->setText(" ");

    if(getEndOfString() == 0)

    {
        QString tempString = getOP1();
        resetOP1("");
        double opDouble = tempString.toDouble();
        opDouble *= -1;
        tempString=QString::number(opDouble);
        setOP1(tempString);
        ui->lineEdit->setText(tempString);
    }
    else if(getEndOfString() == 1)
    {
        QString tempString2 = getOP2();
        resetOP2("");
        double opDouble2 = tempString2.toDouble();
        opDouble2 *= -1;
                tempString2=QString::number(opDouble2);
        setOP2(tempString2);
                ui->lineEdit->setText(tempString2);
    }
    setEndOfString(1);
}

void Widget::on_pushButtonDecimal_clicked() //function for decimal
{
    if(getEndOfString() == 0)
    {
        setOP1(".");
        ui->lineEdit->setText(getOP1());

    }
    else if(getEndOfString() == 1)
    {
        setOP2(".");
         ui->lineEdit->setText(getOP1() + " " + getOperator() + " " + getOP2());

    }
}


void Widget::on_pushButton1_clicked()
{
    if(getEndOfString() == 0)
    {
        setOP1("1");

        ui->lineEdit->setText(getOP1());

    }
    else if(getEndOfString() == 1)
    {
        setOP2("1");

         ui->lineEdit->setText(getOP1() + " " + getOperator() + " " + getOP2());

    }
}


void Widget::on_pushButton2_clicked()
{
    if(getEndOfString() == 0)
    {
        setOP1("2");

        ui->lineEdit->setText(getOP1());

    }
    else if(getEndOfString() == 1)
    {
        setOP2("2");

         ui->lineEdit->setText(getOP1() + " " + getOperator() + " " + getOP2());

    }
}


void Widget::on_pushButton3_clicked()
{
    if(getEndOfString() == 0)
    {
        setOP1("3");

        ui->lineEdit->setText(getOP1());

    }
    else if(getEndOfString() == 1)
    {
        setOP2("3");

         ui->lineEdit->setText(getOP1() + " " + getOperator() + " " + getOP2());

    }
}


void Widget::on_pushButton4_clicked()
{
    if(getEndOfString() == 0)
    {
        setOP1("4");

        ui->lineEdit->setText(getOP1());

    }
    else if(getEndOfString() == 1)
    {
        setOP2("4");

         ui->lineEdit->setText(getOP1() + " " + getOperator() + " " + getOP2());

    }
}


void Widget::on_pushButton5_clicked()
{
    if(getEndOfString() == 0)
    {
        setOP1("5");

        ui->lineEdit->setText(getOP1());

    }
    else if(getEndOfString() == 1)
    {
        setOP2("5");

         ui->lineEdit->setText(getOP1() + " " + getOperator() + " " + getOP2());

    }
}


void Widget::on_pushButton6_clicked()
{
    if(getEndOfString() == 0)
    {
        setOP1("6");

        ui->lineEdit->setText(getOP1());

    }
    else if(getEndOfString() == 1)
    {
        setOP2("6");

         ui->lineEdit->setText(getOP1() + " " + getOperator() + " " + getOP2());

    }
}


void Widget::on_pushButton7_clicked()
{
    if(getEndOfString() == 0) //DOES SETOP1 NEED TO BE A STACK TO PUSH NUMBERS ONTO?
    {
        setOP1("7");

        ui->lineEdit->setText(getOP1());

    }
    else if(getEndOfString() == 1)
    {
        setOP2("7");

         ui->lineEdit->setText(getOP1() + " " + getOperator() + " " + getOP2());

    }
}


void Widget::on_pushButton8_clicked()
{
    if(getEndOfString() == 0)
    {
        setOP1("8");
        ui->lineEdit->setText(getOP1());

    }
    else if(getEndOfString() == 1)
    {
        setOP2("8");
         ui->lineEdit->setText(getOP1() + " " + getOperator() + " " + getOP2());
    }
}


void Widget::on_pushButton9_clicked()
{
    if(getEndOfString() == 0)
    {
        setOP1("9");
        ui->lineEdit->setText(getOP1());

    }
    else if(getEndOfString() == 1)
    {
        setOP2("9");
         ui->lineEdit->setText(getOP1() + " " + getOperator() + " " + getOP2());

    }
}

void Widget::on_pushButton0_clicked() //function for 0
{
        if(getEndOfString() == 0)
        {
            setOP1("0");
            ui->lineEdit->setText(getOP1());

        }
        else if(getEndOfString() == 1)
        {
            setOP2("0");
             ui->lineEdit->setText(getOP1() + " " + getOperator() + " " + getOP2());

        }
}

void Widget::on_ePushButton_clicked()
{
    QString mathOp = "", fResult = "", nm="", op1="", op2="";
    double result=0, dOp1=0, dOp2=0;
   // stack <double> op1;
    op1 = getOP1();
    op2 = getOP2();
    dOp1 = op1.toDouble();
    dOp2 = op2.toDouble();
//OPERATIONS DECLARATIONS
    mathOp = getOperator();

    if(mathOp == "+")
    {result = dOp1+ dOp2;}
    else if(mathOp == "-")
    {result = dOp1 - dOp2;}
    else if(mathOp == "*")
    {result = dOp1 * dOp2;}
    else if(mathOp == "/")
    {result = dOp1 / dOp2;}
    else if(mathOp == "%")
    {result = fmod(dOp1, dOp2);}
    else if(mathOp =="!")
    {
        double factorial = 1.0;
        for(int i = 1; i <= dOp1; ++i)
        {factorial *= i;}
        result = factorial;
    }
    else if(mathOp =="ln")
    {result = log(dOp1);}
    else if(mathOp =="log")
    {result = log10(dOp1);}
    else if(mathOp =="10^x")
    {result = pow(10, dOp1);}
    else if(mathOp =="baseExp")
    {result = pow(dOp1, dOp2);}
    else if(mathOp == "sqrt")
    {result = sqrt(dOp1);}
    else if(mathOp == "exp")
    {   double power = pow(10, dOp2);
        result = dOp1 * power;}
    else if(mathOp == "absv")
    {result = abs(dOp1);}
    else if(mathOp == "divX")
    { if (dOp1 <= 0)
        {
            qDebug() << "Cannot divide by 0 " << ui->lineEdit->text();
        }
        else
        result = 1 / dOp1;}
    else if(mathOp == "sq")
    {result = dOp1 * dOp1;}

    fResult = QString::number(result); //converts double to QString
    ui->lineEdit->setText(getOP1() + " " + getOperator()+ " " + getOP2() + " " + "=" + " " +fResult);
}



