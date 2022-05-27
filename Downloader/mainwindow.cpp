#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QToolButton"
#include "QLineEdit"
#include "QToolBar"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //登录按钮
    QToolButton* user_login = new QToolButton(this);
    user_login->setGeometry(10, 10, 60, 50);
    user_login->setText("登录");

    QFont* user_login_font = new QFont;
    user_login_font->setPointSize(14);
    user_login_font->setFamily(("宋体"));
    user_login->setFont(*user_login_font);

    //输入框
    QLineEdit* line_edit = new QLineEdit(this);
    line_edit->setGeometry(290, 10, 450, 45);

    //设置输入框字体属性
    QFont* line_edit_font = new QFont;
    line_edit_font->setPointSize(10);
    line_edit_font->setFamily(("宋体"));
    line_edit->setFont(*line_edit_font);

    //下载按钮
    QToolButton* download = new QToolButton(this);
    download->setGeometry(740, 10, 45, 45);
    download->setIcon(QIcon(":/Icons/download.svg"));

    //分割线
    QFrame *line = new QFrame(this);
    line->setGeometry(QRect(80, 70, 10, 520));
    line->setFrameShape(QFrame::VLine);
    line->setFrameShadow(QFrame::Sunken);
    line->raise();

    //额外的一些按钮
    QToolButton* left_download = new QToolButton(this);
    left_download->setGeometry(15, 70, 65, 65);
    left_download->setIcon(QIcon(":/Icons/download.svg"));


}

MainWindow::~MainWindow()
{
    delete ui;
}

