#ifndef MAINSTATISTICS_H
#define MAINSTATISTICS_H

#include <QDialog>

namespace Ui {
class mainstatistics;
}

class mainstatistics : public QDialog
{
    Q_OBJECT

public:
    explicit mainstatistics(QWidget *parent = nullptr);
    ~mainstatistics();

private:
    Ui::mainstatistics *ui;
};

#endif // MAINSTATISTICS_H
