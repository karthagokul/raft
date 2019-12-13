#include "removenodedialog.h"
#include "ui_removenodedialog.h"

RemoveNodeDialog::RemoveNodeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveNodeDialog)
{
    ui->setupUi(this);
}

RemoveNodeDialog::~RemoveNodeDialog()
{
    delete ui;
}
