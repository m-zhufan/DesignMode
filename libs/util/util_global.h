/********************************************************************
 * Copyright (c) 2021 Edan Instruments,Inc.
 * All rights reserved.
 *
 * Project:    EUP
 * File:       util_global.h
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
#ifndef UTIL_GLOBAL_H
#define UTIL_GLOBAL_H

#if defined(_MSC_VER) || defined(WIN64) || defined(_WIN64) || defined(__WIN64__) || defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#  define OBSERVER_DECL_EXPORT      __declspec(dllexport)
#  define OBSERVER_DECL_EXPORT      __declspec(dllimport)
#else
#  define UTIL_DECL_EXPORT          __attribute__((visibility("default")))
#  define UTIL_DECL_IMPORT          __attribute__((visibility("default")))
#endif

#if defined(UTIL_LIBRARY)
#  define UTIL_EXPORT               UTIL_DECL_EXPORT
#else
#  define UTIL_EXPORT               UTIL_DECL_EXPORT
#endif

#define BEGIN_UTIL_NAMESPACE    namespace util {
#define END_UTIL_NAMESPACE      }


#define DECL_CLASS_TYPE(Class, Tag)  \
    public:                                                                          \
    class Class;                                                                     \
    friend class Class;                                                              \
    inline Class* Tag##_ptr() { return __M_##Tag; }                                  \
    inline const Class* Tag##_ptr() const { return __M_##Tag; }                      \
    private: Class      *__M_##Tag = 0;                                              \

#define DECL_CLASS_DATA     DECL_CLASS_TYPE(Data, d)
#define DECL_CLASS_IMPL     DECL_CLASS_TYPE(Impl, impl)


#endif // UTIL_GLOBAL_H
