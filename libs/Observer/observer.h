/********************************************************************
 * Copyright (c) 2021 Edan Instruments,Inc.
 * All rights reserved.
 *
 * Project:    EUP
 * File:       observer.h
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
#ifndef OBSERVER_H
#define OBSERVER_H

#include "observer_global.h"

BEGIN_OBSERVER_NAMESPACE

class OBSERVER_EXPORT Observer
{
public:
    explicit Observer();
    virtual ~Observer();

    virtual bool notify() const = 0;
};

END_OBSERVER_NAMESPACE

#endif // OBSERVER_H
