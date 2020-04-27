#ifndef MYCUSTOMWIDGET_H
#define MYCUSTOMWIDGET_H

#include <QObject>
#include <QWidget>
#include <QMouseEvent>

class MyCustomWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyCustomWidget(QWidget *parent = nullptr);

private slots:
    void on_lbl_clicked();

protected:
    void mousePressEvent(QMouseEvent *event) override;
};

#endif // MYCUSTOMWIDGET_H
