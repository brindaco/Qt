#include <QtWidgets>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    QLabel lbl("<CENTER><A HREF=\"http://www.bhv.ru\">www.bhv.ru</A></CENTER>");

    lbl.setOpenExternalLinks(true);
    lbl.show();

    return app.exec();
}
