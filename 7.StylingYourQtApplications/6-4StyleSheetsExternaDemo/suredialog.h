#ifndef SUREDIALOG_H
#define SUREDIALOG_H

#include <QDialog>

namespace Ui {
class SureDialog;
}

class SureDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SureDialog(QWidget *parent = 0);
    ~SureDialog();

private:
    Ui::SureDialog *ui;
};

#endif // SUREDIALOG_H
