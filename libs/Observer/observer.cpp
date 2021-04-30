/********************************************************************
 * Copyright (c) 2021 Edan Instruments,Inc.
 * All rights reserved.
 *
 * Project:    EUP
 * File:       observer.cpp
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
#include "observer.h"

#include <list>
#include "observerimpl.h"

BEGIN_OBSERVER_NAMESPACE

Observer::Observer()
{
    pObserverImpl->insert(this);
}

Observer::~Observer()
{
    pObserverImpl->remove(this);
}

END_OBSERVER_NAMESPACE
