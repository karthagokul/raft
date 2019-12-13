#include "configurenodedialog.h"
#include "ui_configurenodedialog.h"

ConfigureNodeDialog::ConfigureNodeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfigureNodeDialog)
{
    ui->setupUi(this);
}

ConfigureNodeDialog::~ConfigureNodeDialog()
{
    delete ui;
}
