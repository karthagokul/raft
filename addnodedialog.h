#ifndef ADDNODEDIALOG_H
#define ADDNODEDIALOG_H

#include <QDialog>

namespace Ui {
class AddNodeDialog;
}

class AddNodeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddNodeDialog(QWidget *parent = 0);
    ~AddNodeDialog();

private:
    Ui::AddNodeDialog *ui;
};

#endif // ADDNODEDIALOG_H
