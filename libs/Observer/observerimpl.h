/********************************************************************
 * Copyright (c) 2021 Edan Instruments,Inc.
 * All rights reserved.
 *
 * Project:    EUP
 * File:       observermng.h
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
#ifndef OBSERVERMNG_H
#define OBSERVERMNG_H

#include "observer_global.h"
#include <list>

BEGIN_OBSERVER_NAMESPACE

class Observer;
class ObserverMng
{
public:
    static ObserverMng *instance();

    template<typename T>
    inline bool contains(const std::list<T> &l, const T &v){
        auto iter = l.cbegin();
        while(iter != l.cend()){
            if(v == *(iter++))
                return true;
        }
        return false;
    }

public:
    void insert(Observer *ob);
    void remove(Observer *ob);

    virtual void notify() const;

protected:
    ObserverMng();

private:
    std::list<Observer *> m_listObserver;
};

END_OBSERVER_NAMESPACE

#define pObserverImpl (observer::ObserverMng::instance())

#endif // OBSERVERMNG_H
