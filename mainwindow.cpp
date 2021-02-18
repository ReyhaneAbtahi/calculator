#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //setStyleSheet("background:transparent;");
    //setAttribute(Qt::WA_TranslucentBackground);
    //setWindowFlags(Qt::FramelessWindowHint);
    setWindowOpacity(0.85);
    first=0;
    second=0;
    sign="";
    ui->setupUi(this);
    ui->label->setText("0");
    connect(ui->pushButton_21,SIGNAL(clicked()),this,SLOT(slot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_17_clicked()
{
    if(x==true||sign=="rev"||sign=="sqr"||sign=="sqrt"){
        on_pushButton_7_clicked();
        x=false;
    }
    QString a=ui->label->text();
    if(a=="0"){a="";}
    a.append("1");
    ui->label->setText(a);
    if(sign==""){
        first=a.toDouble();
        ui->label_2->setText(ui->label->text());
    }
    else{
        second=a.toDouble();
        QString temp=ui->label_2->text();
        if(temp[temp.length()-1]=="0"){temp[temp.length()-1]='1';}
        else temp.append("1");
        ui->label_2->setText(temp);
    }
}

void MainWindow::on_pushButton_20_clicked()
{
    if(x==true||sign=="rev"||sign=="sqr"||sign=="sqrt"){
        on_pushButton_7_clicked();
        x=false;
    }
    QString a=ui->label->text();
    if(a=="0"){a="";}
    a.append("2");
    ui->label->setText(a);
    if(sign==""){
        first=a.toDouble();
        ui->label_2->setText(ui->label->text());
    }
    else{
        second=a.toDouble();
        QString temp=ui->label_2->text();
        if(temp[temp.length()-1]=="0"){temp[temp.length()-1]='2';}
        else temp.append("2");
        ui->label_2->setText(temp);
    }
}

void MainWindow::on_pushButton_19_clicked()
{
    if(x==true||sign=="rev"||sign=="sqr"||sign=="sqrt"){
        on_pushButton_7_clicked();
        x=false;
    }
    QString a=ui->label->text();
    if(a=="0"){a="";}
    a.append("3");
    ui->label->setText(a);
    if(sign==""){
        first=a.toDouble();
        ui->label_2->setText(ui->label->text());
    }
    else{
        second=a.toDouble();
        QString temp=ui->label_2->text();
        if(temp[temp.length()-1]=="0"){temp[temp.length()-1]='3';}
        else temp.append("3");
        ui->label_2->setText(temp);
    }
}

void MainWindow::on_pushButton_16_clicked()
{
    if(x==true||sign=="rev"||sign=="sqr"||sign=="sqrt"){
        on_pushButton_7_clicked();
        x=false;
    }
    QString a=ui->label->text();
    if(a=="0"){a="";}
    a.append("4");
    ui->label->setText(a);
    if(sign==""){
        first=a.toDouble();
        ui->label_2->setText(ui->label->text());
    }
    else{
        second=a.toDouble();
        QString temp=ui->label_2->text();
        if(temp[temp.length()-1]=="0"){temp[temp.length()-1]='4';}
        else temp.append("4");
        ui->label_2->setText(temp);
    }
}

void MainWindow::on_pushButton_14_clicked()
{
    if(x==true||sign=="rev"||sign=="sqr"||sign=="sqrt"){
        on_pushButton_7_clicked();
        x=false;
    }
    QString a=ui->label->text();
    if(a=="0"){a="";}
    a.append("5");
    ui->label->setText(a);
    if(sign==""){
        first=a.toDouble();
        ui->label_2->setText(ui->label->text());
    }
    else{
        second=a.toDouble();
        QString temp=ui->label_2->text();
        if(temp[temp.length()-1]=="0"){temp[temp.length()-1]='5';}
        else temp.append("5");
        ui->label_2->setText(temp);
    }
}

void MainWindow::on_pushButton_15_clicked()
{
    if(x==true||sign=="rev"||sign=="sqr"||sign=="sqrt"){
        on_pushButton_7_clicked();
        x=false;
    }
    QString a=ui->label->text();
    if(a=="0"){a="";}
    a.append("6");
    ui->label->setText(a);
    if(sign==""){
        first=a.toDouble();
        ui->label_2->setText(ui->label->text());
    }
    else{
        second=a.toDouble();
        QString temp=ui->label_2->text();
        if(temp[temp.length()-1]=="0"){temp[temp.length()-1]='6';}
        else temp.append("6");
        ui->label_2->setText(temp);
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    if(x==true||sign=="rev"||sign=="sqr"||sign=="sqrt"){
        on_pushButton_7_clicked();
        x=false;
    }
    QString a=ui->label->text();
    if(a=="0"){a="";}
    a.append("7");
    ui->label->setText(a);
    if(sign==""){
        first=a.toDouble();
        ui->label_2->setText(ui->label->text());
    }
    else{
        second=a.toDouble();
        QString temp=ui->label_2->text();
        if(temp[temp.length()-1]=="0"){temp[temp.length()-1]='7';}
        else temp.append("7");
        ui->label_2->setText(temp);
    }
}

void MainWindow::on_pushButton_12_clicked()
{
    if(x==true||sign=="rev"||sign=="sqr"||sign=="sqrt"){
        on_pushButton_7_clicked();
        x=false;
    }
    QString a=ui->label->text();
    if(a=="0"){a="";}
    a.append("8");
    ui->label->setText(a);
    if(sign==""){
        first=a.toDouble();
        ui->label_2->setText(ui->label->text());
    }
    else{
        second=a.toDouble();
        QString temp=ui->label_2->text();
        if(temp[temp.length()-1]=="0"){temp[temp.length()-1]='8';}
        else temp.append("8");
        ui->label_2->setText(temp);
    }
}

void MainWindow::on_pushButton_10_clicked()
{
    if(x==true||sign=="rev"||sign=="sqr"||sign=="sqrt"){
        on_pushButton_7_clicked();
        x=false;
    }
    QString a=ui->label->text();
    if(a=="0"){a="";}
    a.append("9");
    ui->label->setText(a);
    if(sign==""){
        first=a.toDouble();
        ui->label_2->setText(ui->label->text());
    }
    else{
        second=a.toDouble();
        QString temp=ui->label_2->text();
        if(temp[temp.length()-1]=="0"){temp[temp.length()-1]='9';}
        else temp.append("9");
        ui->label_2->setText(temp);
    }
}

void MainWindow::on_pushButton_24_clicked()
{
    if(x==true||sign=="rev"||sign=="sqr"||sign=="sqrt"){
        on_pushButton_7_clicked();
        x=false;
    }
    QString a=ui->label->text();
    if(a=="0"){a="";}
    a.append("0");
    ui->label->setText(a);
    if(sign==""){
        first=a.toDouble();
        ui->label_2->setText(ui->label->text());
    }
    else{
        second=a.toDouble();
        QString temp=ui->label_2->text();
        if(temp[temp.length()-1]=="0"&&temp[temp.length()-2]==" "){temp[temp.length()-1]='0';}
        else temp.append("0");
        ui->label_2->setText(temp);
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->label->setText("0");
    ui->label_2->setText("");
    first=0;
    second=0;
    sign="";
}

void MainWindow::on_pushButton_8_clicked()
{
    if(!x){
    QString a=ui->label->text();
    QString b;
    for(int i=0;i<a.length()-1;i++){
        b[i]=a[i];
    }
    if(b=="")
        b="0";
    ui->label->setText(b);
    if(sign==""){
        first=b.toDouble();
        ui->label_2->setText(ui->label->text());
    }
    else{
        second=b.toDouble();
        QString temp=ui->label_2->text();
        for(int i=0;i<temp.length()-1;i++){
            b[i]=temp[i];
        }
        ui->label_2->setText(b);
    }
    a=ui->label->text();
    b=ui->label_2->text();
    if(a[a.length()-1]=='-'||b[b.length()-1]=='-')
        on_pushButton_8_clicked();
    }
}

void MainWindow::on_pushButton_22_clicked()
{
    if(x==true||sign=="rev"||sign=="sqr"||sign=="sqrt"){
        on_pushButton_7_clicked();
        x=false;
    }
    QString a=ui->label->text();
    if (a==""){a.append("0.");}
    else {a.append(".");}
    ui->label->setText(a);
    QString temp=ui->label_2->text();
    if(temp!="")
        temp.append(".");
    else
        temp.append("0.");
    ui->label_2->setText(temp);
}

void MainWindow::on_pushButton_18_clicked()
{
    if(sign==""){
        sign="+";
        ui->label->setText("");
    }
    else {
        on_pushButton_21_clicked();
        sign="+";
        ui->label->setText("");
    }
    QString temp=ui->label_2->text();
    temp.append(" + ");
    ui->label_2->setText(temp);
}

void MainWindow::on_pushButton_21_clicked()
{
    if(sign=="+"){
        first=first+second;
        second=0;
    }
    else if(sign=="-"){
        first=first-second;
        second=0;
    }
    else if(sign=="x"){
        if(second!=0.0||(second==0.0&&ui->label->text()=="0"))
            first=first*second;
        second=0;
    }
    else if(sign=="÷"){
        if(second!=0.0)
            first=first/second;
        if(second==0.0 && ui->label->text()=="0")
            first=0;
        second=0;
    }
    else if(sign=="%"){
        if(second!=0.0)
            first=(int)first%(int)second;
        second=0;
    }
   // ui->label->setText(QString("%1").arg(first, 0, '0', 30));
   // ui->label_2->setText(QString("%1").arg(first, 0, '0', 30));
    ui->label->setText(QString::number(first));
    ui->label_2->setText(QString::number(first));
}

void MainWindow::on_pushButton_23_clicked()
{
    QString temp=ui->label->text();
     QString t=temp;
    if(temp!="0"&&temp[0]!='-'&&temp!="")
        temp.push_front("-");
    else if(temp[0]=='-'){
        temp="";
        for(int i=0;i<t.length()-1;i++)
            temp[i]=t[i+1];
    }
    ui->label->setText(temp);
    if(sign==""){
        ui->label_2->setText(temp);
        first*=-1;
    }
    else {
        if(second==0.0&&t!="0"&&t!=""){
            first*=-1;
            ui->label_2->setText(temp);
        }
        else if (second!=0.0) {
            QString x,y;
            x=ui->label_2->text();
            second*=-1;
            for(int i=0;;i++){
                if(i==0||x[i]!=sign)
                    y[i]=x[i];
                else if(x[i]==sign){
                    y[i]=x[i];
                    y[i+1]=' ';
                    break;
                }
            }
            y.append(temp);
            ui->label_2->setText(y);
        }
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    if(sign==""){
        ui->label->setText("0");
        ui->label_2->setText("");
        first=0;
        second=0;
        sign="";
    }
    else {
        QString temp=ui->label_2->text();
        QString t;
        if(temp!=""&&second!=0.0&&temp!="0"){
            second=0;
            ui->label->setText("0");
            for(int i=0;;i++)
                if(i==0||temp[i]!=sign)
                    t[i]=temp[i];
                else if(temp[i]==sign){
                    t[i]=temp[i];
                    t[i+1]=' ';
                    break;
                }
            ui->label_2->setText(t);
        }
       else if(temp!=""&&second==0.0){
            ui->label->setText("0");
            ui->label_2->setText("");
            first=0;
            second=0;
            sign="";
        }
    }
}

void MainWindow::on_pushButton_13_clicked()
{
    if(sign==""){
        sign="-";
        ui->label->setText("");
    }
    else {
        on_pushButton_21_clicked();
        sign="-";
        ui->label->setText("");
    }
    QString temp=ui->label_2->text();
    temp.append(" - ");
    ui->label_2->setText(temp);
}

void MainWindow::on_pushButton_11_clicked()
{
    if(sign==""){
        sign="x";
        ui->label->setText("");
    }
    else {
        on_pushButton_21_clicked();
        sign="x";
        ui->label->setText("");
    }
    QString temp=ui->label_2->text();
    temp.append(" x ");
    ui->label_2->setText(temp);
}

void MainWindow::on_pushButton_5_clicked()
{
    if(sign==""){
        sign="÷";
        ui->label->setText("");
    }
    else {
        on_pushButton_21_clicked();
        sign="÷";
        ui->label->setText("");
    }
    QString temp=ui->label_2->text();
    temp.append(" ÷ ");
    ui->label_2->setText(temp);
}

void MainWindow::on_pushButton_clicked()
{
    if(sign==""){
        sign="%";
        ui->label->setText("");
    }
    else {
        on_pushButton_21_clicked();
        sign="%";
        ui->label->setText("");
    }
    QString temp=ui->label_2->text();
    temp.append(" % ");
    ui->label_2->setText(temp);
}

void MainWindow::on_pushButton_2_clicked()
{
    if(sign==""){
        sign="sqrt";
        ui->label->setText("");
    }
    else {
        on_pushButton_21_clicked();
        sign="sqrt";
        ui->label->setText("");
    }
    QString temp=ui->label_2->text();
    temp.push_front("sqrt(");
    temp.append(")");
    ui->label_2->setText(temp);
    first=sqrt(first);
    ui->label->setNum(first);
}

void MainWindow::on_pushButton_3_clicked()
{
    if(sign==""){
        sign="sqr";
        ui->label->setText("");
    }
    else {
        on_pushButton_21_clicked();
        sign="sqr";
        ui->label->setText("");
    }
    QString temp=ui->label_2->text();
    temp.push_front("sqr(");
    temp.append(")");
    ui->label_2->setText(temp);
    first*=first;
    ui->label->setNum(first);
}

void MainWindow::on_pushButton_4_clicked()
{
    if(sign==""){
        sign="rev";
        ui->label->setText("");
    }
    else {
        on_pushButton_21_clicked();
        sign="rev";
        ui->label->setText("");
    }
    QString temp=ui->label_2->text();
    temp.push_front("1/(");
    temp.append(")");
    ui->label_2->setText(temp);
    if(first!=0.0)
        first=1/first;
    ui->label->setNum(first);
}

void MainWindow::slot()
{
    x=true;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_0){
        on_pushButton_24_clicked();
    }
    if(event->key()==Qt::Key_1){
        on_pushButton_17_clicked();
    }
    if(event->key()==Qt::Key_2){
        on_pushButton_20_clicked();
    }
    if(event->key()==Qt::Key_3){
        on_pushButton_19_clicked();
    }
    if(event->key()==Qt::Key_4){
        on_pushButton_16_clicked();
    }
    if(event->key()==Qt::Key_5){
        on_pushButton_14_clicked();
    }
    if(event->key()==Qt::Key_6){
        on_pushButton_15_clicked();
    }
    if(event->key()==Qt::Key_7){
        on_pushButton_9_clicked();
    }
    if(event->key()==Qt::Key_8){
        on_pushButton_12_clicked();
    }
    if(event->key()==Qt::Key_9){
        on_pushButton_10_clicked();
    }
    if(event->key()==Qt::Key_Equal){
        slot();
        on_pushButton_21_clicked();
    }
    if(event->key()==Qt::Key_Backspace){
        on_pushButton_8_clicked();
    }
    if(event->key()==Qt::Key_Plus){
        on_pushButton_18_clicked();
    }
    if(event->key()==Qt::Key_Minus){
        on_pushButton_13_clicked();
    }
    if(event->key()==Qt::Key_multiply){
        on_pushButton_11_clicked();
    }
    if(event->key()==Qt::Key_Slash){
        on_pushButton_5_clicked();
    }
    if(event->key()==Qt::Key_Percent){
        on_pushButton_clicked();
    }
    if(event->key()==Qt::Key_Escape){
        on_pushButton_7_clicked();
    }
    if(event->key()==Qt::Key_Delete){
        on_pushButton_6_clicked();
    }
    if(event->key()==Qt::Key_Period){
        on_pushButton_22_clicked();
    }

}
