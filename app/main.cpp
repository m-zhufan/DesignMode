/********************************************************************
 * Copyright (c) 2021 Edan Instruments,Inc.
 * All rights reserved.
 *
 * Project:    EUP
 * File:       main.cpp
 * Date:       2021-04-28
 * Author:     zhufan
 * Brief:
 * Other:      None
 *
 * Revision:
 *    Date:    2021-04-28
 *    Author:  zhufan
 *    Content: Create
 ********************************************************************
 */
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
