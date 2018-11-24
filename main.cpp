#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "UIBridger.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QQmlContext *ctx = engine.rootContext();

    UIBridger _uibridge;
    ctx->setContextProperty("UIBridge", &_uibridge);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
