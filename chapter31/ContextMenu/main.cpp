#include <QApplication>
#include "ContextMenu.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    ContextMenu  contextMenu;

    contextMenu.resize(150, 150);
    contextMenu.show();

    return app.exec();
}
