#ifndef REMOVENODEDIALOG_H
#define REMOVENODEDIALOG_H

#include <QDialog>

namespace Ui {
class RemoveNodeDialog;
}

class RemoveNodeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveNodeDialog(QWidget *parent = 0);
    ~RemoveNodeDialog();

private:
    Ui::RemoveNodeDialog *ui;
};

#endif // REMOVENODEDIALOG_H
