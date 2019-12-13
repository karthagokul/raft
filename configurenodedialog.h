#ifndef CONFIGURENODEDIALOG_H
#define CONFIGURENODEDIALOG_H

#include <QDialog>

namespace Ui {
class ConfigureNodeDialog;
}

class ConfigureNodeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConfigureNodeDialog(QWidget *parent = 0);
    ~ConfigureNodeDialog();

private:
    Ui::ConfigureNodeDialog *ui;
};

#endif // CONFIGURENODEDIALOG_H
