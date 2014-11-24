#ifndef KONWERTER_H
#define KONWERTER_H

#include <QWidget>

namespace Ui {
class Konwerter;
}

class Konwerter : public QWidget
{
    Q_OBJECT

public:
    explicit Konwerter(QWidget *parent = 0);
    ~Konwerter();

private:
    Ui::Konwerter *ui;

public slots:
    void Przeliczaj();
    void Lista();

};

#endif // KONWERTER_H
