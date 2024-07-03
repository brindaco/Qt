#include <QApplication>
#include "MainWindow.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    MainWindow mw;

    mw.resize(210, 210);
    mw.show();

    return app.exec();
}
