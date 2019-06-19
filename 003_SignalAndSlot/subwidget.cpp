#include "subwidget.h"

SubWidget::SubWidget(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("son");
    b.setParent(this);
    b.setText("切换到主窗口");

    connect(&b, &QPushButton::clicked, this, &SubWidget::sendSlot);

    resize(400, 300);
}

void SubWidget::sendSlot()
{
    emit mySignal();
    emit mySignal(250, QString("i am son"));
}

