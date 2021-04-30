/********************************************************************
 * Copyright (c) 2021 Edan Instruments,Inc.
 * All rights reserved.
 *
 * Project:    EUP
 * File:       observer_global.h
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
#ifndef OBSERVER_GLOBAL_H
#define OBSERVER_GLOBAL_H

#if defined(_MSC_VER) || defined(WIN64) || defined(_WIN64) || defined(__WIN64__) || defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#  define OBSERVER_DECL_EXPORT      __declspec(dllexport)
#  define OBSERVER_DECL_EXPORT      __declspec(dllimport)
#else
#  define OBSERVER_DECL_EXPORT      __attribute__((visibility("default")))
#  define OBSERVER_DECL_IMPORT      __attribute__((visibility("default")))
#endif

#if defined(OBSERVER_LIBRARY)
#  define OBSERVER_EXPORT           OBSERVER_DECL_EXPORT
#else
#  define OBSERVER_EXPORT           OBSERVER_DECL_EXPORT
#endif

#define BEGIN_OBSERVER_NAMESPACE    namespace observer {
#define END_OBSERVER_NAMESPACE      }

#endif // OBSERVER_GLOBAL_H
