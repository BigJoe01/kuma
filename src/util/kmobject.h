//
//  kmobject.h
//  kuma
//
//  Created by Fengping Bao <jamol@live.com> on 7/17/16.
//  Copyright © 2016 kuma. All rights reserved.
//

#ifndef __KMObject_H__
#define __KMObject_H__

#include "kmdefs.h"
#include <string>

KUMA_NS_BEGIN

class KMObject
{
public:
    const std::string& getObjKey() const {
        return objKey_;
    }
    
protected:
    std::string objKey_;
};

#define KM_SetObjKey(x) \
do{ \
    std::stringstream ss; \
    ss<<x; \
    objKey_ = ss.str();\
}while(0)

KUMA_NS_END

#endif /* __KMObject_H__ */
