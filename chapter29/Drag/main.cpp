#include <QApplication>

#include "Drag.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    Drag         drag;

    drag.resize(150, 150);
    drag.show();

    return app.exec();
}
