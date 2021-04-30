/********************************************************************
 * Copyright (c) 2021 Edan Instruments,Inc.
 * All rights reserved.
 *
 * Project:    EUP
 * File:       mainwindow.cpp
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
#include "ui_mainwindow.h"

#include "concreteobserver.h"
#include "Observer/observerimpl.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_pObserver = new ConcreteObserver();
    pObserverImpl->notify();
}

MainWindow::~MainWindow()
{
    delete ui;
}
