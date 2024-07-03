#include <QtWidgets>
int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    QTranslator translator;
    translator.load(":/main_ru.qm");
    app.installTranslator(&translator);
 
    QLabel lbl(QObject::tr("Hello"));

    lbl.show();
    return app.exec();
}
