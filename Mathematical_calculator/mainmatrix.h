#ifndef MAINMATRIX_H
#define MAINMATRIX_H

#include <QDialog>

namespace Ui {
class mainmatrix;
}

class mainmatrix : public QDialog
{
    Q_OBJECT

public:
    explicit mainmatrix(QWidget *parent = nullptr);
    ~mainmatrix();

private:
    Ui::mainmatrix *ui;
};

#endif // MAINMATRIX_H
