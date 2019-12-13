#include "addnodedialog.h"
#include "ui_addnodedialog.h"

AddNodeDialog::AddNodeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNodeDialog)
{
    ui->setupUi(this);
}

AddNodeDialog::~AddNodeDialog()
{
    delete ui;
}
