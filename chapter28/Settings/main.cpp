#include <QApplication>
#include "MyProgram.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    MyProgram    myProgram;

    myProgram.show();

    return app.exec();
}
