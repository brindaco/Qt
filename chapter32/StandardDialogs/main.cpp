#include <QApplication>
#include "StartDialog.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    StartDialog  startDialog;
    
    startDialog.setMinimumWidth(200);
    startDialog.show();

    return app.exec();
}

