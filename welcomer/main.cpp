#include <QApplication>
#include <QMainWindow>
#include "welcomer.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QDialog window;
    Ui::Welcomer ui;
    ui.setupUi(&window);

    window.show();
    return app.exec();
}
