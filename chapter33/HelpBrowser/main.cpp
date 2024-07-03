#include <QApplication>
#include "HelpBrowser.h"

int main (int argc, char** argv)
{
    QApplication app(argc, argv);  
    HelpBrowser  helpBrowser(":/", "index.htm");

    helpBrowser.resize(450, 350);
    helpBrowser.show();

    return app.exec();
}
