#include <qapplication.h>
#include "MainWindow.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    MainWindow mw;

    mw.resize(235, 180);
    mw.show();

    return app.exec();
}
