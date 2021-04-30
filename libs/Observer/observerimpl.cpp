/********************************************************************
 * Copyright (c) 2021 Edan Instruments,Inc.
 * All rights reserved.
 *
 * Project:    EUP
 * File:       observermng.cpp
 * Date:       2021-04-29
 * Author:     zhufan
 * Brief:
 * Other:      None
 *
 * Revision:
 *    Date:    2021-04-29
 *    Author:  zhufan
 *    Content: Create
 ********************************************************************
 */
#include "observerimpl.h"

#include "observer.h"

BEGIN_OBSERVER_NAMESPACE

ObserverMng *ObserverMng::instance()
{
    static ObserverMng obj;
    return &obj;
}

void ObserverMng::insert(Observer *ob)
{
    if(!contains<Observer *> (m_listObserver, ob)) {
        m_listObserver.push_back(ob);
    }
}

void ObserverMng::remove(Observer *ob)
{
    if(contains<Observer *> (m_listObserver, ob)) {
        m_listObserver.remove(ob);
    }
}

void ObserverMng::notify() const
{
    auto iter = m_listObserver.begin();
    while(iter != m_listObserver.end()) {
        if(nullptr != (*iter)) {
            (*iter)->notify();
        }
        iter++;
    }
}

ObserverMng::ObserverMng()
{
    m_listObserver.clear();
}

END_OBSERVER_NAMESPACE
