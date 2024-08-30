#include <iostream>
#include <QWidget>
#include <QApplication>


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.resize(800, 600);
    window.setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);
    window.setWindowTitle("Empty Qt Window");

    window.show();
    return app.exec();
};
//
// Created by ASUS on 2024/8/30.
//
