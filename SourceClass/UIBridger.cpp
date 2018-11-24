#include "UIBridger.h"
#include <QDebug>

UIBridger::UIBridger()
{

}

void UIBridger::callMeFromQML()
{
    qDebug() << "Call me from QML";
}

QString UIBridger::buttonName()
{
    return "Hunght button";
}
