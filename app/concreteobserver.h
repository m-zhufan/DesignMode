/********************************************************************
 * Copyright (c) 2021 Edan Instruments,Inc.
 * All rights reserved.
 *
 * Project:    EUP
 * File:       concreteobserver.h
 * Date:       2021-04-30
 * Author:     zhufan
 * Brief:
 * Other:      None
 *
 * Revision:
 *    Date:    2021-04-30
 *    Author:  zhufan
 *    Content: Create
 ********************************************************************
 */
#ifndef CONCRETEOBSERVER_H
#define CONCRETEOBSERVER_H

#include "Observer/observer.h"

class ConcreteObserver : public observer::Observer
{
public:
    explicit ConcreteObserver();
    virtual ~ConcreteObserver();

    virtual bool notify() const override;
};

#endif // CONCRETEOBSERVER_H
