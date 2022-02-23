#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void setEndOfString(int b)
    {
        endString = b;
    }
    int getEndOfString()
    {
        return endString;
    }
    void setOP1(QString op)
    {
        op1 += op;
    }
    void setOP2(QString op)
    {
        op2 += op;
    }
    void resetOP1(QString op)
    {
        op1 = op;
    }
    void resetOP2(QString op)
    {
        op2 = op;
    }
    QString getOP1()
    {
        return op1;
    }
    QString getOP2()
    {
        return op2;
    }
    void setOperator(QString a)
    {
        math = a;
    }
    QString getOperator()
    {
        return math;
    }
    void setNum(QString a)
    {
        number = a;
    }
    void setResult(double d)
    {
        result = d;
        nResult = QString::number(result);
    }
    QString getResult()
    {
        return nResult;
    }
    double getNum()
    {
        return num;
    }
   /* void setX(double a)
    {
        num = a;
    }

    double getX()
    {
        return num;
    }
    void setY(QString a)
    {
        numb = a;
    }

    double getY()
    {
        return num;
    }
*/
private slots:
    void on_ePushButton_clicked();

    void on_pPushButton_clicked();

    void on_dPushButton_clicked();

    void on_pushButtonPi_clicked();

    void on_pushButtonE_clicked();

    void on_pushButtonCE_clicked();

    void on_pushButtonDelete_clicked();

    void on_pushButtonSquared_clicked();

    void on_pushButtonDivideX_clicked();

    void on_pushButtonAbsVal_clicked();

    void on_pushButtonExp_clicked();

    void on_pushButtonMod_clicked();

    void on_pushButtonSqrt_clicked();

    void on_pushButtonBaseExp_clicked();

    void on_pushButtonTenToX_clicked();

    void on_pushButtonLog_clicked();

    void on_pushButtonLn_clicked();

    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

    void on_pushButton0_clicked();

    void on_pushButton3_clicked();

    void on_pushButton4_clicked();

    void on_pushButton5_clicked();

    void on_pushButton6_clicked();

    void on_pushButton7_clicked();

    void on_pushButton8_clicked();

    void on_pushButton9_clicked();

    void on_pushButtonLparenth_clicked();

    void on_pushButtonRparenth_clicked();

    void on_pushButtonFactorial_clicked();

    void on_pushButtonSign_clicked();

    void on_pushButtonDecimal_clicked();

    void on_tPushButton_clicked();

    void on_sPushButton_clicked();

private:
    Ui::Widget *ui;
    double x, y, num, result;
    int b, endString = 0;
    QString math, number, op1, op2, a, nResult;

};
#endif // WIDGET_H
