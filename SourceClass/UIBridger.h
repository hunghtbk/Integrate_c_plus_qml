#ifndef UIBRIDGER_H
#define UIBRIDGER_H

#include <QObject>

class UIBridger: public QObject
{
    Q_OBJECT
public:
    UIBridger();
public slots:
    void callMeFromQML();
    QString buttonName();
};

#endif // UIBRIDGER_H
