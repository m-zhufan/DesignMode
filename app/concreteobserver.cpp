/********************************************************************
 * Copyright (c) 2021 Edan Instruments,Inc.
 * All rights reserved.
 *
 * Project:    EUP
 * File:       concreteobserver.cpp
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
#include "concreteobserver.h"

ConcreteObserver::ConcreteObserver()
{

}

ConcreteObserver::~ConcreteObserver()
{

}

bool ConcreteObserver::notify() const
{
    return true;
}
