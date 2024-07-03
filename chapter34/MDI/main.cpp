#include <QApplication>
#include "MDIProgram.h"

int main(int argc, char** argv) 
{
    QApplication app(argc, argv);
    MDIProgram   pmdi;

    pmdi.setWindowTitle("MDI Program");
    pmdi.show();

    return app.exec();
}
