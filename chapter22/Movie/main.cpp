#include <QtWidgets>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);    
    QLabel       lbl;
    QMovie       mov(":/motion.gif");

    mov.start();

    lbl.setMovie(&mov);
    lbl.resize(mov.frameRect().size());
    lbl.show();

    return app.exec();
}

